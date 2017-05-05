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

    if (QRegExp("[1-9][0-9]*").exactMatch(value)) {
        return new IntegerCell(value);
    }
    else if (QRegExp("[1-9][0-9]*\.[0-9]+").exactMatch(value)) {
        return new FloatCell(value);
    }
    return new TextCell(value);
}
