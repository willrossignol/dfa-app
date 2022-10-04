#include <MainWindow.h>
#include <GraphicsScene.h>

MainWindow::MainWindow()
{
	setWindowTitle("Text Editor");

	scene = new GraphicsScene();
	centralWidget = new QGraphicsView(scene, this);
	scene->setParent(centralWidget);
	centralWidget->setRenderHints(QPainter::RenderHint::Antialiasing | centralWidget->renderHints());
	dock = new DockWidget(this);

	setCentralWidget(centralWidget);
	addDockWidget(Qt::DockWidgetArea::TopDockWidgetArea, dock);
}

void MainWindow::setAppMode(AppMode mode)
{
	this->mode = mode;
}
