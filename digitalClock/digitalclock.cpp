#include <digitalclock.h>

DigitalClock::DigitalClock(QWidget *parent) : QWidget(parent)
{
    createWidgets();
    placeWidgets();
    updateTime();
    startTimer(1000);
}


void DigitalClock::updateTime()
{
    auto T = QTime::currentTime();
        hour->display(T.hour());
        minute->display(T.minute());
        second->display(T.second());

}
void DigitalClock::createWidgets()
{
    hour = new QLCDNumber;
    minute = new QLCDNumber;
    second = new QLCDNumber;




}

void DigitalClock::placeWidgets()
{
    auto layout = new QHBoxLayout();
    setLayout(layout);
    layout->addWidget(hour);
    layout->addWidget(minute);
    layout->addWidget(second);

}

void DigitalClock::timerEvent(QTimerEvent *e)
{
    updateTime();
}
