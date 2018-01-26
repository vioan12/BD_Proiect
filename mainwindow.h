#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include<QSqlDatabase>

namespace Ui {
class MainWindow;
}
class AddParticipant;
class AddOrganizatie;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void OnAddParticipant();
    void OnAddOrganizatie();


private:
    Ui::MainWindow *ui;
    AddParticipant *mAddParticipant;
    AddOrganizatie *mAddOrganizatie;
    //QSqlDatabase db;
};

#endif // MAINWINDOW_H
