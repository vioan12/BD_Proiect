#ifndef ADDPARTICIPANT_H
#define ADDPARTICIPANT_H

#include <QDialog>

namespace Ui {
class AddParticipant;
}

class AddParticipant : public QDialog
{
    Q_OBJECT

public:
    explicit AddParticipant(QWidget *parent = 0);
    ~AddParticipant();
    void SetData(const QString &id, const QString &nume, const QString &varsta, const QString &experienta, const QString &idgreutate, const QString &idorganizatie);
    void Data(QString &id, QString &nume, QString &varsta, QString &experienta, QString &idgreutate, QString &idorganizatie);
protected:
    void showEvent(QShowEvent*) override;
    void accept() override;
private:
    Ui::AddParticipant *ui;
};

#endif // ADDPARTICIPANT_H
