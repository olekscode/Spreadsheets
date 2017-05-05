#ifndef DATECELL_H
#define DATECELL_H

#include <QString>
#include <QDate>

#include "celltype.h"

class DateCell : public CellType
{
public:
    explicit DateCell(QString value);

private:
    QDate _date;
};

#endif // DATECELL_H
