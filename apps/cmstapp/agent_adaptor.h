/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a agent_adaptor.h: code/agent/org.monkey_business_enterprises.agent.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef AGENT_ADAPTOR_H
#define AGENT_ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface net.connman.Agent
 */
class AgentAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "net.connman.Agent")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"net.connman.Agent\">\n"
"    <method name=\"Release\"/>\n"
"    <method name=\"ReportError\">\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"RequestBrowser\">\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"RequestInput\">\n"
"      <arg direction=\"out\" type=\"a{sv}\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"      <arg direction=\"in\" type=\"a{sv}\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>\n"
"    </method>\n"
"    <method name=\"Cancel\"/>\n"
"  </interface>\n"
        "")
public:
    AgentAdaptor(QObject *parent);
    virtual ~AgentAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Cancel();
    void Release();
    void ReportError(const QDBusObjectPath &in0, const QString &in1);
    void RequestBrowser(const QDBusObjectPath &in0, const QString &in1);
    QVariantMap RequestInput(const QDBusObjectPath &in0, const QVariantMap &in1);
Q_SIGNALS: // SIGNALS
};

#endif
