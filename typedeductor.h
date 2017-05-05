#ifndef TYPEDEDUCTOR_H
#define TYPEDEDUCTOR_H

#include <QObject>
#include <QTableWidgetItem>
#include <QString>
#include <QDebug>

#include "celltypes/datecell.h"
#include "celltypes/errorcell.h"
#include "celltypes/functioncell.h"
#include "celltypes/integercell.h"
#include "celltypes/floatcell.h"
#include "celltypes/textcell.h"

class TypeDeductor : public QObject
{
    Q_OBJECT
public:
    explicit TypeDeductor(QObject *parent = 0);

    QTableWidgetItem* copyWithType(QTableWidgetItem *item) const;
};

#endif // TYPEDEDUCTOR_H
