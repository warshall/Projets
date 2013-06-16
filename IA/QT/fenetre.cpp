#include "fenetre.h"


MaFenetre::MaFenetre() : QWidget()
{
    setFixedSize(300, 100);
    ConstruireBoutons () ;
    QObject::connect(Quitter, SIGNAL(clicked()), qApp, SLOT(quit())) ;
    QObject::connect(Pierre, SIGNAL(clicked()), this, SLOT(BtnPierre())) ;

}

void MaFenetre::BtnPierre()
{

QMessageBox::information(this,tr("coucou"),tr("dddd")) ;

}




void MaFenetre::ConstruireBoutons()
{
   // Construction des boutons
    Pierre = new QPushButton ("Pierre", this);
    Papier = new QPushButton("Papier", this);
    Ciso = new QPushButton("Ciso", this);
    Quitter = new QPushButton ("Quitter", this) ;

    lblJoueur = new QLabel(this) ;
    lblJoueur->setText("Joueur: 0");
    lblPC = new QLabel(this) ;
    lblPC->setText("Pc: 0");

    lblJoueur->move(10, 10) ;
    lblPC->move(110, 10) ;
    Pierre->move(10, 50) ;
    Papier->move(110, 50) ;
    Ciso->move(210, 50) ;
    Quitter->move(210,10) ;
}
