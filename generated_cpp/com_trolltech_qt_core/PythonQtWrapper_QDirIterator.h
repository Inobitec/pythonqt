#ifndef PYTHONQTWRAPPER_QDIRITERATOR_H
#define PYTHONQTWRAPPER_QDIRITERATOR_H

#include <qdiriterator.h>
#include <QObject>

#include <QVariant>
#include <qdir.h>
#include <qdiriterator.h>
#include <qfileinfo.h>
#include <qstringlist.h>

class PythonQtWrapper_QDirIterator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IteratorFlag )
enum IteratorFlag{
  NoIteratorFlags = QDirIterator::NoIteratorFlags,   FollowSymlinks = QDirIterator::FollowSymlinks,   Subdirectories = QDirIterator::Subdirectories};
public slots:
QDirIterator* new_QDirIterator(const QDir&  dir, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, QDir::Filters  filter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
void delete_QDirIterator(QDirIterator* obj) { delete obj; } 
   QFileInfo  fileInfo(QDirIterator* theWrappedObject) const;
   QString  fileName(QDirIterator* theWrappedObject) const;
   QString  filePath(QDirIterator* theWrappedObject) const;
   bool  hasNext(QDirIterator* theWrappedObject) const;
   QString  next(QDirIterator* theWrappedObject);
   QString  path(QDirIterator* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDIRITERATOR_H