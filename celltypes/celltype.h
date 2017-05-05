#ifndef CELLTYPE_H
#define CELLTYPE_H

#include <QTableWidgetItem>
#include <QString>

class CellType : public QTableWidgetItem
{
public:
    explicit CellType(QString value);
};

#endif // CELLTYPE_H
