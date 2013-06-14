#include<iostream>
#include<string>
#include<stdlib.h>		/* srand, rand */
#include<time.h>		/* time */
#include<sstream>		// Streamstring


void Dessin (void)
{
	system ("clear") ;
	std::cout << "1-Papier" << std::endl ;
	std::cout << "2-Pierre" << std::endl ;
	std::cout << "3-Ciseaux" << std::endl << std::endl ;

}

void Reflexion (std::string *Historique, std::string *Choix)
{
	//unsigned int PosGroupe4[], PosGroupe3[], PosGroupe2[] ;
	std::string Groupe4, Groupe3, Groupe2 ;




	/*
	a = ced.find("sac") ;

	if (a!= string::npos)
			recurence = 1 ;


	while (i < ced.length())
	{
		a = ced.find ("sac", a + 1) ;

		if (a!= string::npos)
		recurence += 1 ;
		i++ ;
	}

	cout << recurence << endl ;
	*/


}

void Resultat (int ChoixHom, int ChoixPc, int *ScorePc, int *ScoreHom)
{
	std::string QuiJouQuoi[4] = {"0", "PAPIER", "PIERRE", "CISO"} ;

								//PC =>		// PAPIER				PIERRE				CISO
	std::string Gagnant[4][4] = 	{{"0"	,	"0"				,	"0"				,	"0"		},
									{ "0"	,	"NULL"			,	"Joueur"		,	"PC"	}, 	//PAPIER
									{ "0"	,	"PC"			,	"NUL"			,	"Joueur"},	//PIERRE	<= HOMME
									{ "0"	,	"Joueur"		,	"PC"			,	"NUL"}	} ; //CISO


	if (Gagnant[ChoixHom][ChoixPc] == "PC") {*ScorePc += (1) ;}
	if (Gagnant[ChoixHom][ChoixPc] == "Joueur") {*ScoreHom += (1) ;}


	Dessin () ;

	std::cout << "Joueur: " 	<<	"	"						<<	QuiJouQuoi[ChoixHom] 			<< "		" 	<< *ScoreHom 	<< std::endl ;
	std::cout << "PC: " 		<<	"		"					<<	QuiJouQuoi[ChoixPc] 		<< "		" 	<< *ScorePc 	<< std::endl 	<< std::endl ;
	std::cout << "GAGNANT: " 	<<	Gagnant[ChoixHom][ChoixPc] 	<< std::endl 	<< std::endl ;
	std::cout << "Taper un nombre: " ;


}

int main ()
{
	std::string Historique, QuiJouQuoi[4] = {"0", "PAPIER", "PIERRE", "CISO"} ;
	int ChoixPc, ChoixHom, ScorePc, ScoreHom ;
	std::stringstream ChoixString ;			// Cette variable permet de convertir un int en string grace a ChoixString.str()
    srand (time(NULL)) ; 					// Initialisation random

	ScorePc = 0 ;
	ScoreHom = 0 ;

	Dessin ();
	std::cout << "Taper un nombre: " ;

	for (;;)
		{

			std::cin >> ChoixHom ;


			if (ChoixHom < 4)
				{
					/*	if ((Choix == "1" || Choix == "2" || Choix == "3") && (Historique.length() > 4))
							{
								Historique.insert(0, Choix) ;
								Reflexion (&Historique, &Choix) ;
							}
					*/
						if (QuiJouQuoi[ChoixHom] == "PIERRE" || QuiJouQuoi[ChoixHom] == "PAPIER" || QuiJouQuoi[ChoixHom] == "CISO")
							{

								ChoixString.str("") ; 								// On rase
								ChoixString << ChoixHom ; 								// Affecte "int Choix" dans la variable
								Historique.insert(0, ChoixString.str()) ; 			// Historique du joueur en string pour rechercher les groupements
								ChoixPc = rand() % 3 + 1 ; 							// Generateur aleatoir
								//std::cout << Historique << std::endl ;
								Resultat (ChoixHom, ChoixPc, &ScorePc, &ScoreHom) ;		// Fonction qui trouve le gagnant

							}
				}
			else {Dessin () ; std::cout << "Veuillez faire un choix valide !" << std::endl << std::endl ; std::cout << "Taper un nombre: " ;}
		}
}
