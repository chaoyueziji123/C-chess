#include <QApplication>
#include "Borad.h"
int main(int argc,char* argv[])
{
    QApplication app(argc,argv);
    Borad borad;
    borad.show();
    return app.exec();
}
