#include "celltype.h"

CellType::CellType(QString value)
    : QTableWidgetItem(UserType)
{
    this->setText(value);
}
