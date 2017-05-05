#ifndef ERRORCELL_H
#define ERRORCELL_H

#include <QString>

#include "celltype.h"

class ErrorCell : public CellType
{
public:
    explicit ErrorCell(QString value);
};

#endif // ERRORCELL_H
