#include "datecell.h"

DateCell::DateCell(QString value)
    : CellType(value)
{
    this->setTextColor(QColor(181, 137, 0));
}
