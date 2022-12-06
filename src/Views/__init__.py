from typing import Optional

from PySide6.QtCore import Qt
from PySide6.QtWidgets import QMainWindow, QWidget, QToolBar

from src.Controllers.GraphicsController import GraphicsController
from src.Views.GraphicsView import GraphicsScene, GraphicsView


class MainWindow(QMainWindow):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        self.tool_bar = ToolBar(self)
        self.addToolBar(Qt.ToolBarArea.TopToolBarArea, self.tool_bar)

        graphics_view = GraphicsView(self)
        graphics_controller = GraphicsController(graphics_view)
        self.setCentralWidget(graphics_view)


class ToolBar(QToolBar):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
