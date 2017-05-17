#include "Carre.h"
#include <stdlib.h>
#include<iostream>
using namespace std;

CCarre::CCarre() : CRectangle()
{
}
//Permet de récupérer le bord d'un carré
int CCarre::get_bord()
{
	return get_largeur();
}
//Permet de modifier le bord du carré
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
//Retourne l'aire du carré
int CCarre::aire()
{
	return CRectangle::aire();
}
//Retourne le périmetre du carré
int CCarre::perimetre()
{
	return CRectangle::perimetre();
}