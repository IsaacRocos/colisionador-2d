#include "ColisionadorCircular.h"

ColisionadorCircular::ColisionadorCircular(SDL_Rect objeto, SDL_Rect centroDeRotacion, bool niveles[]): Colisionador(niveles){

	this->centroDeRotacion.x = centroDeRotacion.x;
	this->centroDeRotacion.y = centroDeRotacion.y;

	this->radio = (objeto.h + objeto.w) / 4;

	this->matrizCirculos.reserve(1);
	SDL_Rect circulo;
	circulo.x = centroDeRotacion.x;
	circulo.y = centroDeRotacion.y;
	circulo.h = radio;
	circulo.w = radio;
	this->matrizCirculos.push_back(circulo);

	GuardarEstadoActual();
}

//////////////////////

void ColisionadorCircular::GuardarEstadoActual(){

	matrizCirculosAnterior.clear();
	matrizCirculosAnterior = matrizCirculos;
	centroDeRotacionAnterior = centroDeRotacion;
}

//////////////////////

void ColisionadorCircular::Desplazar(int offsetX, int offsetY){

	//antes de moverse guarda el estado actual
	GuardarEstadoActual();

	//aplica el offset al centro de rotación
	centroDeRotacion.x += offsetX;
	centroDeRotacion.y += offsetY;

	//aplica el offset al centro del círculo
	for(unsigned int i = 0; i < matrizCirculos.size(); i++){
		matrizCirculos[i].x += offsetX;
		matrizCirculos[i].y += offsetY;
	}
}

///////////////////////

void ColisionadorCircular::CargarEstadoAnterior(){

	centroDeRotacion = centroDeRotacionAnterior;

	matrizCirculos = matrizCirculosAnterior;
}