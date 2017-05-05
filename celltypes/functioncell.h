#ifndef FUNCTIONCELL_H
#define FUNCTIONCELL_H

#include <QString>

#include "celltype.h"

class FunctionCell : public CellType
{
public:
    explicit FunctionCell(QString value);
};

#endif // FUNCTIONCELL_H
