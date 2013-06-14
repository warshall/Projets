#include<iostream>
#include<string>
#include<stdlib.h>		/* srand, rand */
#include<time.h>		/* time */
#include<sstream>		// Streamstring
#include<QApplication>
#include<QPushButton>

int main (int argc, char* argv[])
{
    QApplication app(argc, argv) ;

    QPushButton ced("Salut les zouzous") ;
    ced.show() ;
    ced.setToolTip("salut") ;


    return app.exec() ;
}
