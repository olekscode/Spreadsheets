#ifndef TEXTCELL_H
#define TEXTCELL_H

#include <QString>

#include "celltype.h"

class TextCell : public CellType
{
public:
    explicit TextCell(QString value);
};

#endif // TEXTCELL_H
