#include <QCoreApplication>
#include <QDebug>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    qDebug() << "in main...";
    MyClass m;

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            qDebug() << m.compare(i,j);
        }
    }


    return a.exec();
}
