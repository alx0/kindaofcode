#include "palindroma.h"
#include "ui_palindroma.h"

Palindroma::Palindroma(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Palindroma)
{
    ui->setupUi(this);
    connect( ui->pushButton , SIGNAL(clicked()) , this , SLOT(OnClick())) ;
}

Palindroma::~Palindroma()
{
    delete ui;
}

bool Palindroma::OnClick() {

    string = ui->textEdit->toPlainText() ;

    for ( int i = 0 ; i < string.length() / 2 ; i++ ) {

        if ( string[i] != string[string.length()-i-1] ) {

            ui->label->setText("La stringa non e' palindroma!") ;
            return false ;
        }
    }

    ui->label->setText("La stringa e' palindroma.") ;
    return true ;

}

void Palindroma::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
