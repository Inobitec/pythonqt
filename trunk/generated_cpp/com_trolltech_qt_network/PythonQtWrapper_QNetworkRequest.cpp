#include "PythonQtWrapper_QNetworkRequest.h"

#include <QVariant>
#include <qbytearray.h>
#include <qlist.h>
#include <qnetworkrequest.h>
#include <qurl.h>

QNetworkRequest* PythonQtWrapper_QNetworkRequest::new_QNetworkRequest(const QNetworkRequest&  other)
{ 
return new QNetworkRequest(other); }

QNetworkRequest* PythonQtWrapper_QNetworkRequest::new_QNetworkRequest(const QUrl&  url)
{ 
return new QNetworkRequest(url); }

QVariant  PythonQtWrapper_QNetworkRequest::attribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  defaultValue) const
{
return theWrappedObject->attribute(code, defaultValue);
}

bool  PythonQtWrapper_QNetworkRequest::hasRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const
{
return theWrappedObject->hasRawHeader(headerName);
}

QVariant  PythonQtWrapper_QNetworkRequest::header(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header) const
{
return theWrappedObject->header(header);
}

bool  PythonQtWrapper_QNetworkRequest::operator_equal(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const
{
return *theWrappedObject == other;
}

QByteArray  PythonQtWrapper_QNetworkRequest::rawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const
{
return theWrappedObject->rawHeader(headerName);
}

QList<QByteArray >  PythonQtWrapper_QNetworkRequest::rawHeaderList(QNetworkRequest* theWrappedObject) const
{
return theWrappedObject->rawHeaderList();
}

void PythonQtWrapper_QNetworkRequest::setAttribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value)
{
theWrappedObject->setAttribute(code, value);
}

void PythonQtWrapper_QNetworkRequest::setHeader(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value)
{
theWrappedObject->setHeader(header, value);
}

void PythonQtWrapper_QNetworkRequest::setRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value)
{
theWrappedObject->setRawHeader(headerName, value);
}

void PythonQtWrapper_QNetworkRequest::setUrl(QNetworkRequest* theWrappedObject, const QUrl&  url)
{
theWrappedObject->setUrl(url);
}

QUrl  PythonQtWrapper_QNetworkRequest::url(QNetworkRequest* theWrappedObject) const
{
return theWrappedObject->url();
}

