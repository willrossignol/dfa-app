from PySide6.QtCore import QObject, QRectF

from src.Models.State import State
from src.Views import GraphicsView


class GraphicsController(QObject):
    def __init__(self, parent: GraphicsView):
        self.states: [State] = []

        parent.graphics_scene.add_state.connect(self.handle_add_state)

        super().__init__(parent)

    def handle_add_state(self, x, y):
        rect = QRectF(x - 12.5, y - 12.5, 25, 25)

        state = State(rect)
        self.states.append(state)

        self.parent().graphics_scene.addItem(state)

    def parent(self) -> GraphicsView:
        return super().parent()
