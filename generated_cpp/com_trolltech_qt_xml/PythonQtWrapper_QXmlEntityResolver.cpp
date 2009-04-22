#include "PythonQtWrapper_QXmlEntityResolver.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qxml.h>

QString  PythonQtShell_QXmlEntityResolver::errorString() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "errorString");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlEntityResolver::staticMetaObject,
      "errorString(QXmlEntityResolver*)");
      QString  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QString *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QString  result;
return result;
}
bool  PythonQtShell_QXmlEntityResolver::resolveEntity(const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resolveEntity");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlEntityResolver::staticMetaObject,
      "resolveEntity(QXmlEntityResolver*,const QString& ,const QString& ,QXmlInputSource*& )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&publicId, (void*)&systemId, (void*)&ret};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  bool  result;
return result;
}
QXmlEntityResolver* PythonQtWrapper_QXmlEntityResolver::new_QXmlEntityResolver()
{ 
return new PythonQtShell_QXmlEntityResolver(); }
