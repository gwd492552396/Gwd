#ifndef DATABASE_7IN_H
#define DATABASE_7IN_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QtSql/QSqlDriver>    //数据库驱动种类相关头文件
#include <QtSql/QSqlRecord>    //数据库执行结果相关头文件
#include <QDebug>
#include <QtWidgets/QApplication>
#include <QStringList>
#include <QByteArray>
#include "messagewidget.h"
#include "sqlite3.h"
#include <QString>

#include <QTextCodec>

class Database_7in
{



public:
    Database_7in();
    void initdb();
    bool istableexist(sqlite3* db,QString table);
    void insertuser(QString,QString);
    int CheckUsername(QString,QString&);
    void deleteUser(QString);

    void updatedata(QString type,QString value);
    QString selectdata(QString type);
    QString geterror(QString);
    QString getwarnning(QString);
    void inserterror(QString ,QString ,QString);
    void insertwarning(QString,QString ,QString);
    void deleteerror(QString name);
    void deletewarning(QString name);
    int Checkerror(QString name);
    int Checkwarning(QString name);
    QStringList getalluser();

    int result;
    int result1;

};

#endif // DATABASE_7IN_H
