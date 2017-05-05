#include "errorcell.h"

ErrorCell::ErrorCell(QString value)
    : CellType(value)
{
    this->setText(QString("ERR"));
    this->setTextColor(QColor(255, 0, 0));
}
