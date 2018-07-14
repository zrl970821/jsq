#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

QString screen;
int temp[10]={0};
int i=0;
QString result;
int math[10]={0};
int res;
int t;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    screen.append("1");
    result.append("1");
    ui->text->setText(screen);
}

void MainWindow::on_button2_clicked()
{
    screen.append("2");
    result.append("2");
    ui->text->setText(screen);
}

void MainWindow::on_button3_clicked()
{
    screen.append("3");
    result.append("3");
    ui->text->setText(screen);
}

void MainWindow::on_button4_clicked()
{
    screen.append("4");
    result.append("4");
    ui->text->setText(screen);
}

void MainWindow::on_button5_clicked()
{
    screen.append("5");
    result.append("5");
    ui->text->setText(screen);
}

void MainWindow::on_button6_clicked()
{
    screen.append("6");
    result.append("6");
    ui->text->setText(screen);
}

void MainWindow::on_button7_clicked()
{
    screen.append("7");
    result.append("7");
    ui->text->setText(screen);
}

void MainWindow::on_button8_clicked()
{
    screen.append("8");
    result.append("8");
    ui->text->setText(screen);
}

void MainWindow::on_button9_clicked()
{
    screen.append("9");
    result.append("9");
    ui->text->setText(screen);
}

void MainWindow::on_button0_clicked()
{
    screen.append("0");
    result.append("0");
    ui->text->setText(screen);
}

void MainWindow::on_add_clicked()
{
    temp[i] = result.toInt();
    result = "";
    screen.append("+");
    math[i] = 1;
    ui->text->setText(screen);
    i=i+1;
}

void MainWindow::on_pushButton_2_clicked()
{
    temp[i] = result.toInt();
    result = "";
    screen.append("-");
    math[i] = 2;
    ui->text->setText(screen);
    i++;
}



void MainWindow::on_pushButton_clicked()
{
    temp[i] = result.toInt();
    result = "";
    screen.append("*");
    math[i] = 3;
    ui->text->setText(screen);
    i++;
}

void MainWindow::on_pushButton_5_clicked()
{
    temp[i] = result.toInt();
    result = "";
    screen.append("/");
    math[i] = 4;
    ui->text->setText(screen);
    i++;
}

void MainWindow::on_pushButton_4_clicked()
{
    temp[i] = result.toInt();
    res = temp[0];
    for (i=0;math[i]!=0;i++)
    {
        t = math[i];
        switch (t) {
        case 1:
            res = res + temp[i+1];
            break;
        case 2:
            res = res - temp[i+1];
            break;
        case 3:
            res = res * temp[i+1];
            break;
        case 4:
            res = res / temp[i+1];
            break;
        default:
            break;
        }
    }
    result = QString::number(res);
    screen.append(" = ");
    screen.append(result);
    ui->text->setText(screen);
    screen = "";
    result = "";
    memset(math,0,10*sizeof(int));
    memset(temp,0,10*sizeof(int));
    i = 0;
}


void MainWindow::on_pushButton_3_clicked()
{
    screen = "";
    result = "";
    ui->text->clear();
    memset(math,0,10*sizeof(int));
    memset(temp,0,10*sizeof(int));
    i = 0;
}
