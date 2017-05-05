#ifndef FLOATCELL_H
#define FLOATCELL_H

#include <QString>

#include "numbercell.h"

class FloatCell : public NumberCell
{
public:
    explicit FloatCell(QString value);
};

#endif // FLOATCELL_H
