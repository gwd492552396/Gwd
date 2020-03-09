#include "database_7in.h"



Database_7in::Database_7in()
{
}

bool Database_7in::istableexist(sqlite3 *db,QString table)
{
    QString sql = QString("select * from sqlite_master where name='%1'").arg(table);
    QByteArray qb = sql.toLatin1();
    bool flag = true;
    char *ch = qb.data();
    sqlite3_stmt * stmt =NULL;
    sqlite3_prepare(db,ch,-1,&stmt,NULL);
    if(sqlite3_step(stmt) == SQLITE_ROW)
        flag = true;
    else
        flag = false;
    sqlite3_finalize(stmt);
    return flag;
}
void Database_7in::initdb()
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));

    sqlite3 *db = NULL;
    char *error = 0;
    int  rc;
    char *sql;

    sqlite3_stmt *stmt = NULL;
    rc = sqlite3_open("./7in.db", &db);
    result1 = rc;
    if (rc != SQLITE_OK)
    {
/*        MessageWidget *mess = new MessageWidget();
        mess->init("数据库打开失败",sqlite3_errmsg(db)); */     //modified by gwd in  2.6
        sqlite3_close(db);
        return;
    }
    else
    {
//        MessageWidget *mess = new MessageWidget();
//        mess->init("数据库打开成功","");                    //modified by gwd in  2.6
    }
    if(!istableexist(db,"user"))
    {
        sql = "create table user (name text, passwd text, key int)";

        rc = sqlite3_exec(db,sql,NULL,0,&error);

        if(rc != SQLITE_OK)
        {
//            MessageWidget *mess = new MessageWidget();
//            mess->init("创建用户表失败",error);                   //modified by gwd in  2.6
        }
        sql = "insert into user VALUES(\"123456\",\"passwd\",0)";
        rc = sqlite3_exec(db,sql,NULL,0,&error);
        if(rc != SQLITE_OK)
        {
//            MessageWidget *mess = new MessageWidget();
//            mess->init("添加数据失败",error);                          //modified by gwd in  2.6
        }
    }

    if(!istableexist(db,"parameter"))
    {
        sql = "create table parameter (type text primary key, value text)";
        rc = sqlite3_exec(db,sql,NULL,0,&error);
        if(rc != SQLITE_OK)
        {
//            MessageWidget *mess = new MessageWidget();
//            mess->init("创建参数表失败",error);                  //modified by gwd in  2.6
        }

        sql = "insert into parameter values (?, ?)";
        sqlite3_prepare(db,sql,-1,&stmt,NULL);


        QStringList types;
        types << "司机代号" << "车辆代号" << "称重参数" << "超速预警预设值" << "红黄分界值" << "黄绿分界值" << "标定参数" << "额定载重量"<<"车架号"<<"车辆限速"<<"屏幕亮度"
              <<"l1"<<"l2"<<"l3"<<"r1"<<"r2"<<"r3";                       //modified by gwd in 2.7

        QStringList values;
        values << "003" << "024" << "12345678" << "80" << "10" << "90" << "12345678" << "12345678" << "100" << "80"<<"10"<<"0"<<"0"<<"0"<<"0"<<"0"<<"0";
        for(int i = 0 ;i< 17;i++)                                                           //modified by gwd in 2.7
        {
//            std::string str = types.at(i).toStdString();
//            const char * ch = str.c_str();
            QByteArray qb = types.at(i).toLocal8Bit();
            const char* ch = qb.data();
            sqlite3_bind_text(stmt,1,ch,-1,SQLITE_TRANSIENT);
            qb = values.at(i).toLocal8Bit();
            ch = qb.data();
            sqlite3_bind_text(stmt,2,ch,-1,SQLITE_TRANSIENT);
            sqlite3_step(stmt);
            sqlite3_reset(stmt);
        }
        sqlite3_finalize(stmt);
    }
    if(!istableexist(db,"errors"))
    {
        sql = "create table errors (start_time text,type text, name text)";
        rc = sqlite3_exec(db,sql,NULL,0,&error);
//        sql = "insert into errors values(?,?,?)";
//        sqlite3_prepare(db,sql,-1,&stmt,NULL);

//        QStringList messageid;          //QVariantList==QList<QVariant>
//        messageid.append("1818D0F3");
//        messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");
//        messageid.append("18F101F4");
//        messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");
//        messageid.append("18FF2DF4");messageid.append("18FF2DF4");
//        messageid.append("0CFF00D1");messageid.append("0CFF00D1");messageid.append("0CFF00D1");messageid.append("0CFF00D1");
//        messageid.append("0CFF02D1");messageid.append("0CFF02D1");messageid.append("0CFF02D1");
//        messageid.append("0CFF00D2");messageid.append("0CFF00D2");messageid.append("0CFF00D2");messageid.append("0CFF00D2");
//        messageid.append("0CFF02D2");messageid.append("0CFF02D2");messageid.append("0CFF02D2");
//        messageid.append("0CFF0303");messageid.append("0CFF0303");messageid.append("0CFF0303");messageid.append("0CFF0303");
//        messageid.append("0CFF0403");messageid.append("0CFF0403");messageid.append("0CFF0403");messageid.append("0CFF0403");

//        int sbit[] = {52,46,11,45,44,43,10,41,40,51,50,49,48,0,1,5,0,0,8,1,9,2,10,3,11,4,12,5,13,16,17,32,36,48,50,52,54,0,8,24,48,50,52,54,0,8,24,0,2,4,6,0,2,4,6};
//    //    values << 52 << 46 << 11 << 45 << 44 << 43 << 10 << 41 << 40 << 51 << 50 << 49 <<48<<0<<1<< 5<<0<<0<<8<<1<<9<<2<<10<<3<<11<<4<<12<<5<<13<<16<<17<<32<<36<<48<<50<<52<<54<<0<<8<<24<<48<<50<<52<<54<<0<<8<<24<<0<<2<<4<<6<<0<<2<<4<<6;

//        QStringList comment;
//        comment.append("BMS故障：");
//        comment.append("电池温度过高");
//        comment.append("电池温度过低");
//        comment.append("放电电流过大");
//        comment.append("充电电流过大");
//        comment.append("SOC过低");
//        comment.append("SOC过高");
//        comment.append("BMS单体电压过低");
//        comment.append("BMS单体电压过高");
//        comment.append("电池温度不均衡");
//        comment.append("电池电压不均衡");
//        comment.append("电池总电压过低");
//        comment.append("电池总电压过高");
//        comment.append("BMS的CAN通讯故障");
//        comment.append("接触器粘连故障");
//        comment.append("Strings之间电压不均衡");
//        comment.append("BMS绝缘电阻");
//        comment.append("主驱接触器状态");
//        comment.append("主驱接触器烧结状态");
//        comment.append("主驱预充接触器状态");
//        comment.append("主驱预充接触器烧结状态");
//        comment.append("辅驱接触器状态");
//        comment.append("辅驱接触器烧结状态");
//        comment.append("辅驱预充接触器状态");
//        comment.append("辅驱预充接触器烧结状态");
//        comment.append("主负接触器一状态");
//        comment.append("主负接触器一烧结状态");
//        comment.append("主负接触器二状态");
//        comment.append("主负接触器二烧结状态");
//        comment.append("电池包冷却水泵继电器状态");
//        comment.append("电池包冷却风扇继电器状态");
//        comment.append("电池充电状态");
//        comment.append("BMS自检状态");
//        comment.append("驱动电机运行状态");
//        comment.append("驱动电机工作模式");
//        comment.append("驱动电机转向");
//        comment.append("驱动电机故障状态");
//        comment.append("驱动电机故障等级");
//        comment.append("驱动电机故障1:");
//        comment.append("驱动电机故障2:");
//        comment.append("ISG电机运行状态");
//        comment.append("ISG电机工作模式");
//        comment.append("ISG电机转向");
//        comment.append("ISG电机故障状态");
//        comment.append("ISG电机故障等级");
//        comment.append("ISG电机故障1:");
//        comment.append("ISG电机故障2:");
//        comment.append("驱动电机工作状态指令");
//        comment.append("驱动电机工作模式指令");
//        comment.append("驱动电机旋转方向指令");
//        comment.append("驱动电机控制模式指令");
//        comment.append("ISG电机工作状态指令");
//        comment.append("ISG电机工作模式指令");
//        comment.append("ISG电机旋转方向指令");
//        comment.append("ISG电机控制模式指令");
//        for(int i = 0 ;i< messageid.count();i++)
//        {
//            QByteArray qb = messageid.at(i).toLocal8Bit();
//            const char* ch = qb.data();
//            sqlite3_bind_text(stmt,1,ch,-1,SQLITE_TRANSIENT);
//            sqlite3_bind_int(stmt,2,sbit[i]);
//            qb = comment.at(i).toLocal8Bit();
//            ch = qb.data();
//            sqlite3_bind_text(stmt,3,ch,-1,SQLITE_TRANSIENT);
//            sqlite3_step(stmt);
//            sqlite3_reset(stmt);
//        }
        sqlite3_finalize(stmt);
    }
    if(!istableexist(db,"warnnings"))
    {
        sql = "create table warnnings (start_time text,type text, name text)";
        sqlite3_exec(db,sql,NULL,0,&error);
//        sql = "insert into warnnings values (?, ? ,?)";
//        QStringList messageid;
//        sqlite3_prepare(db,sql,-1,&stmt,NULL);

//        messageid.append("181BD0F3");
//        messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");
//        messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");
//        int tbit[] = {2,3,4,6,7,8,9};

//        QStringList comment;
//        comment.append("预充失败报警");
//        comment.append("系统连接故障报警");
//        comment.append("接触器开路报警");
//        comment.append("String1内网通讯故障报警");
//        comment.append("String2内网通讯故障报警");
//        comment.append("充电网通讯故障报警");
//        comment.append("外网通讯故障报警");
//        for(int i = 0 ;i< messageid.count();i++)
//        {
//            QByteArray qb = messageid.at(i).toLocal8Bit();
//            const char* ch = qb.data();
//            sqlite3_bind_text(stmt,1,ch,-1,SQLITE_TRANSIENT);
//            sqlite3_bind_int(stmt,2,tbit[i]);
//            qb = comment.at(i).toLocal8Bit();
//            ch = qb.data();
//            sqlite3_bind_text(stmt,3,ch,-1,SQLITE_TRANSIENT);
//            sqlite3_step(stmt);
//            sqlite3_reset(stmt);
//        }
        sqlite3_finalize(stmt);
    }
    //关闭数据库
    sqlite3_close(db);


//    QSqlDatabase Db;
//    if (QSqlDatabase::contains("qt_sql_default_connection"))
//    {
//        Db = QSqlDatabase::database("qt_sql_default_connection");
//    }
//    else
//    {
//        Db = QSqlDatabase::addDatabase("QSQLITE");
//        Db.setDatabaseName("7in.db");
//    }
//    QSqlDatabase Db = QSqlDatabase::addDatabase("QSQLITE");
//    qDebug()<<QApplication::applicationDirPath();
//    Db.setDatabaseName(QApplication::applicationDirPath() + "/7in.db");
//    if(!Db.open()) //打开数据库
//        qDebug()<<"DbOpen"<<"error";

//    QSqlQuery sql_query = QSqlQuery(Db);
//    if(!istableexist(sql_query,"user"))
//    {

//        QString create_sql = "create table user (name text primary key, passwd text, key int)";
//        sql_query.prepare(create_sql);
//        if(!sql_query.exec())
//        {
//            qDebug() << "Error: Fail to create table." << sql_query.lastError();
//        }
//        else
//        {
//            qDebug() << "Table created!";
//        }
//        QString insert_sql = "insert into user VALUES(\"123456\",\"passwd\",0)";
//        if(!sql_query.exec(insert_sql))
//        {
//            qDebug()<< "添加失败"<<sql_query.lastError();
//        }

//    }
//    else {
//       qDebug()<<"表已存在";
//    }
//    if(!istableexist(sql_query,"parameter"))
//    {
//        QString create_sql = "create table parameter (type text primary key, value text)";
//        sql_query.prepare(create_sql);
//        if(!sql_query.exec())
//        {
//            qDebug() << "Error: Fail to create table." << sql_query.lastError();
//        }
//        else
//        {
//            qDebug() << "Table created!";
//        }
//        sql_query.prepare("insert into parameter values (?, ?)");
//        QVariantList types;          //QVariantList==QList<QVariant>
//        types << "司机代号" << "车辆代号" << "称重参数" << "限速" << "红黄分界值" << "黄绿分界值" << "标定参数" << "额定载重量";
//        sql_query.addBindValue(types);   //绑定
//        QVariantList values;
//        values << "003" << "024" << "12345678" << "80" << "10" << "90" << "12345678" << "12345678";
//        sql_query.addBindValue(values);
//        if (!sql_query.execBatch()) //进行批处理，如果出错就输出错误
//            qDebug() << sql_query.lastError();
//    }
//    else {
//       qDebug()<<"表已存在";
//    }
//    if(!istableexist(sql_query,"errors"))
//    {
//        QString create_sql = "create table errors (messageid text,startbit int, comment text)";
//        sql_query.prepare(create_sql);
//        if(!sql_query.exec())
//        {
//            qDebug() << "Error: Fail to create table." << sql_query.lastError();
//        }
//        else
//        {
//            qDebug() << "Table created!";
//        }
//        sql_query.prepare("insert into errors values (?, ? ,?)");
//        QVariantList messageid;          //QVariantList==QList<QVariant>
//        messageid.append("1818D0F3");
//        messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");
//        messageid.append("18F101F4");
//        messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");messageid.append("18FF2BF4");
//        messageid.append("18FF2DF4");messageid.append("18FF2DF4");
//        messageid.append("0CFF00D1");messageid.append("0CFF00D1");messageid.append("0CFF00D1");messageid.append("0CFF00D1");
//        messageid.append("0CFF02D1");messageid.append("0CFF02D1");messageid.append("0CFF02D1");
//        messageid.append("0CFF00D2");messageid.append("0CFF00D2");messageid.append("0CFF00D2");messageid.append("0CFF00D2");
//        messageid.append("0CFF02D2");messageid.append("0CFF02D2");messageid.append("0CFF02D2");
//        messageid.append("0CFF0303");messageid.append("0CFF0303");messageid.append("0CFF0303");messageid.append("0CFF0303");
//        messageid.append("0CFF0403");messageid.append("0CFF0403");messageid.append("0CFF0403");messageid.append("0CFF0403");
//        sql_query.addBindValue(messageid);   //绑定
//        QVariantList values;
//        values << 52 << 46 << 11 << 45 << 44 << 43 << 10 << 41 << 40 << 51 << 50 << 49 <<48<<0<<1<< 5<<0<<0<<8<<1<<9<<2<<10<<3<<11<<4<<12<<5<<13<<16<<17<<32<<36<<48<<50<<52<<54<<0<<8<<24<<48<<50<<52<<54<<0<<8<<24<<0<<2<<4<<6<<0<<2<<4<<6;
//        sql_query.addBindValue(values);
//        QVariantList comment;
//        comment.append("BMS故障：");
//        comment.append("电池温度过高");
//        comment.append("电池温度过低");
//        comment.append("放电电流过大");
//        comment.append("充电电流过大");
//        comment.append("SOC过低");
//        comment.append("SOC过高");
//        comment.append("BMS单体电压过低");
//        comment.append("BMS单体电压过高");
//        comment.append("电池温度不均衡");
//        comment.append("电池电压不均衡");
//        comment.append("电池总电压过低");
//        comment.append("电池总电压过高");
//        comment.append("BMS的CAN通讯故障");
//        comment.append("接触器粘连故障");
//        comment.append("Strings之间电压不均衡");
//        comment.append("BMS绝缘电阻");
//        comment.append("主驱接触器状态");
//        comment.append("主驱接触器烧结状态");
//        comment.append("主驱预充接触器状态");
//        comment.append("主驱预充接触器烧结状态");
//        comment.append("辅驱接触器状态");
//        comment.append("辅驱接触器烧结状态");
//        comment.append("辅驱预充接触器状态");
//        comment.append("辅驱预充接触器烧结状态");
//        comment.append("主负接触器一状态");
//        comment.append("主负接触器一烧结状态");
//        comment.append("主负接触器二状态");
//        comment.append("主负接触器二烧结状态");
//        comment.append("电池包冷却水泵继电器状态");
//        comment.append("电池包冷却风扇继电器状态");
//        comment.append("电池充电状态");
//        comment.append("BMS自检状态");
//        comment.append("驱动电机运行状态");
//        comment.append("驱动电机工作模式");
//        comment.append("驱动电机转向");
//        comment.append("驱动电机故障状态");
//        comment.append("驱动电机故障等级");
//        comment.append("驱动电机故障");
//        comment.append("驱动电机故障");
//        comment.append("ISG电机运行状态");
//        comment.append("ISG电机工作模式");
//        comment.append("ISG电机转向");
//        comment.append("ISG电机故障状态");
//        comment.append("ISG电机故障等级");
//        comment.append("ISG电机故障");
//        comment.append("ISG电机故障");
//        comment.append("驱动电机工作状态指令");
//        comment.append("驱动电机工作模式指令");
//        comment.append("驱动电机旋转方向指令");
//        comment.append("驱动电机控制模式指令");
//        comment.append("ISG电机工作状态指令");
//        comment.append("ISG电机工作模式指令");
//        comment.append("ISG电机旋转方向指令");
//        comment.append("ISG电机控制模式指令");
//        sql_query.addBindValue(comment);
//        if (!sql_query.execBatch()) //进行批处理，如果出错就输出错误
//            qDebug() << sql_query.lastError();
//    }
//    else {
//       qDebug()<<"表已存在";
//    }
//    if(!istableexist(sql_query,"warnnings"))
//    {
//        QString create_sql = "create table warnnings (messageid text,startbit int, comment text)";
//        sql_query.prepare(create_sql);
//        if(!sql_query.exec())
//        {
//            qDebug() << "Error: Fail to create table." << sql_query.lastError();
//        }
//        else
//        {
//            qDebug() << "Table created!";
//        }
//        sql_query.prepare("insert into errors values (?, ? ,?)");
//        QVariantList messageid;          //QVariantList==QList<QVariant>
//        messageid.append("181BD0F3");
//        messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");
//        messageid.append("181BD0F3");messageid.append("181BD0F3");messageid.append("181BD0F3");
//        sql_query.addBindValue(messageid);   //绑定
//        QVariantList values;
//        values << 2 << 3 << 4 << 6 << 7 << 8 << 9;
//        sql_query.addBindValue(values);
//        QVariantList comment;
//        comment.append("预充失败报警");
//        comment.append("系统连接故障报警");
//        comment.append("接触器开路报警");
//        comment.append("String1内网通讯故障报警");
//        comment.append("String2内网通讯故障报警");
//        comment.append("充电网通讯故障报警");
//        comment.append("外网通讯故障报警");

//        sql_query.addBindValue(comment);
//        if (!sql_query.execBatch()) //进行批处理，如果出错就输出错误
//            qDebug() << sql_query.lastError();
//    }
//    else {
//       qDebug()<<"表已存在";
//    }
//    if(!istableexist(sql_query,"historyerrors"))
//    {
//        QString create_sql = "create table historyerrors ( time text,type text, comment text,flag int)";
//        sql_query.prepare(create_sql);
//        if(!sql_query.exec())
//        {
//            qDebug() << "Error: Fail to create table." << sql_query.lastError();
//        }
//        else
//        {
//            qDebug() << "Table created!";
//        }
//    }
//    else {
//       qDebug()<<"表已存在";
//    }
//    if(!istableexist(sql_query,"historywarnnings"))
//    {
//        QString create_sql = "create table historywarnnings ( time text,type text, comment text,flag int)";
//        sql_query.prepare(create_sql);
//        if(!sql_query.exec())
//        {
//            qDebug() << "Error: Fail to create table." << sql_query.lastError();
//        }
//        else
//        {
//            qDebug() << "Table created!";
//        }
//    }
//    else {
//       qDebug()<<"表已存在";
//    }
//    Db.close();
}

QStringList Database_7in::getalluser()
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db;
    char *sql;
    int rc;
    sqlite3_stmt * stmt = NULL;
    QStringList list;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString ("select name from user where key = 1");

       // emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_prepare(db,sql,-1,&stmt,NULL);
    while(sqlite3_step(stmt) == SQLITE_ROW)
    {
        char * ch = (char *)sqlite3_column_text(stmt,0);
        list.append( QString::fromLocal8Bit(ch));
    }
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return list;
//    QSqlDatabase Db;
//    if (QSqlDatabase::contains("qt_sql_default_connection"))
//    {
//        Db = QSqlDatabase::database("qt_sql_default_connection");
//    }
//    else
//    {
//        Db = QSqlDatabase::addDatabase("QSQLITE");
//        Db.setDatabaseName("7in.db");
//    }
//    if(!Db.open())
//        qDebug()<<"Dbopen"<<"error";
//    QSqlQuery q  = QSqlQuery(Db);
//    QString sql = "select name from user";
//    q.exec(sql);
//    QStringList list;
//    while(q.next())
//    {
//        list.append(q.value(0).toString());
//    }
//    return list;

}

int Database_7in::Checkerror(QString errorname)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db;
    int flag;
    char *sql;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString ("select *from errors where name = '%1'").arg(errorname);

       //emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_prepare(db,sql,-1,&stmt,NULL);
    if(sqlite3_step(stmt) == SQLITE_ROW)
    {
        flag = 1;
    }
    else
        flag = -1;
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return flag;
}

int Database_7in::Checkwarning(QString warningname)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db;
    int flag;
    char *sql;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString ("select *from warnnings where name = '%1'").arg(warningname);

       //emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_prepare(db,sql,-1,&stmt,NULL);
    if(sqlite3_step(stmt) == SQLITE_ROW)
    {
        flag = 1;
    }
    else
        flag = -1;
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return flag;
}

int Database_7in::CheckUsername(QString username,QString &passwd)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db;
    int flag;
    char *sql;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString ("select *from user where name = '%1'").arg(username);

       //emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_prepare(db,sql,-1,&stmt,NULL);
    if(sqlite3_step(stmt) == SQLITE_ROW)
    {
        char * ch = (char *)sqlite3_column_text(stmt,1);
        passwd = QString::fromLocal8Bit(ch);
        flag = sqlite3_column_int(stmt,2);
    }
    else
        flag = -1;
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return flag;



//    QSqlDatabase Db;
//    if (QSqlDatabase::contains("qt_sql_default_connection"))
//    {
//        Db = QSqlDatabase::database("qt_sql_default_connection");
//    }
//    else
//    {
//        Db = QSqlDatabase::addDatabase("QSQLITE");
//        Db.setDatabaseName("7in.db");
//    }
//    if(!Db.open())
//        qDebug()<<"Dbopen"<<"error";
//    QSqlQuery q  = QSqlQuery(Db);
//    QString sql = QString ("select *from user where name = '%1'").arg(username);
//    q.exec(sql);
//    if(!q.first())
//    {
//        Db.close();

//        return -1;

//    }
//    else
//    {
//        q.first();
//        passwd = q.value(1).toString();
//        Db.close();
//        return q.value(2).toInt();

//    }

}

//void Database_7in::inserterror(QString type, QString comment)
//{
//    QSqlDatabase Db;
//    if (QSqlDatabase::contains("qt_sql_default_connection"))
//    {
//        Db = QSqlDatabase::database("qt_sql_default_connection");
//    }
//    else
//    {
//        Db = QSqlDatabase::addDatabase("QSQLITE");
//        Db.setDatabaseName("7in.db");
//    }
//    if(!Db.open()) //打开数据库
//        qDebug()<<"DbOpen"<<"error";
//    QSqlQuery sql_query = QSqlQuery(Db);

//}

QString Database_7in::geterror(QString name)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db = NULL;
    char *sql;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString("select * from errors where name = '%1'").arg(name);

       // emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_prepare(db,sql,-1,&stmt,NULL);
    if(sqlite3_step(stmt) == SQLITE_ROW)
    {
        char * ch = (char *)sqlite3_column_text(stmt,0);
        s = QString::fromLocal8Bit(ch);
    }
    else
        s ="";
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return s;
}
//    QSqlDatabase Db;
//    if (QSqlDatabase::contains("qt_sql_default_connection"))
//    {
//        Db = QSqlDatabase::database("qt_sql_default_connection");
//    }
//    else
//    {
//        Db = QSqlDatabase::addDatabase("QSQLITE");
//        Db.setDatabaseName("7in.db");
//    }
//    if(!Db.open()) //打开数据库
//        qDebug()<<"DbOpen"<<"error";
//    QSqlQuery sql_query= QSqlQuery(Db);
//    QString sql = QString("select comment from errors where messageid ='%1' and startbit = '%2'").arg(id).arg(n);
//    if(sql_query.exec(sql))
//    {
//        sql_query.first();Db.close();
//        return sql_query.value(0).toString();
//    }
//    else
//    {
//        qDebug() << sql_query.lastError();
//        Db.close();
//        return "";
//    }

QString Database_7in::getwarnning(QString name)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db = NULL;
    char *sql;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString("select comment from warnnings where messageid = '%1'").arg(name);

       // emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_prepare(db,sql,-1,&stmt,NULL);
    if(sqlite3_step(stmt) == SQLITE_ROW)
    {
        char * ch = (char *)sqlite3_column_text(stmt,0);
        s = QString::fromLocal8Bit(ch);
    }
    else
        s ="";
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return s;
}
void Database_7in::inserterror(QString time,QString type,QString name)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db = NULL;
    char *sql;
    char *error = 0;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString("insert into errors values ('%1','%2','%3')").arg(time).arg(type).arg(name);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    result = sqlite3_exec(db,sql,NULL,0,&error);
    sqlite3_finalize(stmt);
    sqlite3_close(db);
}

void Database_7in::insertwarning(QString time,QString type,QString name)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db = NULL;
    char *sql;
    char *error = 0;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString("insert into warnnings values ('%1','%2','%3')").arg(time).arg(type).arg(name);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    result = sqlite3_exec(db,sql,NULL,0,&error);
    sqlite3_finalize(stmt);
    sqlite3_close(db);
}



void Database_7in::insertuser(QString username,QString passwd)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db = NULL;
    char *sql;
    char *error = 0;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString("insert into user values ('%1','%2',1)").arg(username).arg(passwd);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    result = sqlite3_exec(db,sql,NULL,0,&error);
    sqlite3_finalize(stmt);
    sqlite3_close(db);



//    QSqlDatabase Db;
//    if (QSqlDatabase::contains("qt_sql_default_connection"))
//    {
//        Db = QSqlDatabase::database("qt_sql_default_connection");
//    }
//    else
//    {
//        Db = QSqlDatabase::addDatabase("QSQLITE");
//        Db.setDatabaseName("7in.db");
//    }
//    if(!Db.open()) //打开数据库
//        qDebug()<<"DbOpen"<<"error";
//    QSqlQuery sql_query = QSqlQuery(Db);
//    QString sql = QString("insert into user values ('%1', '%2', 1)").arg(username).arg(passwd);
//    if(!sql_query.exec(sql))
//    {
//        qDebug() << sql_query.lastError();
//    }
//    else
//    {
//        qDebug() << "inserted!";
//    }
//    Db.close();
}

void Database_7in::deleteerror(QString name)
{

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db = NULL;
    char *sql;
    char *error = 0;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString("delete from errors where name = '%1'").arg(name);

       // emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_exec(db,sql,NULL,0,&error);
    sqlite3_finalize(stmt);
    sqlite3_close(db);
}

void Database_7in::deletewarning(QString name)
{

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db = NULL;
    char *sql;
    char *error = 0;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString("delete from warnnings where name = '%1'").arg(name);

       // emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_exec(db,sql,NULL,0,&error);
    sqlite3_finalize(stmt);
    sqlite3_close(db);
}


void Database_7in::deleteUser(QString username)
{

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db = NULL;
    char *sql;
    char *error = 0;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString("delete from user where name = '%1'").arg(username);

       // emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_exec(db,sql,NULL,0,&error);
    sqlite3_finalize(stmt);
    sqlite3_close(db);

//    QSqlDatabase Db;
//    if (QSqlDatabase::contains("qt_sql_default_connection"))
//    {
//        Db = QSqlDatabase::database("qt_sql_default_connection");
//    }
//    else
//    {
//        Db = QSqlDatabase::addDatabase("QSQLITE");
//        Db.setDatabaseName("7in.db");
//    }
//    if(!Db.open()) //打开数据库
//        qDebug()<<"DbOpen"<<"error";
//    QSqlQuery sql_query = QSqlQuery(Db);
//    QString sql = QString("delete from user where name = '%1'").arg(username);
//    if(!sql_query.exec(sql))
//    {
//        qDebug() << sql_query.lastError();
//    }
//    else
//    {
//        qDebug() << "deleted!";
//    }
//    Db.close();
}

QString Database_7in::selectdata(QString type)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db = NULL;
    char *sql;
    int rc;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString("select value from parameter where type = '%1'").arg(type);

       // emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_prepare(db,sql,-1,&stmt,NULL);
    if(sqlite3_step(stmt) == SQLITE_ROW)
    {
        char * ch = (char *)sqlite3_column_text(stmt,0);
        s = QString::fromLocal8Bit(ch);
    }
    else
        s ="";
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return s;
//    QSqlDatabase Db;
//    if (QSqlDatabase::contains("qt_sql_default_connection"))
//    {
//        Db = QSqlDatabase::database("qt_sql_default_connection");
//    }
//    else
//    {
//        Db = QSqlDatabase::addDatabase("QSQLITE");
//        Db.setDatabaseName("7in.db");
//    }
//    if(!Db.open()) //打开数据库
//        qDebug()<<"DbOpen"<<"error";
//    QSqlQuery sql_query= QSqlQuery(Db);
//    QString sql = QString("select value from parameter where type ='%1'").arg(type);
//    if(sql_query.exec(sql))
//    {
//        sql_query.first();Db.close();
//        return sql_query.value(0).toString();
//    }
//    else
//    {
//            qDebug() << sql_query.lastError();
//            Db.close();
//            return "";
//    }

}

void Database_7in::updatedata(QString type, QString value)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    sqlite3 * db = NULL;
    char *sql;
    int rc;
    char *error = 0;
    sqlite3_stmt * stmt = NULL;
    rc = sqlite3_open("./7in.db",&db);
    QString s = QString("update parameter set value ='%1' where type ='%2'").arg(value).arg(type);

      // emit log_1(s);
    QByteArray qb = s.toLocal8Bit();
    sql = qb.data();
    sqlite3_exec(db,sql,NULL,0,&error);
    sqlite3_finalize(stmt);
    sqlite3_close(db);


//    QSqlDatabase Db;

//    if (QSqlDatabase::contains("qt_sql_default_connection"))
//    {
//        Db = QSqlDatabase::database("qt_sql_default_connection");
//    }
//    else
//    {
//        Db = QSqlDatabase::addDatabase("QSQLITE");
//        Db.setDatabaseName("7in.db");
//    }
//    if(!Db.open()) //打开数据库
//        qDebug()<<"DbOpen"<<"error";
//    QSqlQuery sql_query = QSqlQuery(Db);

//    QString sql = QString("update parameter set value ='%1' where type ='%2'").arg(value).arg(type);
//    qDebug()<<sql;
//    if(!sql_query.exec(sql))
//    {
//        qDebug() << sql_query.lastError();
//    }
//    else
//    {
//        qDebug()<< "updated!";
//    }
//    Db.close();
}
