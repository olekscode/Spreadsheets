#include "floatcell.h"

FloatCell::FloatCell(QString value)
    : NumberCell(value)
{
    this->setTextColor(QColor(255, 0, 255));
}
