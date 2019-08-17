#ifndef COUNTDOWNTIMER_H
#define COUNTDOWNTIMER_H

#include <QMainWindow>

namespace Ui {
class CountDownTimer;
}

class CountDownTimer : public QMainWindow
{
    Q_OBJECT

public:
    explicit CountDownTimer(QWidget *parent = nullptr);
    ~CountDownTimer();

private:
    Ui::CountDownTimer *ui;
};

#endif // COUNTDOWNTIMER_H
