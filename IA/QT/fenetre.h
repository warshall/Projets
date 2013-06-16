#ifndef FENETRE_H
#define FENETRE_H

/*#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>*/
#include <QtGui>

class MaFenetre : public QWidget // On hérite de QWidget (IMPORTANT)
{
   Q_OBJECT

    public:
    MaFenetre();

    public slots:
      void BtnPierre() ;


    private:
    void ConstruireBoutons () ;
    QPushButton *Pierre ;
    QPushButton *Papier ;
    QPushButton *Ciso ;
    QPushButton *Quitter ;
    QLabel *lblJoueur ;
    QLabel *lblPC ;

};



#endif // FENETRE_H
