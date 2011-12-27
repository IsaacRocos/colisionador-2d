#pragma once
#include "ColisionadorLineal.h"

class ColisionadorCircular: public Colisionador{
private:
	void GuardarEstadoActual();

public:
	ColisionadorCircular(SDL_Rect objeto, SDL_Rect centroDeRotacion, bool niveles[]);
	void Desplazar(int offsetX, int offsetY);
	void CargarEstadoAnterior();
};