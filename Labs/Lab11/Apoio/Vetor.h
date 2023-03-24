#include <iostream>
using std::ostream;

class Vetor
{
public: 
	enum Coord { RET, POL };

private:
	double x, y;			// coordenadas cartesianas
	double mag;				// comprimento do vetor
	double ang;				// ângulo do vetor em graus
	Coord rep;				// representação padrão
	
	void SetMag();			// ajusta magnitude com base em (x,y)
	void SetAng();			// ajusta ângulo com base em (x,y)
	void SetX();			// ajusta posição x com base em magnitude e ângulo
	void SetY();			// ajusta posição y com base em magnitude e ângulo

public:
	Vetor();
	Vetor(double n1, double n2, Coord tipo = RET);

	double Magnitude() { return mag;  }
	double Angulo() { return ang; }
	void SetCoord(Coord modo) { rep = modo; }

	Vetor operator+(const Vetor& v) const;
	Vetor operator-(const Vetor& v) const;
	Vetor operator-() const;
	Vetor operator*(double n) const;
	friend Vetor operator*(double n, const Vetor& v);
	friend ostream& operator<<(ostream& os, const Vetor& v);
};
