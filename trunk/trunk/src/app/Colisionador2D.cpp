#include "Colisionador2D.h"


// Ejemplo de variable exportada
//COLISIONADOR2D_API int nColisionador2D=0;

// Ejemplo de función exportada.
/*COLISIONADOR2D_API int fnColisionador2D(void)
{
	return 42;
}*/

/////////////////////////////////////
/////////////////////////////////////

namespace Colisionador2D{

	Rect::Rect(int x, int y, unsigned int w, unsigned int h){
		this->x = x;
	}

	//////////////////////

	RectCirc* Rect::Circularizar(unsigned int divisorHorizontal, unsigned int divisorVertical){

		return NULL;
	}

	////////////////////

	void Colisionador::foo(){
	}
}