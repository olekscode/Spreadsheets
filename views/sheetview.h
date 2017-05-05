#ifndef SHEETVIEW_H
#define SHEETVIEW_H

#include <QWidget>
#include <QTableWidget>

#include "typedeductor.h"

class SheetView : public QTableWidget
{
    Q_OBJECT

public:
    explicit SheetView(QWidget *parent = 0);

private slots:
    void parseCell(int, int);

private:
    QString charIndex(int index) const;
    TypeDeductor deductor;
};

#endif // SHEETVIEW_H
