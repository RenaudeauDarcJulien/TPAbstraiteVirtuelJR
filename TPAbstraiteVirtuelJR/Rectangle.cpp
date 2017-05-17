#include "Rectangle.h"
#include <stdlib.h>
#include<iostream>
using namespace std;


CRectangle::CRectangle()
{
}
// Récupere la valeur largeur d'un rectangle
int CRectangle::get_largeur()
{
	return m_largeur;
}
//Recupere la velur hauter d'un rectangle
int CRectangle::get_hauteur()
{
	return m_hauteur;
}
//Modifie la largeur d'un rectangle
void CRectangle::set_largeur(int largeur)
{
	m_largeur = largeur;
}
//Modifie la hauteur d'un rectangle
void CRectangle::set_hauteur(int hauteur)
{
	m_hauteur = hauteur;
}
//Permet d'afficher les valeurs du rectangle
void CRectangle::dessiner()
{
	cout << "X :" << m_largeur << "Y :" << m_hauteur << endl;
}
//Retorune la valeur de l'aire du rectangle
int CRectangle::aire()
{
	return m_largeur*m_hauteur;
}
//retourne la valeur du périmetre du rectangle
int CRectangle::perimetre()
{
	return (m_largeur*m_hauteur)*2;
}
