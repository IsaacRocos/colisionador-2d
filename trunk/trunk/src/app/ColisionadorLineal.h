#pragma once
#include "Colisionador.h"

class ColisionadorLineal: public Colisionador{
private:
	//guarda las coordenadas de los c�rculos con el objeto a 0�. Al rotar, las nuevas posiciones
	//siempre se calculan a partir de la matriz base, para no propagar error
	vector< SDL_Rect > matrizBase;

	//se guarda esta informaci�n para volver al estado anterior sin
	//tener que volver a calcularla
	vector< SDL_Rect > matrizBaseAnterior;

	void GuardarEstadoActual();

public:
	ColisionadorLineal(SDL_Rect objeto, SDL_Rect centroDeRotacion, bool niveles[]);
	void CargarEstadoAnterior();
	void Desplazar(int offsetX, int offsetY);
	void Rotar(float angulo);
};