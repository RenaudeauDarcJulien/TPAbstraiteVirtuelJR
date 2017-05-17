#include <stdlib.h>
#include"Carre.h"
#include"Cercle.h"
#include"Figure.h"
#include"Rectangle.h"
#include<iostream>
using namespace std;

int main()
{
	//Instanciation des classe
	CFigure figure(12, 25);
	CCarre carre(10);
	CRectangle rectangle(25, 20);
	CCercle cercle(10);

	//affichae de valeur pour chaque figure 
	rectangle.dessiner();
	cercle.dessiner();
	figure.dessiner();
	carre.dessiner();
	cout << "Les valeurs d'aire pour chaque figure" << endl;
	cout << "Rectangle :" << rectangle.aire() << endl;
	cout << "Cercle :" << cercle.aire() << endl;
	cout << "Figure :" << figure.aire() << endl;
	cout << "Carre :" << carre.aire() << endl;
	cout << "Les valeurs du périmètre pour chaque figure" << endl;
	cout << "Rectangle :" << rectangle.perimetre() << endl;
	cout << "Cercle :" << cercle.perimetre() << endl;
	cout << "Figure :" << figure.perimetre() << endl;
	cout << "Carre :" << carre.perimetre() << endl;

	system("pause");
	return 0;
}