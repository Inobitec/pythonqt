#ifndef PYTHONQTWRAPPER_QXMLSIMPLEREADER_H
#define PYTHONQTWRAPPER_QXMLSIMPLEREADER_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qxml.h>

class PythonQtShell_QXmlSimpleReader : public QXmlSimpleReader
{
public:
    PythonQtShell_QXmlSimpleReader():QXmlSimpleReader(),_wrapper(NULL) {};

virtual QXmlDTDHandler*  DTDHandler() const;
virtual QXmlContentHandler*  contentHandler() const;
virtual QXmlDeclHandler*  declHandler() const;
virtual QXmlEntityResolver*  entityResolver() const;
virtual QXmlErrorHandler*  errorHandler() const;
virtual bool  feature(const QString&  name, bool*  ok = 0) const;
virtual bool  hasFeature(const QString&  name) const;
virtual bool  hasProperty(const QString&  name) const;
virtual QXmlLexicalHandler*  lexicalHandler() const;
virtual bool  parse(const QXmlInputSource&  input);
virtual bool  parse(const QXmlInputSource*  input);
virtual bool  parse(const QXmlInputSource*  input, bool  incremental);
virtual bool  parseContinue();
virtual void*  property(const QString&  name, bool*  ok = 0) const;
virtual void setContentHandler(QXmlContentHandler*  handler);
virtual void setDTDHandler(QXmlDTDHandler*  handler);
virtual void setDeclHandler(QXmlDeclHandler*  handler);
virtual void setEntityResolver(QXmlEntityResolver*  handler);
virtual void setErrorHandler(QXmlErrorHandler*  handler);
virtual void setFeature(const QString&  name, bool  value);
virtual void setLexicalHandler(QXmlLexicalHandler*  handler);
virtual void setProperty(const QString&  name, void*  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlSimpleReader : public QXmlSimpleReader
{ public:
inline QXmlDeclHandler*  promoted_declHandler() const { return QXmlSimpleReader::declHandler(); }
inline void promoted_setEntityResolver(QXmlEntityResolver*  handler) { QXmlSimpleReader::setEntityResolver(handler); }
inline bool  promoted_parse(const QXmlInputSource&  input) { return QXmlSimpleReader::parse(input); }
inline void promoted_setLexicalHandler(QXmlLexicalHandler*  handler) { QXmlSimpleReader::setLexicalHandler(handler); }
inline QXmlLexicalHandler*  promoted_lexicalHandler() const { return QXmlSimpleReader::lexicalHandler(); }
inline bool  promoted_parse(const QXmlInputSource*  input, bool  incremental) { return QXmlSimpleReader::parse(input, incremental); }
inline bool  promoted_parseContinue() { return QXmlSimpleReader::parseContinue(); }
inline void*  promoted_property(const QString&  name, bool*  ok = 0) const { return QXmlSimpleReader::property(name, ok); }
inline void promoted_setFeature(const QString&  name, bool  value) { QXmlSimpleReader::setFeature(name, value); }
inline bool  promoted_feature(const QString&  name, bool*  ok = 0) const { return QXmlSimpleReader::feature(name, ok); }
inline void promoted_setProperty(const QString&  name, void*  value) { QXmlSimpleReader::setProperty(name, value); }
inline QXmlContentHandler*  promoted_contentHandler() const { return QXmlSimpleReader::contentHandler(); }
inline QXmlEntityResolver*  promoted_entityResolver() const { return QXmlSimpleReader::entityResolver(); }
inline bool  promoted_hasProperty(const QString&  name) const { return QXmlSimpleReader::hasProperty(name); }
inline void promoted_setErrorHandler(QXmlErrorHandler*  handler) { QXmlSimpleReader::setErrorHandler(handler); }
inline QXmlDTDHandler*  promoted_DTDHandler() const { return QXmlSimpleReader::DTDHandler(); }
inline QXmlErrorHandler*  promoted_errorHandler() const { return QXmlSimpleReader::errorHandler(); }
inline bool  promoted_parse(const QXmlInputSource*  input) { return QXmlSimpleReader::parse(input); }
inline void promoted_setContentHandler(QXmlContentHandler*  handler) { QXmlSimpleReader::setContentHandler(handler); }
inline void promoted_setDTDHandler(QXmlDTDHandler*  handler) { QXmlSimpleReader::setDTDHandler(handler); }
inline void promoted_setDeclHandler(QXmlDeclHandler*  handler) { QXmlSimpleReader::setDeclHandler(handler); }
inline bool  promoted_hasFeature(const QString&  name) const { return QXmlSimpleReader::hasFeature(name); }
};

class PythonQtWrapper_QXmlSimpleReader : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSimpleReader* new_QXmlSimpleReader();
void delete_QXmlSimpleReader(QXmlSimpleReader* obj) { delete obj; } 
   QXmlDeclHandler*  declHandler(QXmlSimpleReader* theWrappedObject) const;
   void setEntityResolver(QXmlSimpleReader* theWrappedObject, QXmlEntityResolver*  handler);
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource&  input);
   void setLexicalHandler(QXmlSimpleReader* theWrappedObject, QXmlLexicalHandler*  handler);
   QXmlLexicalHandler*  lexicalHandler(QXmlSimpleReader* theWrappedObject) const;
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input, bool  incremental);
   bool  parseContinue(QXmlSimpleReader* theWrappedObject);
   void*  property(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok = 0) const;
   void setFeature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool  value);
   bool  feature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok = 0) const;
   void setProperty(QXmlSimpleReader* theWrappedObject, const QString&  name, void*  value);
   QXmlContentHandler*  contentHandler(QXmlSimpleReader* theWrappedObject) const;
   QXmlEntityResolver*  entityResolver(QXmlSimpleReader* theWrappedObject) const;
   bool  hasProperty(QXmlSimpleReader* theWrappedObject, const QString&  name) const;
   void setErrorHandler(QXmlSimpleReader* theWrappedObject, QXmlErrorHandler*  handler);
   QXmlDTDHandler*  DTDHandler(QXmlSimpleReader* theWrappedObject) const;
   QXmlErrorHandler*  errorHandler(QXmlSimpleReader* theWrappedObject) const;
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input);
   void setContentHandler(QXmlSimpleReader* theWrappedObject, QXmlContentHandler*  handler);
   void setDTDHandler(QXmlSimpleReader* theWrappedObject, QXmlDTDHandler*  handler);
   void setDeclHandler(QXmlSimpleReader* theWrappedObject, QXmlDeclHandler*  handler);
   bool  hasFeature(QXmlSimpleReader* theWrappedObject, const QString&  name) const;
};

#endif // PYTHONQTWRAPPER_QXMLSIMPLEREADER_H
