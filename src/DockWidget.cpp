#include <DockWidget.h>
#include <MainWindow.h>

DockWidget::DockWidget(QWidget* parent) : QDockWidget(parent)
{
	setWindowTitle("Controls");

	layout = new QHBoxLayout(this);
	setLayout(layout);

	addStateButton = new QPushButton("Add Circle", this);
	addStateButton->setCheckable(true);
	addStateButton->setStyleSheet("QPushButton:checked{ background-color:blue; }");

	layout->addWidget(addStateButton);

	setFeatures(NoDockWidgetFeatures);
	setAllowedAreas(Qt::DockWidgetArea::TopDockWidgetArea);

	// Connections
	connect(addStateButton, SIGNAL(toggled(bool)), this, SLOT(handleButtonToggled(bool)));
}

void DockWidget::handleButtonToggled(bool checked)
{
	const auto button = qobject_cast<QPushButton*>(sender());

	if (button == nullptr)
	{
		return;
	}
	if (button == addStateButton)
	{
		const auto main = qobject_cast<MainWindow*>(this->parentWidget());
		if (checked)
		{
			main->setAppMode(AppMode::ADD_STATE);
		}
		else
		{
			main->setAppMode(AppMode::DEFAULT);
		}
	}
}
