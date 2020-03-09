#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QStack>
#include <QString>
#include "homepage.h"
#include "weight.h"
#include "informationquery.h"
#include "index.h"
#include "zc.h"
#include "power.h"
#include "enigne.h"
#include "temperature.h"
#include "pressure.h"
#include "liquid.h"
#include "isgpower.h"
#include "driverpower.h"
#include "liquid.h"
#include "error.h"
#include "warning.h"
#include "video.h"
#include "help.h"
#include "set.h"
#include "login.h"
#include "management.h"
#include "adduser.h"
#include "superuserpage.h"
#include "generalsettings.h"
#include "optionalfunction.h"
#include "choosecartype.h"
#include "weighingparameter.h"
#include "readdata.h"
#include "mytimer.h"
#include <QTimer>
#include <QTime>
#include <QDate>
#include <QThread>
#include <QtSerialPort/QSerialPort>                                        //serial port added by gwd
#include <QtSerialPort/QSerialPortInfo>
#include <QString>
#include "gearbox.h"
#include "serial_port.h"
#include "auto_brightness.h"
#include "edit_shortcut.h"
namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();
    int video_is_running;



signals:
    void slide_video(int);
    void slide_weight(int);
    void slide_power(int);
    void slide_home(int);
    void slide_help(int);
    void slide_isg(int);
    void slide_tm(int);
    void slide_set(int);
    void slide_gear(int);
    void slide_engine(int);
    void slide_pressure(int);
    void log(QString);
    void edit_reset();






private slots:
    void change_weight();
    void change_video();

    void set_type(const QString &type);
    void set_state(const QString &state);
    void set_date(const QString &date);
    void set_time(const QString &time);
    void update_stack();
    void set_sys_value();

    void on_btn_video1_clicked();
    void on_btn_weight1_clicked();

    void on_btn_video2_clicked();
    void on_btn_weight2_clicked();

    void on_btn_video3_clicked();
    void on_btn_weight3_clicked();

    void on_btn_weight6_clicked();
    void on_btn_weight7_clicked();

//    void on_btn_power_clicked();

    void on_btn_home_clicked();

    void on_btn_help1_clicked();
    void on_btn_help2_clicked();
    void on_btn_help3_clicked();


//    void on_btn_isg_clicked();

//    void on_btn_tm_clicked();

    void on_btn_back_clicked();

    void on_btn_pressure1_clicked();
    void on_btn_pressure2_clicked();
    void on_btn_pressure3_clicked();
    void on_btn_pressure6_clicked();
    void on_btn_pressure7_clicked();

    void on_btn_engine1_clicked();
    void on_btn_engine2_clicked();
    void on_btn_engine3_clicked();
    void on_btn_engine6_clicked();
    void on_btn_engine7_clicked();

    void on_btn_gearbox1_clicked();
    void on_btn_gearbox2_clicked();
    void on_btn_gearbox3_clicked();
    void on_btn_gearbox6_clicked();
    void on_btn_gearbox7_clicked();

    void on_btn_temper2_clicked();
    void on_btn_temper3_clicked();
    void on_btn_temper6_clicked();
    void on_btn_temper7_clicked();

    void on_btn_liquid2_clicked();
    void on_btn_liquid3_clicked();
    void on_btn_liquid6_clicked();
    void on_btn_liquid7_clicked();

    void receivename(QString);

    void c_stackedwidget_changed(int);
    void set_receiver_stop();

    void edit_shortcut_save(int,int,int,int);


//    void serial_log(QString);

protected:
    void paintEvent(QPaintEvent *event);
    virtual void keyPressEvent(QKeyEvent *ev);              //added by gwd


private:
    Ui::MainWidget *ui;


    HomePage *home_page;
    Weight *weight;
    InformationQuery *query ;
    Index *index;
    ZC *zc;
    Power *power;
    Enigne *enigne;
    Temperature *temperature;
    Pressure *pressure;
    IsgPower *isg_power;
    DriverPower *driver_power;
    Liquid *liquid;
    Error *error;
    Warning *warning;
    Video*video;
    Help *help;
    set *set1;
    Login *login;
    Management *management;
    AddUser *adduser;
    SuperUserPage *userpage;
    GeneralSettings *general;
    OptionalFunction *func;
    ChooseCarType *cartype;
    WeighingParameter *weigh;
    gearbox *gear_box;
    QStack<QWidget*> wStack;
    QWidget *currentWidget;
//    ReadData *read_data;
    QThread *thread;
    MyTimer *mytimer,*mytimer2;
    QSerialPort *myCom;                          //serial port added by gwd
    Serial_port *serial;
    Auto_brightness *auto_brightness;
    receiver *receiv;
    edit_shortcut *shortcut;
    Database_7in *db;
    void initUI();
//    void init_serial_port();
    int camere_is_open;
//    void setshortcut();
    int count = 0;
    int last_index = 3;
    bool is_weight;
    bool is_video;



};

#endif // MAINWIDGET_H
