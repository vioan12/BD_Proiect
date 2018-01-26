#ifndef ADDCATEGORIEGREUTATE_H
#define ADDCATEGORIEGREUTATE_H

#include <QDialog>

namespace Ui {
class AddCategorieGreutate;
}

class AddCategorieGreutate : public QDialog
{
    Q_OBJECT

public:
    explicit AddCategorieGreutate(QWidget *parent = 0);
    ~AddCategorieGreutate();
    void SetData(const QString &id, const QString &greutate);
    void Data(QString &id, QString &greutate);
protected:
    void showEvent(QShowEvent*) override;
    void accept() override;
private:
    Ui::AddCategorieGreutate *ui;
};

#endif // ADDCATEGORIEGREUTATE_H
