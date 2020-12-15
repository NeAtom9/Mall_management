/*
 *
 *����������
 *
 */


#include "goods.h"
#include "ui_goods.h"
#include "admin.h"
#include "shop_show.h"
#include "check.h"
Goods::Goods(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::Goods)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
}

Goods::~Goods()
{
    delete ui;
}

/*���ذ�ť*/
void Goods::on_back_Button_clicked()
{
    Admin* admin = new Admin;
    admin->show();
    delete this;
}

/*�ɹ�������ת*/
void Goods::on_procurement_Button_clicked()
{
    Shop_show* shop = new Shop_show;
    shop->show();
    delete this;
}

/*��ѯ������ת*/
void Goods::on_check_Button_clicked()
{
    Check* check = new Check;
    check->show();
    delete this;
}
