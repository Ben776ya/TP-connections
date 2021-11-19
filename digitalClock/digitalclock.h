#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include <QWidget>
#include <QTimerEvent>
#include <QLCDNumber>
#include <QHBoxLayout>
#include <QTime>



class QRadioButton;

class DigitalClock: public QWidget{
  Q_OBJECT

public:

  DigitalClock(QWidget * parent = nullptr);

protected:
     void createWidgets();
     void placeWidgets();
     void updateTime();
     void timerEvent(QTimerEvent *e) override;

private:

   QLCDNumber *hour;
   QLCDNumber *minute;
   QLCDNumber *second;




};


#endif
