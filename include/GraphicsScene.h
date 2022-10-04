#pragma once
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class GraphicsScene : public QGraphicsScene
{
	Q_OBJECT
public:
	GraphicsScene(QObject* parent = nullptr);

private:
	void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
};