#include "figure.h"
class CCercle : public CFigure
{

	int m_radius;

public:
	CCercle();
	CCercle::CCercle(int radius)
	{
		this-> m_radius = radius;
	}
	CCercle::CCercle(int x, int y, int radius)
	{
		this->m_radius = radius;
	}
	//Getter et Setter
	int get_radius();
	void set_radius(int radius);

	void dessiner();
	int aire();
	int perimetre();
};
