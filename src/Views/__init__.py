from typing import Optional

from PySide6.QtCore import Qt
from PySide6.QtWidgets import QMainWindow, QWidget, QToolBar, QLabel


class MainWindow(QMainWindow):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        tool_bar = ToolBar(self)
        self.addToolBar(Qt.ToolBarArea.TopToolBarArea, tool_bar)

        label = QLabel("Test", self)

        self.setCentralWidget(label)


class ToolBar(QToolBar):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)