#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWin; }
QT_END_NAMESPACE

class MainWin : public QMainWindow
{
    Q_OBJECT

public:
    MainWin(QWidget *parent = nullptr);
    ~MainWin();

private slots:
    void on_Input_1_textChanged();

private:
    Ui::MainWin *ui;
};
#endif // MAINWIN_H
