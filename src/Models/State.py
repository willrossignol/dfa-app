from typing import Optional

from PySide6.QtGui import QPen, QBrush
from PySide6.QtWidgets import QGraphicsEllipseItem, QGraphicsItem


class State(QGraphicsEllipseItem):
    def __init__(self, rect, parent: Optional[QGraphicsItem] = None):
        super().__init__(rect, parent)
        pen = QPen("#346beb")
        brush = QBrush("#a1b5e3")
        self.setPen(pen)
        self.setBrush(brush)
