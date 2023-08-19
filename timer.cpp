#include "timer.h"
#include "ui_timer.h"
#include <QTimer>
#include <QThread>

Timer::Timer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Timer),
    timer(new QTimer()),
    time(0,0,0),
    num(0,0,0)
{
    ui->setupUi(this);
    timer->start(1);
    connect(timer, &QTimer::timeout, this,&Timer::update,Qt::DirectConnection );

    ui->Time->setDigitCount(6);
    ui->Time->setSegmentStyle(QLCDNumber::Flat);

}

Timer::~Timer()
{
    delete ui;
}

void Timer::on_start()
{

   // timer->start(1);
    //connect(timer, &QTimer::timeout, this,&Timer::update);
}

void Timer::on_restart()
{

    time=QTime(0,0,0);
    if (timer->isActive() == false)
        timer->start(1);
    //connect(timer, &QTimer::timeout,this, &Timer::update);

}

void Timer::on_stop()
{
    if (timer->isActive() == true)
        timer->stop();
    //    connect(timer, &QTimer::timeout,[=](){
    //        ui->Time->display(num.toString("ss.zzz"));});

}

void Timer::update()
{
    time=time.addMSecs(1);
    ui->Time->display(time.toString("ss.zzz"));//display只是输出括号中的值，不会做绑定
}
