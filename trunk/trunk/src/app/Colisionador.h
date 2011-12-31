#ifndef COLISIONADOR_H
#define COLISIONADOR_H

#include <vector>

namespace Colisionador2D{

	struct Circ{
		int x;
		int y;
		unsigned int r;
	};

	///////////////////

	struct RectCirc{
		std::vector<Circ> vectorSup, vectorIzq, vectorInf, vectorDer;
	};

	//////////////////

	class Rect{
		int x;
		int y;
		unsigned int w;
		unsigned int h;

	public:
		Rect(int x, int y, unsigned int w, unsigned int h);
		RectCirc* Circularizar(unsigned int divisorHorizontal, unsigned int divisorVertical);
	};

	//////////////////

    class Colisionador{
	public:
		void foo();
    };
}

#endif //COLISIONADOR_H