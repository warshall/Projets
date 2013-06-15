#ifndef FENETRE_H
#define FENETRE_H

/*#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>*/

#include <QtGui>

class MaFenetre : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    MaFenetre();

    private:
    void ConstruireBoutons ();
    QPushButton *Pierre;
    QPushButton *Papier;
    QPushButton *Ciso;
    QLabel *lblJoueur;
    QLabel *lblPC;
};



#endif // FENETRE_H
