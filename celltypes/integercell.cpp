#include "integercell.h"

IntegerCell::IntegerCell(QString value)
    : NumberCell(value)
{
    this->setTextColor(QColor(0, 0, 255));
}
