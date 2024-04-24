#ifndef APPLICATION_H
#define APPLICATION_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class Application;
}
QT_END_NAMESPACE

class Application : public QMainWindow
{
    Q_OBJECT

public:
    Application(QWidget *parent = nullptr);

    QSqlDatabase dbConnection();
    ~Application();

private:
    Ui::Application *ui;
    QSqlDatabase db;
};
#endif // APPLICATION_H
