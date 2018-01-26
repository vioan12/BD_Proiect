#ifndef ADDORGANIZATIE_H
#define ADDORGANIZATIE_H

#include <QDialog>

namespace Ui {
class AddOrganizatie;
}

class AddOrganizatie : public QDialog
{
    Q_OBJECT

public:
    explicit AddOrganizatie(QWidget *parent = 0);
    ~AddOrganizatie();
    void SetData(const QString &id, const QString &nume, const QString &oras);
    void Data(QString &id, QString &nume, QString &oras);
protected:
    void showEvent(QShowEvent*) override;
    void accept() override;
private:
    Ui::AddOrganizatie *ui;
};

#endif // ADDORGANIZATIE_H
