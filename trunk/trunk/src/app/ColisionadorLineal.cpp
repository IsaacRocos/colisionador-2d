#include "ColisionadorLineal.h"

ColisionadorLineal::ColisionadorLineal(SDL_Rect objeto, SDL_Rect centroDeRotacion, bool niveles[]): Colisionador(niveles) {

	this->centroDeRotacion.x = centroDeRotacion.x;
	this->centroDeRotacion.y = centroDeRotacion.y;

	this->radio = 1;

	SDL_Rect circulo;
	for(int pos = objeto.x + radio; pos < objeto.x + objeto.w; pos += 2*radio){
		circulo.x = pos;
		circulo.y = objeto.y + radio;
		circulo.h = radio;
		circulo.w = radio;
		this->matrizCirculos.push_back(circulo);
	}

	//la matriz base es igual a la matriz de circulos a 0º (que es el ángulo que tiene el objeto inicialmente).
	this->matrizBase = this->matrizCirculos;

	//se inicializa el estado anterior igual al estado inicial
	GuardarEstadoActual();
}

///////////////////////

void ColisionadorLineal::GuardarEstadoActual(){
	
	this->centroDeRotacionAnterior = this->centroDeRotacion;

	this->matrizCirculosAnterior.clear();
	this->matrizCirculosAnterior = this->matrizCirculos;

	this->matrizBaseAnterior = this->matrizBase;
}

//////////////////////

void ColisionadorLineal::Desplazar(int offsetX, int offsetY){

	//antes de moverse guarda el estado actual
	GuardarEstadoActual();

	//aplica el offset al centro de rotación
	centroDeRotacion.x += offsetX;
	centroDeRotacion.y += offsetY;

	//aplica el offset a los centros de los círculos
	//y a la matriz base
	for(unsigned int i = 0; i < matrizCirculos.size(); i++){
		matrizCirculos[i].x += offsetX;
		matrizCirculos[i].y += offsetY;

		matrizBase[i].x += offsetX;
		matrizBase[i].y += offsetY;
	}
}

//////////////////////

void ColisionadorLineal::Rotar(float angulo){

	//antes de moverse guarda el estado actual
	GuardarEstadoActual();

	//centra los circulos en 0,0 para rotarlos
	//(hacer genérico)
	for(unsigned int i = 0; i < matrizBase.size() ; i++){
		matrizBase[i].x -= centroDeRotacion.x;
		matrizBase[i].y -= centroDeRotacion.y;
	}

	//Aplica matriz de rotación a los centros de los círculos
	float angDiscretizado = TablaAngulos::getAnguloDiscretizado(angulo);

	SDL_Rect centroAux;
	for(unsigned int i = 0; i < matrizCirculos.size(); i++){
		centroAux = this->matrizBase[i];
		matrizCirculos[i].x = (Uint16) ceil(centroAux.x * TablaAngulos::CosenoDiscreto(angDiscretizado) + centroAux.y * TablaAngulos::SenoDiscreto(angDiscretizado));
		matrizCirculos[i].y = (Uint16) ceil((- centroAux.x) * TablaAngulos::SenoDiscreto(angDiscretizado) + centroAux.y * TablaAngulos::CosenoDiscreto(angDiscretizado));
	}

	//descentra la matriz de circulos y la base para volverlas a su pos. original
	//(hacer genérico)
	for(unsigned int i = 0; i < matrizCirculos.size(); i++){
		matrizBase[i].x += centroDeRotacion.x;
		matrizBase[i].y += centroDeRotacion.y;

		matrizCirculos[i].x += centroDeRotacion.x;
		matrizCirculos[i].y += centroDeRotacion.y;
	}
}

//////////////////////////

void ColisionadorLineal::CargarEstadoAnterior(){

	centroDeRotacion = centroDeRotacionAnterior;

	matrizCirculos = matrizCirculosAnterior;
	matrizBase = matrizBaseAnterior;
}