#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "databasemanager.h"

namespace Ui {
class MainWindow;
}
class AddParticipant;
class AddOrganizatie;
class AddCategorieGreutate;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void OnAddParticipant();
    void OnAddOrganizatie();
    void OnAddCategorieGreutate();


private:
    DatabaseManager DBM;
    Ui::MainWindow *ui;
    AddParticipant *mAddParticipant;
    AddOrganizatie *mAddOrganizatie;
    AddCategorieGreutate *mAddCategorieGreutate;
};

#endif // MAINWINDOW_H
