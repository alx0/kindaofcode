#ifndef PALINDROMA_H
#define PALINDROMA_H

#include <QWidget>
#include <QTextEdit>

namespace Ui {
    class Palindroma;
}

class Palindroma : public QWidget {
    Q_OBJECT
public:
    Palindroma(QWidget *parent = 0);
    ~Palindroma();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Palindroma *ui;
    QString string ;

protected slots :

        bool OnClick() ;


};

#endif // PALINDROMA_H
