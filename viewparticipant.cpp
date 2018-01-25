#include "viewparticipant.h"
#include "ui_viewparticipant.h"

ViewParticipant::ViewParticipant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewParticipant)
{
    ui->setupUi(this);
}

ViewParticipant::~ViewParticipant()
{
    delete ui;
}
