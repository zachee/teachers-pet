#include "spreadsheet.h"

#include <QApplication>
#include <QLayout>

int main(int argc, char *argv[])
{
    //QApplication app(argc, argv);

    //return app.exec();
    Q_INIT_RESOURCE(spreadsheet);
    QApplication a(argc, argv);
    SpreadSheet sheet(10);
    sheet.setWindowIcon(QPixmap(":/images/interview.png"));
    sheet.show();
    sheet.layout()->setSizeConstraint(QLayout::SetFixedSize);
    return a.exec();
}
