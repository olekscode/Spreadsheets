#include "floatcell.h"

FloatCell::FloatCell(QString value)
    : NumberCell(value)
{
    this->setTextColor(QColor(65, 112, 141));
}
