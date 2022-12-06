from typing import Optional

from PySide6.QtCore import QObject, Signal
from PySide6.QtWidgets import QGraphicsScene, QGraphicsSceneMouseEvent, QGraphicsView, QWidget


class GraphicsScene(QGraphicsScene):
    add_state = Signal(float, float)

    def __init__(self, parent: Optional[QObject] = None):
        super().__init__(parent)

    def mousePressEvent(self, event: QGraphicsSceneMouseEvent) -> None:
        self.add_state.emit(event.scenePos().x(), event.scenePos().y())

        super().mousePressEvent(event)


class GraphicsView(QGraphicsView):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        self.graphics_scene = GraphicsScene(self)
        self.setScene(self.graphics_scene)
