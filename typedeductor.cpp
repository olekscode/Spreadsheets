#include "typedeductor.h"

TypeDeductor::TypeDeductor(QObject *parent) : QObject(parent)
{

}

// WARNING: It's not safe to return an allocated pointer
// and expect it to be deleted elsewhere.
// This may cause a memory leak
QTableWidgetItem* TypeDeductor::copyWithType(QTableWidgetItem *item) const
{
    QString value = item->text();

    if (QRegExp("[1-9][0-9]*")
            .exactMatch(value)) {
        return new IntegerCell(value);
    }
    else if (QRegExp("[+|-]?(0|[1-9]+)?\.[0-9]+")
             .exactMatch(value)) {
        return new FloatCell(value);
    }
    else if (QRegExp("(0[1-9]|[1-2][0-9]|3[0-1])\.(0[1-9]|1[0-2])\.[1-9][0-9]{3}")
            .exactMatch(value)) {
        return new DateCell(value);
    }
    return new TextCell(value);
}
