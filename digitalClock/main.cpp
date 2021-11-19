#include <QApplication>
#include "digitalclock.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //Creating the traffic light
    auto D = new DigitalClock;


    //showing the trafic light
    D->show();

    return a.exec();
}
