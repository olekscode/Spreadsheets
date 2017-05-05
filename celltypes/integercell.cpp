#include "integercell.h"

IntegerCell::IntegerCell(QString value)
    : NumberCell(value)
{
    this->setTextColor(QColor(19, 124, 189));
}
