import sys

from PySide6.QtWidgets import QApplication

from src.Views import MainWindow

if __name__ == '__main__':
    app = QApplication([])

    main_window = MainWindow()
    main_window.show()

    sys.exit(app.exec())
