/*
 *
 *Ա������������
 *
 */


#include "staff.h"
#include "ui_staff.h"
#include "admin.h"
#include <delete.h>
Staff::Staff(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::Staff)
{
    ui->setupUi(this);

    this->setFixedSize(this->width(), this->height());

}

Staff::~Staff()
{
    delete ui;
}


/*���Ա����ť*/
void Staff::on_add_Button_clicked()
{

    Add* add = new Add();

    add->show();

    delete this;
}


/*ɾ����ť*/
void Staff::on_delet_Button_clicked()
{
    Delete* delete1 = new Delete;
    delete1->show();
    delete this;
}


/*���ذ�ť*/
void Staff::on_backe_Button_clicked()
{
    Admin* admin = new Admin;
    admin->show();
    delete this;

}
