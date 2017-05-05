#ifndef INTEGERCELL_H
#define INTEGERCELL_H

#include <QString>

#include "numbercell.h"

class IntegerCell : public NumberCell
{
public:
    explicit IntegerCell(QString value);
};

#endif // INTEGERCELL_H
