#include "mainwindow.h"
#include "ui_mainwindow.h"



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

ttext t;
pattern p;
void MainWindow::on_pushButton_3_clicked()
{
    QString s=ui->textEdit->toPlainText();

    t.setttext(s);

}

void MainWindow::on_pushButton_4_clicked()
{
    QString ss= ui->textEdit_2->toPlainText();

    p.setpattern(ss);
}


void MainWindow::on_pushButton_clicked()
{
    percentage1 g;
    ui->label->setText(QString::number(g.percentage_cal(t.gettext(),p.getpattern())));
    if ((g.percentage_cal(t.gettext(),p.getpattern()))>30){
        ui->label_3->setText("انا مش هقولك غير حاجة واحدة ... اتقي الله");
}else  if ((((((g.percentage_cal(t.gettext(),p.getpattern()))<30)))&&(((g.percentage_cal(t.gettext(),p.getpattern()))>10)))){
         ui->label_3->setText("فاكر انك كده خبيث؟ ");


    }else ui->label_3->setText("رجولة والله");
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
     ui->progressBar->setValue(((g.percentage_cal(t.gettext(),p.getpattern()))));



}

void MainWindow::on_pushButton_2_clicked()
{
   percentage b;
   ui->label->setText(QString::number(b.percentagecal(t.gettext(),p.getpattern())));
   if ((b.percentagecal(t.gettext(),p.getpattern()))>30){
       ui->label_3->setText("انا مش هقولك غير حاجة واحدة ... اتقي الله");
}else  if ((((((b.percentagecal(t.gettext(),p.getpattern()))<30)))&&(((b.percentagecal(t.gettext(),p.getpattern()))>10)))){
        ui->label_3->setText("فاكر انك كده خبيث؟ ");


   }else ui->label_3->setText("رجولة والله");
   ui->progressBar->setMinimum(0);
   ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(((b.percentagecal(t.gettext(),p.getpattern()))));


}

void MainWindow::on_pushButton_5_clicked(){
QString searchText = "www"; // The text to highlight
QTextDocument *doc = ui->textEdit_2->document();
QTextCursor cursor = doc->find(searchText);
if (!cursor.isNull()) {
    QTextEdit::ExtraSelection highlight;
    highlight.format.setBackground(Qt::yellow);
    highlight.cursor = cursor;
    QList<QTextEdit::ExtraSelection> extras;
    extras.append(highlight);
    ui->textEdit_2->setExtraSelections(extras);
}
}



