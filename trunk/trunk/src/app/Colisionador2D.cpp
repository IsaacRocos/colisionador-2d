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

	/*Circ RectCirc::VecSup(unsigned int i){
		return this->vectorSup[i];
	}

	///////////////

	Circ RectCirc::VecIzq(unsigned int i){
		return this->vectorIzq[i];
	}

	//////////////

	Circ RectCirc::VecInf(unsigned int i){
		return this->vectorInf[i];
	}

	//////////////

	Circ RectCirc::VecDer(unsigned int i){
		return this->vectorDer[i];
	}

	//////////////

	size_t RectCirc::LenVecSup(){
		return this->vectorSup.size();
	}

	//////////////

	size_t RectCirc::LenVecIzq(){
		return this->vectorIzq.size();
	}

	//////////////

	size_t RectCirc::LenVecInf(){
		return this->vectorInf.size();
	}

	//////////////

	size_t RectCirc::LenVecDer(){
		return this->vectorDer.size();
	}*/

	//////////////
	/////////////

	Rect::Rect(int x, int y, unsigned int w, unsigned int h){
		this->x = x;
	}

	//////////////////////

	RectCirc* Rect::Circularizar(unsigned int divisorHorizontal, unsigned int divisorVertical){

		//determina cantidad, radio y posiciones de los círculos horizontales y los agrega a los vectores 
		unsigned int cantidad = this->w / divisorHorizontal;
		unsigned int radio = (divisorHorizontal - 1) / 2;



		return NULL;
	}

	////////////////////
	////////////////////

	void Colisionador::foo(){
	}
}