#include "application.h"
#include "ui_application.h"

Application::Application(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Application)
{
    ui->setupUi(this);

    db = dbConnection();
    if (db.isOpen())
    {
        qDebug("Database Connected Successfully!");
    }
    else
    {
        qDebug("Failed to Connect to Database!");
    }

}

Application::~Application()
{
    delete ui;
}

QSqlDatabase Application::dbConnection() {

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("Cha");
    db.setPassword("P@ssword");
    db.setDatabaseName("opp_resortbooking");
    db.open();

    return db;

}

void Application::verifyUserCredentials() {

}
