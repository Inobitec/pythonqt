#ifndef PYTHONQTWRAPPER_QSQLINDEX_H
#define PYTHONQTWRAPPER_QSQLINDEX_H

#include <qsqlindex.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qsqlrecord.h>

class PythonQtWrapper_QSqlIndex : public QObject
{ Q_OBJECT
public:
public slots:
QSqlIndex* new_QSqlIndex(const QSqlIndex&  other);
QSqlIndex* new_QSqlIndex(const QString&  cursorName = QString(), const QString&  name = QString());
void delete_QSqlIndex(QSqlIndex* obj) { delete obj; } 
   void append(QSqlIndex* theWrappedObject, const QSqlField&  field);
   void setDescending(QSqlIndex* theWrappedObject, int  i, bool  desc);
   bool  isDescending(QSqlIndex* theWrappedObject, int  i) const;
   void append(QSqlIndex* theWrappedObject, const QSqlField&  field, bool  desc);
   QString  cursorName(QSqlIndex* theWrappedObject) const;
   void setName(QSqlIndex* theWrappedObject, const QString&  name);
   QString  name(QSqlIndex* theWrappedObject) const;
   void setCursorName(QSqlIndex* theWrappedObject, const QString&  cursorName);
};

#endif // PYTHONQTWRAPPER_QSQLINDEX_H