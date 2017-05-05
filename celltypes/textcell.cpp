#include "textcell.h"

TextCell::TextCell(QString value)
    : CellType(value)
{
    this->setTextColor(QColor(0, 255, 0));
}
