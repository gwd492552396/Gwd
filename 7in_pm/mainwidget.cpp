#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QDebug>

#define test 0                 //总日志开关
#define shortcut_test 0        //快捷键修改日志开关

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget), receiv(NULL)
{
    ui->setupUi(this);
    camere_is_open = 0;
    video_is_running = 0;
    initUI();

    serial = new Serial_port();
    serial->init_Serial_port(0,115200);


    wStack.append(home_page);                                       //original: index
    ui->c_stackedWidget->setCurrentWidget(home_page);               //added by gwd
    mytimer = new MyTimer();
    mytimer->init_can(0);

    auto_brightness = new Auto_brightness();
    connect(general,SIGNAL(ckb_autobri(bool)),auto_brightness,SLOT(set_auto_status(bool)));


    connect(mytimer,SIGNAL(warning_insert(QString,QString,QString)),warning,SLOT(update_table(QString,QString,QString)));
    connect(mytimer,SIGNAL(delete_row(QString)),warning,SLOT(delete_row(QString)));

    connect(mytimer,SIGNAL(error_insert(QString,QString,QString)),error,SLOT(update_table(QString,QString,QString)));
    connect(mytimer,SIGNAL(delete_row(QString)),error,SLOT(delete_row(QString)));

    connect(mytimer,SIGNAL(total_times(QString)),weight,SLOT(set_total_times(QString)));
    connect(mytimer,SIGNAL(ban_total_times(QString)),weight,SLOT(set_ban_total_times(QString)));
    connect(mytimer,SIGNAL(real_time_weight(QString)),weight,SLOT(set_real_time_weight(QString)));
    connect(mytimer,SIGNAL(rated_weight(QString)),weight,SLOT(set_rated_weight(QString)));

    connect(mytimer,SIGNAL(direct_current(QString)),driver_power,SLOT(set_direct_current(QString)));
    connect(mytimer,SIGNAL(real_torque(QString)),driver_power,SLOT(set_real_torque(QString)));
    connect(mytimer,SIGNAL(real_rev(QString)),driver_power,SLOT(set_real_rev(QString)));
    connect(mytimer,SIGNAL(em_control_input(QString)),driver_power,SLOT(set_em_control_input(QString)));
    connect(mytimer,SIGNAL(driver_mc_control(QString)),driver_power,SLOT(set_driver_mc_control(QString)));
    connect(mytimer,SIGNAL(driver_temper(QString)),driver_power,SLOT(set_driver_temper(QString)));
    connect(mytimer,SIGNAL(work_mode(QString)),driver_power,SLOT(set_work_mode(QString)));
    connect(mytimer,SIGNAL(running_state(QString)),driver_power,SLOT(set_running_state(QString)));
    connect(mytimer,SIGNAL(falut_state(QString)),driver_power,SLOT(set_falut_state(QString)));
    connect(mytimer,SIGNAL(mc_direction(QString)),driver_power,SLOT(set_mc_direction(QString)));

    connect(mytimer,SIGNAL(isg_direct_current(QString)),isg_power,SLOT(set_direct_current(QString)));
    connect(mytimer,SIGNAL(isg_real_torque(QString)),isg_power,SLOT(set_real_torque(QString)));
    connect(mytimer,SIGNAL(isg_real_rev(QString)),isg_power,SLOT(set_real_rev(QString)));
    connect(mytimer,SIGNAL(isg_control_input(QString)),isg_power,SLOT(set_em_control_input(QString)));
    connect(mytimer,SIGNAL(isg_mc_control(QString)),isg_power,SLOT(set_isg_mc_control(QString)));
    connect(mytimer,SIGNAL(isg_driver_temper(QString)),isg_power,SLOT(set_driver_temper(QString)));
    connect(mytimer,SIGNAL(isg_work_mode(QString)),isg_power,SLOT(set_work_mode(QString)));
    connect(mytimer,SIGNAL(isg_running_state(QString)),isg_power,SLOT(set_running_state(QString)));
    connect(mytimer,SIGNAL(isg_falut_state(QString)),isg_power,SLOT(set_falut_state(QString)));
    connect(mytimer,SIGNAL(isg_mc_direction(QString)),isg_power,SLOT(set_mc_direction(QString)));

    connect(mytimer,SIGNAL(enigen_oli_pressure(QString)),enigne,SLOT(set_enigen_oli_pressure(QString)));
    connect(mytimer,SIGNAL(enging_rev(QString)),enigne,SLOT(set_enigen_rev(QString)));
    connect(mytimer,SIGNAL(enigen_water_temper(QString)),enigne,SLOT(set_enigen_water_temper(QString)));

    connect(mytimer,SIGNAL(enigen_oli_pressure(QString)),pressure,SLOT(set_enigne_oil_pressure(QString)));
    connect(mytimer,SIGNAL(gearbox_pressure(QString)),pressure,SLOT(set_gearbox_pressure(QString)));


    connect(mytimer,SIGNAL(enigen_water_temper(QString)),temperature,SLOT(set_engine_water_temper(QString)));
    connect(mytimer,SIGNAL(gearbox_temper(QString)),temperature,SLOT(set_gearbox_temper(QString)));


    connect(mytimer,SIGNAL(gearbox_in_rev(QString)),gear_box,SLOT(set_gearbox_in_rev(QString)));
    connect(mytimer,SIGNAL(gearbox_out_rev(QString)),gear_box,SLOT(set_gearbox_out_rev(QString)));
    connect(mytimer,SIGNAL(gearbox_temper(QString)),gear_box,SLOT(set_gearbox_temper(QString)));
    connect(mytimer,SIGNAL(gearbox_pressure(QString)),gear_box,SLOT(set_gearbox_pressure(QString)));
    connect(mytimer,SIGNAL(gear_rate(QString)),gear_box,SLOT(set_gearbox_rate(QString)));

    connect(mytimer,SIGNAL(power_change(QString)),home_page,SLOT(power_changed(QString)));

    connect(mytimer,SIGNAL(speedup_percent(QString)),index,SLOT(set_speedup_percent(QString)));
    connect(mytimer,SIGNAL(slowdown_percent(QString)),index,SLOT(set_slowdown_percent(QString)));
    connect(mytimer,SIGNAL(battety_vol(QString)),index,SLOT(set_battery_voltage(QString)));
    connect(mytimer,SIGNAL(gear_rate(QString)),index,SLOT(set_gear_rate(QString)));
    connect(mytimer,SIGNAL(enging_rev(QString)),index,SLOT(set_engine_rev(QString)));
    connect(mytimer,SIGNAL(power_change(QString)),index,SLOT(power_changed(QString)));

    connect(mytimer,SIGNAL(hydraulic(QString)),liquid,SLOT(show_hydraulic_bar(QString)));
    connect(mytimer,SIGNAL(cooling(QString)),liquid,SLOT(show_cooling_bar(QString)));

    connect(mytimer,SIGNAL(power_battery_current(QString)),power,SLOT(set_power_battery_current(QString)));
    connect(mytimer,SIGNAL(power_battery_voltage(QString)),power,SLOT(set_power_battery_voltage(QString)));
    connect(mytimer,SIGNAL(soc(QString)),power,SLOT(set_soc(QString)));
    connect(mytimer,SIGNAL(bms_state(QString)),power,SLOT(set_bms_state(QString)));
    connect(mytimer,SIGNAL(max_current(QString)),power,SLOT(set_max_current(QString)));
    connect(mytimer,SIGNAL(max_power(QString)),power,SLOT(set_max_power(QString)));
    connect(mytimer,SIGNAL(max_voltage(QString)),power,SLOT(set_max_voltage(QString)));
    connect(mytimer,SIGNAL(charing(QString)),power,SLOT(set_charing(QString)));

    connect(mytimer,SIGNAL(enigne_total_hours(QString)),enigne,SLOT(set_enigne_total_hours(QString)));

    mytimer->start();

#if test == 1
    connect(mytimer,SIGNAL(log(QString)),serial,SLOT(serial_write(QString)));              //added by gwd ,log
    connect(adduser,SIGNAL(log(QString)),serial,SLOT(serial_write(QString)));
    connect(login,SIGNAL(log(QString)),serial,SLOT(serial_write(QString)));
    connect(management,SIGNAL(log(QString)),serial,SLOT(serial_write(QString)));
    connect(this,SIGNAL(log(QString)),serial,SLOT(serial_write(QString)));
    connect(general,SIGNAL(log(QString)),serial,SLOT(serial_write(QString)));
    connect(video,SIGNAL(log(QString)),serial,SLOT(serial_write(QString)));
    connect(auto_brightness,SIGNAL(log(QString)),serial,SLOT(serial_write(QString)));
    emit log("7in start to run");
    connect(frmNum::_instance,SIGNAL(log(QString)),serial,SLOT(serial_write(QString)));
#endif

    auto_brightness->init();
    auto_brightness->start();


    QTimer *timer = new QTimer;
    connect(timer, SIGNAL(timeout()),this,SLOT(set_sys_value()));
    timer->start(1000); // 每隔1s
}

MainWidget::~MainWidget()
{

    if (video_is_running == 1)
    {
        receiv->video_stop();
        video_is_running = 0;
    }
    delete ui;
}


void MainWidget::set_sys_value()
{
    //获取系统现在的时间
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    //设置系统时间显示格式
    QString str = time.toString("hh:mm");
    QString d = date.toString("MM月dd日");
    set_time(str);
    set_date(d);

/*    if((ui->c_stackedWidget->currentIndex() != 6)&&(ui->c_stackedWidget->currentIndex() != 16)
            &&(ui->c_stackedWidget->currentIndex() != 19)&&(ui->c_stackedWidget->currentIndex() != 21))*///it's not index or video or login or adduser
    if(ui->c_stackedWidget->currentIndex() == 3)
    {
        if(ui->c_stackedWidget->currentIndex() == last_index)
        {
            count ++ ;
            if(count >= 60)                     //for test
            {
                ui->c_stackedWidget->setCurrentWidget(index);
                count = 0;
            }
        }
        else
        {
            count = 0;
            last_index = ui->c_stackedWidget->currentIndex();
        }
    }else
    {
        count = 0;
    }
}

void MainWidget::paintEvent(QPaintEvent *event)                     //modified by gwd
{
    Q_UNUSED(event);

    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void MainWidget::keyPressEvent(QKeyEvent *ev)                         //added by gwd
{
    switch (ev->key()) {

    case Qt::Key_B:
        switch (ui->r1->currentIndex()) {
        case 0:
            emit slide_help(17);
            break;
        case 1:
            emit slide_pressure(10);
            break;
        case 2:
            emit slide_gear(27);
            break;
        default:
            break;
        }break;

    case Qt::Key_C:
        switch (ui->r2->currentIndex()) {
        case 0:
            emit slide_pressure(10);
            break;
        case 1:
            emit slide_pressure(13);
            break;
        case 2:
            emit slide_gear(27);
            break;
        case 3:
            emit slide_gear(9);
            break;
        case 4:
            emit slide_weight(4);
            break;
        case 5:
            emit slide_engine(8);
            break;
        default:
            break;
        }break;

    case Qt::Key_D:
        switch (ui->r3->currentIndex()) {
        case 0:
            emit slide_gear(27);
            break;
        case 1:
            emit slide_engine(8);
            break;
        case 2:
            emit slide_engine(13);
            break;
        case 3:
            emit slide_engine(9);
            break;
        case 4:
            emit slide_weight(4);
            break;
        case 5:
            emit slide_pressure(10);
            break;
        default:
            break;
        }break;

    case Qt::Key_E:
    {
        if(!wStack.isEmpty())
        {
            if(wStack.count()== 1){
                //            ui->c_stackedWidget->setCurrentWidget(index);
            }
            else
            {
                wStack.pop();
                ui->c_stackedWidget->setCurrentWidget(wStack.pop());
            }
        }
    }
        break;

    case Qt::Key_G:
        switch (ui->l1->currentIndex()) {
        case 0:
            if(is_video)
            {
                MessageWidget * mess = new MessageWidget(this);
                mess->init("操作失败","暂不支持环车影像");
            }
            else
            {
                emit slide_video(16);
            }
            break;
        case 1:
            emit slide_engine(8);
            break;
        case 2:
            if(is_weight)
            {
                MessageWidget * mess = new MessageWidget(this);
                mess->init("操作失败","暂不支持称重系统");
            }
            else
            {
                emit slide_weight(4);
            }
            break;
        default:
            break;
        }break;

    case Qt::Key_F:
        switch (ui->l2->currentIndex()) {
        case 0:
            emit slide_engine(8);
            break;
        case 1:
            emit slide_engine(9);
            break;
        case 2:
            emit slide_gear(27);
            break;
        case 3:
            emit slide_gear(13);
            break;
        case 4:
            if(is_weight)
            {
                MessageWidget * mess = new MessageWidget(this);
                mess->init("操作失败","暂不支持称重系统");
            }
            else
            {
                emit slide_weight(4);
            }
        case 5:
            emit slide_pressure(10);
            break;
        default:
            break;
        }break;

    case Qt::Key_J:
        switch (ui->l3->currentIndex()) {
        case 0:
            if(is_weight)
            {
                MessageWidget * mess = new MessageWidget(this);
                mess->init("操作失败","暂不支持称重系统");
            }
            else
            {
                emit slide_weight(4);
            }
            break;
        case 1:
            emit slide_pressure(10);
            break;
        case 2:
            emit slide_gear(27);
            break;
        case 3:
            emit slide_gear(13);
            break;
        case 4:
            emit slide_gear(9);
            break;
        case 5:
            emit slide_engine(8);
        default:
            break;
        }break;

    case Qt::Key_I:
        emit slide_home(6);break;

    case Qt::Key_A:
#if test == 1
        this->close();
#endif

    default:
        break;
    }

}

void MainWidget::initUI()
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->top_widget->setWindowFlags(Qt::FramelessWindowHint);
    ui->right_widget->setWindowFlags(Qt::FramelessWindowHint);
    ui->left_widget->setWindowFlags(Qt::FramelessWindowHint);
    ui->c_stackedWidget->setWindowFlags(Qt::FramelessWindowHint);
    home_page = new HomePage;
    weight =new Weight;
    query = new InformationQuery;
    index = new Index;
    zc = new ZC;
    power = new Power;
    enigne = new Enigne;
    temperature = new Temperature;
    pressure = new Pressure;
    isg_power = new IsgPower;
    driver_power = new DriverPower;
    liquid = new Liquid;
    error = new Error;
    warning = new Warning;
    video = new Video;
    help = new Help;
    set1 = new set;
    login = new Login;
    management = new Management;
    adduser = new AddUser;
    userpage = new SuperUserPage;
    general = new GeneralSettings;
    func = new OptionalFunction;
    cartype = new ChooseCarType;
    weigh = new WeighingParameter;
    gear_box = new gearbox;
    shortcut = new edit_shortcut;

    ui->c_stackedWidget->addWidget(zc); //2
    ui->c_stackedWidget->addWidget(home_page);//3
    ui->c_stackedWidget->addWidget(weight);//4
    ui->c_stackedWidget->addWidget(query);//5
    ui->c_stackedWidget->addWidget(index);//6
    ui->c_stackedWidget->addWidget(power);//7
    ui->c_stackedWidget->addWidget(enigne);//8
    ui->c_stackedWidget->addWidget(temperature);//9
    ui->c_stackedWidget->addWidget(pressure);//10
    ui->c_stackedWidget->addWidget(isg_power);//11
    ui->c_stackedWidget->addWidget(driver_power);//12
    ui->c_stackedWidget->addWidget(liquid);//13
    ui->c_stackedWidget->addWidget(error);//14
    ui->c_stackedWidget->addWidget(warning);//15
    ui->c_stackedWidget->addWidget(video);//16
    ui->c_stackedWidget->addWidget(help);//17
    ui->c_stackedWidget->addWidget(set1);//18
    ui->c_stackedWidget->addWidget(login);//19
    ui->c_stackedWidget->addWidget(management);//20
    ui->c_stackedWidget->addWidget(adduser);//21
    ui->c_stackedWidget->addWidget(userpage);//22
    ui->c_stackedWidget->addWidget(general);//23
    ui->c_stackedWidget->addWidget(func);//24
    ui->c_stackedWidget->addWidget(cartype);//25
    ui->c_stackedWidget->addWidget(weigh);//26
    ui->c_stackedWidget->addWidget(gear_box);//27
    ui->c_stackedWidget->addWidget(shortcut);//28
    ui->c_stackedWidget->setCurrentWidget(home_page);
    connect(this,SIGNAL(slide_video(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(this,SIGNAL(slide_weight(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(this,SIGNAL(slide_power(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(this,SIGNAL(slide_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(this,SIGNAL(slide_help(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(this,SIGNAL(slide_isg(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(this,SIGNAL(slide_tm(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(this,SIGNAL(slide_engine(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(this,SIGNAL(slide_pressure(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    //connect(this,SIGNAL(slide_set(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(this,SIGNAL(slide_gear(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(index,SIGNAL(control_page(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(home_page,SIGNAL(show_query(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(home_page,SIGNAL(show_setting(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(home_page,SIGNAL(show_video(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(home_page,SIGNAL(show_weight(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(home_page,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(home_page,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(func,SIGNAL(video()),home_page,SLOT(change_video()));
    connect(func,SIGNAL(weight()),home_page,SLOT(change_weight()));
    connect(func,SIGNAL(weight()),shortcut,SLOT(change_weight()));
    connect(func,SIGNAL(video()),this,SLOT(change_video()));
    connect(func,SIGNAL(weight()),this,SLOT(change_weight()));

    connect(query,SIGNAL(zc(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(query,SIGNAL(power(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(query,SIGNAL(error(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(query,SIGNAL(warning(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(query,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(query,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(zc,SIGNAL(temperate(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(zc,SIGNAL(pressure(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(zc,SIGNAL(isg(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(zc,SIGNAL(Tm(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(zc,SIGNAL(enigne(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(zc,SIGNAL(liquid(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(zc,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(zc,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(zc,SIGNAL(gear_box(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(driver_power,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(temperature,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(pressure,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(liquid,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(zc,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(isg_power,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(enigne,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(power,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(warning,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(error,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(weight,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(weight,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(video,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(video,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(set1,SIGNAL(login(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(set1,SIGNAL(management(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(set1,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(set1,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(login,SIGNAL(login(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(login,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(management,SIGNAL(add(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(management,SIGNAL(del(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(management,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(adduser,SIGNAL(create(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(adduser,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(userpage,SIGNAL(ybsz(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(userpage,SIGNAL(kxgn(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(userpage,SIGNAL(cxxz(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(userpage,SIGNAL(czcs(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(userpage,SIGNAL(clear(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(userpage,SIGNAL(exit(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(userpage,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(general,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(general,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(func,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(func,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(func,SIGNAL(slide_edit(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(cartype,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(cartype,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(weigh,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(weigh,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(gear_box,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));

    connect(shortcut,SIGNAL(back_home(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(shortcut,SIGNAL(previous(int)),ui->c_stackedWidget,SLOT(setCurrentIndex(int)));
    connect(this,SIGNAL(edit_reset()),shortcut,SLOT(on_btn_reset_clicked()));


    connect(ui->c_stackedWidget,SIGNAL(currentChanged(int)),this,SLOT(c_stackedwidget_changed(int)));
    connect(ui->c_stackedWidget,SIGNAL(widgetRemoved(int)),this,SLOT(c_stackedwidget_removed(int)));
    //传递值的信号绑定
    connect(login,SIGNAL(senddata(QString)),this,SLOT(receivename(QString)));
    connect(userpage,SIGNAL(senddata(QString)),this,SLOT(receivename(QString)));
    connect(general,SIGNAL(senddata(QString)),this,SLOT(receivename(QString)));
    connect(management,SIGNAL(senddata(QString)),this,SLOT(receivename(QString)));

    connect(login,SIGNAL(senddata(QString)),management,SLOT(get_user_now(QString)));

    connect(login,SIGNAL(loginstatus(int)),set1,SLOT(loginstatus(int)));
    connect(login,SIGNAL(loginstatus(int)),general,SLOT(loginstatus(int)));
    connect(userpage,SIGNAL(loginstatus(int)),set1,SLOT(loginstatus(int)));
    connect(userpage,SIGNAL(loginstatus(int)),general,SLOT(loginstatus(int)));
    connect(general,SIGNAL(loginstatus_s(int)),set1,SLOT(loginstatus(int)));
    connect(general,SIGNAL(loginstatus_s(int)),general,SLOT(loginstatus(int)));
    connect(management,SIGNAL(loginstatus_s(int)),set1,SLOT(loginstatus(int)));
    connect(management,SIGNAL(loginstatus_s(int)),general,SLOT(loginstatus(int)));


    connect(adduser,SIGNAL(send()),management,SLOT(receive()));
    connect(management,SIGNAL(fast_login(QString)),login,SLOT(receive_fast_login(QString)));

    connect(ui->c_stackedWidget,SIGNAL(currentChanged(int)),this,SLOT(update_stack()));
    connect(shortcut,SIGNAL(edit_shortcut_save(int,int,int,int)),this,SLOT(edit_shortcut_save(int,int,int,int)));
    connect(shortcut,SIGNAL(edit_shortcut_save(int,int,int,int)),help,SLOT(edit_shortcut_save(int,int,int,int)));

    ui->l1->setCurrentIndex(0);
    ui->l2->setCurrentIndex(0);
    ui->l3->setCurrentIndex(0);
    ui->r1->setCurrentIndex(0);
    ui->r2->setCurrentIndex(5);
    ui->r3->setCurrentIndex(5);
    ui->r2->setCurrentIndex(2);




}


void MainWidget::receivename(QString name)
{
    ui->name->setText(name);
}

void MainWidget::change_weight()
{
    if(is_weight==true)
    {
        is_weight = false;
        ui->btn_weight1->setStyleSheet("background-image: url(:/侧键_称重2.png);border:none;");
        ui->btn_weight2->setStyleSheet("background-image: url(:/侧键_称重2.png);border:none;");
        ui->btn_weight3->setStyleSheet("background-image: url(:/侧键_称重2.png);border:none;");
        ui->btn_weight6->setStyleSheet("background-image: url(:/侧键_称重2.png);border:none;");
        ui->btn_weight7->setStyleSheet("background-image: url(:/侧键_称重2.png);border:none;");
//        ui->hlayout->removeWidget(ui->btn_weight);
//        ui->btn_weight->setHidden(true);
    }
    else
    {
        is_weight = true;
        ui->btn_weight1->setStyleSheet("background-image: url(:/侧键_称重2_disable.PNG);border:none;");
        ui->btn_weight2->setStyleSheet("background-image: url(:/侧键_称重2_disable.PNG);border:none;");
        ui->btn_weight3->setStyleSheet("background-image: url(:/侧键_称重2_disable.PNG);border:none;");
        ui->btn_weight6->setStyleSheet("background-image: url(:/侧键_称重2_disable.PNG);border:none;");
        ui->btn_weight7->setStyleSheet("background-image: url(:/侧键_称重2_disable.PNG);border:none;");
//        ui->hlayout->addWidget(ui->btn_weight);
//        ui->btn_weight->setHidden(false);
    }
}

void MainWidget::change_video()
{
    if(is_video == true)
    {
        is_video = false;
        ui->btn_video1->setStyleSheet("background-image: url(:/侧键_影像2.png);border:none;");
//        ui->btn_video->setHidden(true);
    }

    else
    {
        is_video = true;
        ui->btn_video1->setStyleSheet("background-image: url(:/侧键_影像2_disable.PNG);border:none;");
//        ui->btn_video->setHidden(false);
    }

}



void MainWidget::set_type(const QString &type)
{
    ui->type->setText(type);
}
void MainWidget::set_state(const QString &state)
{
    ui->state->setText(state);
    if(state == "一般报警"){
        ui->state->setStyleSheet(tr("QLabel#state{border-image: url(:/img/resources/118.png);font:30pt MicrosoftYaHeiUI;color: #FFFFFF;}"));
        ui->state->setAlignment(Qt::AlignRight|Qt::AlignBottom);

    }else if(state == "严重报警"){
        ui->state->setStyleSheet(tr("QLabel#state{border-image: url(:/img/resources/118.png);font:30pt MicrosoftYaHeiUI;color: #FFFFFF;}"));
        ui->state->setAlignment(Qt::AlignRight|Qt::AlignBottom);

    }else{
        ui->state->setStyleSheet(tr("QLabel#state{border-image: url(:/img/resources/状态灯_蓝.png);font:30pt MicrosoftYaHeiUI;color: #FFFFFF;}"));
        ui->state->setAlignment(Qt::AlignRight|Qt::AlignBottom);

    }
}


void MainWidget::set_date(const QString &date)
{
    ui->date->setText(date);
}


void MainWidget::set_time(const QString &time)
{
    ui->time->setText(time);
}

void MainWidget::update_stack()
{

    QWidget *temp = ui->c_stackedWidget-> currentWidget();
    wStack.append(temp);
}


void MainWidget::on_btn_video1_clicked()
{
    if(is_video)
    {
        MessageWidget * mess = new MessageWidget(this);
        mess->init("操作失败","暂不支持环车影像");
    }
    else
    {
        emit slide_video(16);
    }
}

void MainWidget::on_btn_video2_clicked()
{
    if(is_video)
    {
        MessageWidget * mess = new MessageWidget(this);
        mess->init("操作失败","暂不支持环车影像");
    }
    else
    {
        emit slide_video(16);
    }
}

void MainWidget::on_btn_video3_clicked()
{
    if(is_video)
    {
        MessageWidget * mess = new MessageWidget(this);
        mess->init("操作失败","暂不支持环车影像");
    }
    else
    {
        emit slide_video(16);
    }
}


void MainWidget::on_btn_weight1_clicked()
{
    if(is_weight)
    {
        MessageWidget * mess = new MessageWidget(this);
        mess->init("操作失败","暂不支持称重系统");
    }
    else
    {
        emit slide_weight(4);
    }
}
void MainWidget::on_btn_weight2_clicked()
{
    if(is_weight)
    {
        MessageWidget * mess = new MessageWidget(this);
        mess->init("操作失败","暂不支持称重系统");
    }
    else
    {
        emit slide_weight(4);
    }
}
void MainWidget::on_btn_weight3_clicked()
{
    if(is_weight)
    {
        MessageWidget * mess = new MessageWidget(this);
        mess->init("操作失败","暂不支持称重系统");
    }
    else
    {
        emit slide_weight(4);
    }
}
void MainWidget::on_btn_weight6_clicked()
{
    if(is_weight)
    {
        MessageWidget * mess = new MessageWidget(this);
        mess->init("操作失败","暂不支持称重系统");
    }
    else
    {
        emit slide_weight(4);
    }
}
void MainWidget::on_btn_weight7_clicked()
{
    if(is_weight)
    {
        MessageWidget * mess = new MessageWidget(this);
        mess->init("操作失败","暂不支持称重系统");
    }
    else
    {
        emit slide_weight(4);
    }
}
//void MainWidget::on_btn_power_clicked()
//{
//    emit slide_power(7);
//}

void MainWidget::on_btn_home_clicked()
{
    emit slide_home(6);
}

void MainWidget::on_btn_help1_clicked()
{
    emit slide_help(17);
}
void MainWidget::on_btn_help2_clicked()
{
    emit slide_help(17);
}
void MainWidget::on_btn_help3_clicked()
{
    emit slide_help(17);
}
//void MainWidget::on_btn_set_clicked()
//{
//    emit slide_set(18);
//}
void MainWidget::on_btn_gearbox1_clicked()
{
    emit slide_gear(27);
}
void MainWidget::on_btn_gearbox2_clicked()
{
    emit slide_gear(27);
}
void MainWidget::on_btn_gearbox3_clicked()
{
    emit slide_gear(27);
}
void MainWidget::on_btn_gearbox6_clicked()
{
    emit slide_gear(27);
}
void MainWidget::on_btn_gearbox7_clicked()
{
    emit slide_gear(27);
}
void MainWidget::on_btn_engine1_clicked()
{
    emit slide_engine(8);
}
void MainWidget::on_btn_engine2_clicked()
{
    emit slide_engine(8);
}
void MainWidget::on_btn_engine3_clicked()
{
    emit slide_engine(8);
}
void MainWidget::on_btn_engine6_clicked()
{
    emit slide_engine(8);
}
void MainWidget::on_btn_engine7_clicked()
{
    emit slide_engine(8);
}
void MainWidget::on_btn_pressure1_clicked()
{
    emit slide_pressure(10);
}
void MainWidget::on_btn_pressure2_clicked()
{
    emit slide_pressure(10);
}
void MainWidget::on_btn_pressure3_clicked()
{
    emit slide_pressure(10);
}
void MainWidget::on_btn_pressure6_clicked()
{
    emit slide_pressure(10);
}
void MainWidget::on_btn_pressure7_clicked()
{
    emit slide_pressure(10);
}
void MainWidget::on_btn_liquid2_clicked()
{
    emit slide_pressure(13);
}
void MainWidget::on_btn_liquid3_clicked()
{
    emit slide_pressure(13);
}
void MainWidget::on_btn_liquid6_clicked()
{
    emit slide_pressure(13);
}
void MainWidget::on_btn_liquid7_clicked()
{
    emit slide_pressure(13);
}
void MainWidget::on_btn_temper2_clicked()
{
    emit slide_pressure(9);
}
void MainWidget::on_btn_temper3_clicked()
{
    emit slide_pressure(9);
}
void MainWidget::on_btn_temper6_clicked()
{
    emit slide_pressure(9);
}
void MainWidget::on_btn_temper7_clicked()
{
    emit slide_pressure(9);
}
//void MainWidget::on_btn_isg_clicked()
//{
//    emit slide_isg(11);
//}

//void MainWidget::on_btn_tm_clicked()
//{
//    emit slide_tm(12);
//}

void MainWidget::on_btn_back_clicked()
{
    if(!wStack.isEmpty())
    {
        if(wStack.count()== 1){
            //            ui->c_stackedWidget->setCurrentWidget(index);
        }
        else
        {
            wStack.pop();
            ui->c_stackedWidget->setCurrentWidget(wStack.pop());
        }
    }
}

void MainWidget::c_stackedwidget_changed(int next_index){

    if((next_index == 19) || (next_index == 21))
    {
        frmNum::_instance->setVisible(true);
        frmInput::_instance->setVisible(true);
    }
    else
    {
        frmNum::_instance->setVisible(false);
        frmInput::_instance->setVisible(false);
    }

    if(next_index == 28)
    {
        emit edit_reset();
    }

    if(next_index == 16){
        receiv = new receiver();
#if test == 1
        connect(receiv,SIGNAL(log(QString)),serial,SLOT(serial_write(QString)));
#endif
        receiv->setParent(this);
        receiv->init_video_overlay();
        receiv->video_start();
        video_is_running = 1;
    }
    else{
        if (video_is_running == 1)
        {
            receiv->video_stop();
            video_is_running = 0;
        }
    }
}


void MainWidget::set_receiver_stop()
{
    video_is_running = 0;
}


void MainWidget::edit_shortcut_save(int l2,int l3,int r2,int r3)
{
    switch (l2) {
    case 1:
        ui->l2->setCurrentIndex(1);
        break;
    case 2:
        ui->l2->setCurrentIndex(3);
        break;
    case 3:
        ui->l2->setCurrentIndex(4);
        break;
    case 4:
        ui->l2->setCurrentIndex(0);
        break;
    case 5:
        ui->l2->setCurrentIndex(2);
        break;
    case 6:
        ui->l2->setCurrentIndex(5);
        break;
    default:
        break;
    }

    switch (l3) {
    case 1:
        ui->l3->setCurrentIndex(4);
        break;
    case 2:
        ui->l3->setCurrentIndex(3);
        break;
    case 3:
        ui->l3->setCurrentIndex(0);
        break;
    case 4:
        ui->l3->setCurrentIndex(5);
        break;
    case 5:
        ui->l3->setCurrentIndex(2);
        break;
    case 6:
        ui->l3->setCurrentIndex(1);
        break;
    default:
        break;
    }

    switch (r2) {
    case 1:
        ui->r2->setCurrentIndex(3);
        break;
    case 2:
        ui->r2->setCurrentIndex(1);
        break;
    case 3:
        ui->r2->setCurrentIndex(4);
        break;
    case 4:
        ui->r2->setCurrentIndex(5);
        break;
    case 5:
        ui->r2->setCurrentIndex(2);
        break;
    case 6:
        ui->r2->setCurrentIndex(0);
        break;
    default:
        break;
    }

    switch (r3) {
    case 1:
        ui->r3->setCurrentIndex(3);
        break;
    case 2:
        ui->r3->setCurrentIndex(2);
        break;
    case 3:
        ui->r3->setCurrentIndex(4);
        break;
    case 4:
        ui->r3->setCurrentIndex(1);
        break;
    case 5:
        ui->r3->setCurrentIndex(0);
        break;
    case 6:
        ui->r3->setCurrentIndex(5);
        break;
    default:
        break;
    }
}
