#include "rectangle.h"
class CCarre : private CRectangle
{
public:
	CCarre();
	CCarre::CCarre(int bord)
	{
		CRectangle::set_hauteur(bord);
		CRectangle::set_largeur(bord);
	}
	CCarre::CCarre(int x, int y, int bord)
	{
		CRectangle::set_hauteur(bord);
		CRectangle::set_largeur(bord);
	}
	//Getter ET Setter
	int get_bord();
	void set_bord(int bord);

	void dessiner();
	int aire();
	int perimetre();
};
