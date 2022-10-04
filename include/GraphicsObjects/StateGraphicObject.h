#pragma once
#include <QGraphicsEllipseItem>

class StateGraphicObject : public QGraphicsEllipseItem
{
public:
	explicit StateGraphicObject(QGraphicsItem* parent = nullptr);

private:
	void paint(QPainter* paint, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};
