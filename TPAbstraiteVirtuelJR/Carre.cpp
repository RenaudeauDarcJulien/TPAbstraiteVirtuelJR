#include "Carre.h"
#include <stdlib.h>
#include<iostream>
using namespace std;

CCarre::CCarre() : CRectangle()
{
}
//Permet de r�cup�rer le bord d'un carr�
int CCarre::get_bord()
{
	return get_largeur();
}
//Permet de modifier le bord du carr�
void CCarre::set_bord(int bord)
{
	set_largeur(bord);
	set_hauteur(bord);
}
//Affiche les valeurs du carre
void CCarre::dessiner()
{
	CRectangle::dessiner();
}
//Retourne l'aire du carr�
int CCarre::aire()
{
	return CRectangle::aire();
}
//Retourne le p�rimetre du carr�
int CCarre::perimetre()
{
	return CRectangle::perimetre();
}