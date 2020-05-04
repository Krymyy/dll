#ifndef KORTINLUKUUSI_H
#define KORTINLUKUUSI_H
#include "kortinlukuusi_global.h"
#include <QSerialPort>

class KORTINLUKUUSISHARED_EXPORT Kortinlukuusi
{

public:
   Kortti();
   QByteArray datas;
   QSerialPort *serial = new QSerialPort;
   short onkodataa;
   short i=-1;

public slots:
   void onkooikein();

//lkjsdföl

};

#endif // KORTINLUKUUSI_H
