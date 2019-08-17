#include "countdowntimer.h"
#include "ui_countdowntimer.h"

CountDownTimer::CountDownTimer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CountDownTimer){
    ui->setupUi(this);
}

CountDownTimer::~CountDownTimer(){
    delete ui;
}
