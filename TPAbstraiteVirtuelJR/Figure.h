#pragma once
class CFigure
{
	int m_x, m_y;
public:
public:
	CFigure();
	CFigure::CFigure(int x, int y) 
	{
		this->m_x = x;
		this->m_y = y;
	}
	//Getter et Setter
	int get_x();
	int get_y();
	void set_x(int x);
	void set_y(int y);

	//Fonction Virtuel
	virtual void dessiner();
	virtual int aire();
	virtual int perimetre();

};

