#include "Figure.h"
#include <stdlib.h>
#include<iostream>
using namespace std;

CFigure::CFigure()
{
}

//Permet de récupérer la valeur de x pour une figure
int CFigure::get_x()
{
	return m_x;
}
//Permet de récupérer la valeur de y pour une figure
int CFigure::get_y()
{
	return m_y;
}
//Permet de modifier le contenu de x
void CFigure::set_x(int x)
{
	m_x = x;
}
//Permet de modifier le contenu de y
void CFigure::set_y(int y)
{
	m_y = y;
}
//Permet d'afficher les valeurs d'une figure
void CFigure::dessiner()
{
	cout << "X :" << m_x << "Y :" << m_y << endl;
}
//Retourne l'aire d'une figure
int CFigure::aire()
{
	return 0.0;
}
//Retourne l'aire d'une figure
int CFigure::perimetre()
{
	return 0.0;
}
