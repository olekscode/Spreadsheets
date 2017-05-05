#ifndef NUMBERCELL_H
#define NUMBERCELL_H

#include <QString>

#include "celltype.h"

class NumberCell : public CellType
{
public:
    explicit NumberCell(QString value);
};

#endif // NUMBERCELL_H
