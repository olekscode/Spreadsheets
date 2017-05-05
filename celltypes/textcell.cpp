#include "textcell.h"

TextCell::TextCell(QString value)
    : CellType(value)
{
    this->setTextColor(QColor(0, 138, 44));
}
