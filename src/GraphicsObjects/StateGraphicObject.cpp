#include <QGraphicsScene>
#include <qpainter.h>
#include <GraphicsObjects/StateGraphicObject.h>
#include <QStyleOptionGraphicsItem>

StateGraphicObject::StateGraphicObject(QGraphicsItem* parent) : QGraphicsEllipseItem(parent)
{
	setRect(0, 0, 25, 25);
	setBrush(QBrush(Qt::GlobalColor::black));
	setFlags(flags() | ItemIsMovable | ItemIsSelectable | ItemSendsGeometryChanges);
}

void StateGraphicObject::paint(QPainter* paint, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
	if (option->state == QStyle::State_Selected)
	{
		paint->setPen(QPen(QColor(Qt::GlobalColor::red)));
		QGraphicsEllipseItem::paint(paint, option, widget);
	}
	QGraphicsEllipseItem::paint(paint, option, widget);
}
