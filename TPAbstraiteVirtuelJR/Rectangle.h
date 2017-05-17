#pragma once
#include "Figure.h"
class CRectangle : public CFigure
{
	int m_largeur;
	int m_hauteur;
public:
	CRectangle();
	CRectangle::CRectangle(int largeur, int hauteur) {
		this->m_hauteur = hauteur;
		this->m_largeur = largeur;
	}
	CRectangle::CRectangle(int x, int y, int largeur, int hauteur)
	{
		this->m_hauteur = hauteur;
		this->m_largeur = largeur;
	}
	//Getter et Setter
	int get_largeur();
	int get_hauteur();
	void set_largeur(int largeur);
	void set_hauteur(int hauteur);

	void dessiner();
	int aire();
	int perimetre();
};