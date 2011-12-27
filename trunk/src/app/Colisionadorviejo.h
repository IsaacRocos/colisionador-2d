#pragma once
#include <vector>
#include "SDL.h"
#include "../Log.h"
#include "../TablaAngulos.h"

using namespace std;

//#define MAX_RADIO 5 <-- esto habría que usarlo cuando esta cosa se haga genérica,
//para limitar el tamaño de los circulitos y que las colisiones sean más precisas. Por ahora no va.
#define CANT_NIVELES 3

class Colisionador{
protected:

	typedef struct{
	int x;
	int y;
	}Punto;

	bool niveles[CANT_NIVELES];

	unsigned int radio;
	vector< SDL_Rect > matrizCirculos;
	SDL_Rect centroDeRotacion; //cambia cada vez que se desplaza el objeto.

	//se guarda esta información para volver al estado anterior sin tener que volver a calcularla.
	vector< SDL_Rect > matrizCirculosAnterior;
	SDL_Rect centroDeRotacionAnterior;

	//guarda el estado actual en las variables de estado anterior
	virtual void GuardarEstadoActual()=0;

	bool CirculosColisionan(SDL_Rect circulo1, SDL_Rect circulo2);

public:
	Colisionador(bool niveles[]);
	SDL_Rect getCentro();
	virtual void Desplazar(int offsetX, int offsetY)=0;
	virtual void Rotar(float angulo);
	//mueve el colisionador a su posicion anterior
	virtual void CargarEstadoAnterior()=0;
	bool ColisionaConBordeX(unsigned int bordeX);
	bool ColisionaConBordeY(unsigned int bordeY);
	bool ColisionaCon(Colisionador *otroColisionador);
};