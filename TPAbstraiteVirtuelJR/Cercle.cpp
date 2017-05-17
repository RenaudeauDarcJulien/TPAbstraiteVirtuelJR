#include "Cercle.h"
#include <stdlib.h>
#include<iostream>
using namespace std;

CCercle::CCercle()
{
}
//R�cupere le radius d'un cercle
int CCercle::get_radius()
{
	return m_radius;
}
//Permetde modifier le radius du cercle
void CCercle::set_radius(int radius)
{
	m_radius = radius;
}
//Affiche les valeurs du cercle
void CCercle::dessiner()
{
	cout << "Radius :" << m_radius << endl;
}
//R�cup�re l'aire d'un cercle
int CCercle::aire()
{
	return 3.14*m_radius*m_radius;
}
//R�cup�re le p�rimetre d'un cercle
int CCercle::perimetre()
{
	return 2*3.14*m_radius;
}
