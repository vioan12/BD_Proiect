#ifndef VIEWPARTICIPANT_H
#define VIEWPARTICIPANT_H

#include <QDialog>

namespace Ui {
class ViewParticipant;
}

class ViewParticipant : public QDialog
{
    Q_OBJECT

public:
    explicit ViewParticipant(QWidget *parent = 0);
    ~ViewParticipant();

private:
    Ui::ViewParticipant *ui;
};

#endif // VIEWPARTICIPANT_H
