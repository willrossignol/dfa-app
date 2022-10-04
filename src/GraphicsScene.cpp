#include <GraphicsScene.h>
#include <GraphicsObjects/StateGraphicObject.h>
#include <MainWindow.h>

GraphicsScene::GraphicsScene(QObject* parent) : QGraphicsScene(parent)
{
	setSceneRect(0, 0, 600, 400);
}

void GraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
	const auto view = qobject_cast<QGraphicsView*>(this->parent());
	const auto main = qobject_cast<MainWindow*>(view->parentWidget());
	const auto pos = event->buttonDownScenePos(Qt::MouseButton::LeftButton);

	switch (main->getAppMode())
	{
	case AppMode::ADD_STATE:
	{
		auto* state = new StateGraphicObject;
		state->setPos(pos);
		addItem(state);
		break;
	}
	case AppMode::DEFAULT:
	{
		QGraphicsScene::mousePressEvent(event);
		break;
	}
	default:
	{
		break;
	}
	}

}
