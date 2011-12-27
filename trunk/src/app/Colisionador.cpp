#include "Colisionador.h"

Colisionador::Colisionador(bool niveles[]){

	for(unsigned int i = 0; i < CANT_NIVELES; i++)
		this->niveles[i] = niveles[i];
}


SDL_Rect Colisionador::getCentro(){

	return this->centroDeRotacion;
}

bool Colisionador::ColisionaConBordeX(unsigned int bordeX){

	//revisa que esa coordenada en X no esté dentro de
	//ninguno de los círculos. Si eso no se cumple, devuelve true
	for(unsigned int i = 0; i < matrizCirculos.size(); i++)
		if( (bordeX <= matrizCirculos[i].x + radio) && (bordeX >= matrizCirculos[i].x - radio) )
			return true;

	return false;
}

bool Colisionador::ColisionaConBordeY(unsigned int bordeY){

	//revisa que esa coordenada en Y no esté dentro de
	//ninguno de los círculos. Si eso no se cumple, devuelve true
	for(unsigned int i = 0; i < matrizCirculos.size(); i++)
		if( (bordeY >= matrizCirculos[i].y - radio) && (bordeY <= matrizCirculos[i].y + radio) )
			return true;

	return false;
}

bool Colisionador::CirculosColisionan(SDL_Rect circulo1, SDL_Rect circulo2){

	//colisionan si la distancia entre los centros al cuadrado es menor o igual a la suma de los radios al cuadrado
	int distanciaAlCuadrado = (int) ceil( pow((float)circulo2.x - circulo1.x, 2) + pow((float)circulo2.y - circulo1.y, 2) );
	int sumaDeRadiosAlCuadrado = (int) ceil( pow((float)circulo1.h + circulo2.h, 2) );

	return (distanciaAlCuadrado <= sumaDeRadiosAlCuadrado);
}

bool Colisionador::ColisionaCon(Colisionador *otroColisionador){

	//Esto va a funcionar siempre y cuando todos los colisionadores sean un vector de círculos.
	//Si no, hay que cambiarlo.
	for(unsigned int i = 0; i < this->matrizCirculos.size(); i++)
		for(unsigned int j = 0; j < otroColisionador->matrizCirculos.size(); j++)
			for(unsigned int k = 0; k < CANT_NIVELES; k++)
				if( this->niveles[k] && otroColisionador->niveles[k] )
					if( CirculosColisionan(this->matrizCirculos[i], otroColisionador->matrizCirculos[j]) ) return true;

	return false;
}

void Colisionador::Rotar(float angulo){
}