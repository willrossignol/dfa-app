#pragma once

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <DockWidget.h>
#include <QTextEdit>

enum class AppMode : int
{
	DEFAULT,
	ADD_STATE
};

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow();

	AppMode getAppMode() { return mode; }
	void setAppMode(AppMode mode);

private:
	AppMode mode = AppMode::DEFAULT;
	QGraphicsView* centralWidget;
	QGraphicsScene* scene;
	DockWidget* dock;
};