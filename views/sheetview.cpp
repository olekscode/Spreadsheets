#include "sheetview.h"

SheetView::SheetView(QWidget *parent)
    : QTableWidget(100, 1000, parent)
{
    setSizeAdjustPolicy(QTableWidget::AdjustToContents);

    QTableWidgetItem *newItem;

    for (int i = 0; i < rowCount(); ++i) {
        for (int j = 0; j < columnCount(); ++j) {
            newItem = new QTableWidgetItem();
            this->setItem(i, j, newItem);
        }
    }

    for (int c = 0; c < columnCount(); ++c) {
        QString character = charIndex(c + 1);
        setHorizontalHeaderItem(c, new QTableWidgetItem(character));
    }

    connect(this, SIGNAL(cellChanged(int, int)),
            this, SLOT(parseCell(int, int)));
}

QString SheetView::charIndex(int index) const
{
    QString res = QString();
    int alphabetSize = 26;

    while (index != 0) {
        res = QString(QChar('A' + (index - 1) % alphabetSize)) + res;
        index = (index - 1) / alphabetSize;
    }

    return res;
}

void SheetView::parseCell(int row, int col)
{
    QTableWidgetItem *item = this->item(row, col);
    QTableWidgetItem *newItem;
    QString value = item->text();

    newItem = deductor.copyWithType(item);

    // This is a hack to prevent the cellChanged signal
    // from firing again (it would create a loop)
    this->blockSignals(true);
    this->setItem(row, col, newItem);
    this->blockSignals(false);
}

