#pragma once
#include <math.h>
#include "Log.h"
#include <sstream>

#define CANT_ANGULOS 46

class TablaAngulos{
private:
	static const float tablaAngulos[CANT_ANGULOS][2];
	static const float tablaSen[CANT_ANGULOS][2];
	static const float tablaCos[CANT_ANGULOS][2];

public:
	//devuelve el ángulo de la tabla de valor más cercano al ingresado
	static float getAnguloDiscretizado(float angulo);
	static float SenoDiscreto(float angulo);
	static float CosenoDiscreto(float angulo);
	static float getAnguloSiguiente(float angulo);
	static float getAnguloAnterior(float angulo);
	static int getPosicionEnTabla(float angulo);
	static float getAngulo(int posEnTabla);
	static float getDesfasaje(float angulo);

	static string Convert (float number){
		ostringstream buff;
		buff<<number;
		return buff.str();
	}
};