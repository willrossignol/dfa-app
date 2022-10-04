#pragma once

#include <QDockWidget>
#include <QPushButton>
#include <QHBoxLayout>

class DockWidget : public QDockWidget
{
	Q_OBJECT
public:
	DockWidget(QWidget* parent = nullptr);

private:
	QPushButton* addStateButton;
	QHBoxLayout* layout;

private slots:
	void handleButtonToggled(bool checked);
};