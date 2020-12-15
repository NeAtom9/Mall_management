/*
 *
 *Ա��������
 *
 */


#include "employees_interface.h"
#include "ui_employees_interface.h"
#include "mainwindow.h"
#include "buy.h"
#include "order.h"
Employees_interface::Employees_interface(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::Employees_interface)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
}

Employees_interface::~Employees_interface()
{
    delete ui;
}

/*���ذ�ť*/
void Employees_interface::on_pushButton_2_clicked()
{
    MainWindow* w = new MainWindow;
    w->show();
    delete this;
}

/*�ͻ����㰴ť*/
void Employees_interface::on_customer_Button_clicked()
{
    Buy* buy = new Buy;
    buy->show();
    connect(this, &Employees_interface::send_account, buy, &Buy::recv_account);

    /*���˺���Ϣ���͵�buy����*/
    emit send_account(ui->label->text());
    delete this;
}

/*������ѯ��ť*/
void Employees_interface::on_goods_Button_clicked()
{
    Order* order = new Order;
    order->show();
    connect(this, &Employees_interface::send_account, order, &Order::recv);

    /*���˺���Ϣ���͵�order����*/
    emit send_account(ui->label->text());
    delete this;
}

/*�źţ��˺ţ����ղۺ���*/
void Employees_interface::recv(QString account)
{
    ui->label->setText(account);
}

/*�źţ��˺ţ����ղۺ���*/
void Employees_interface::recv_back_account(QString account)
{
    ui->label->setText(account);
}
