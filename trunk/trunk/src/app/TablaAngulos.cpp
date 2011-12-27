#include "TablaAngulos.h"

/** LEER antes de modificar algo: **/
/* 
- Si se quieren agregar ángulos:
* Se utilizan ángulos en grados.
* Sólo se deben agregar ángulos que estén en el 1er cuadrante.
* Por cada ángulo que se agregue hay que agregar también su par de simetría
respecto de la recta de 45º (por ejemplo, si se agrega 30º, también hay que
agregar 60º).
* Lo mismo se aplica para eliminar ángulos de las tablas. Además, no se deben
eliminar los valores de 0º y 90º.
* Todos los ángulos deben estar en las 3 tablas ordenados de menor a mayor.
* Es conveniente (pero no ne	cesario) que todos los ángulos sean equidistantes.
* No olvidarse de modificar el valor de CANT_ANGULOS.

- Otras cosas:
* Por el momento sólo se aceptan ángulos en el intervalo 0º <= x <= 360º.
* Ante un error, los métodos devuelven -2 (se usa este valor porque nunca 
podría ser devuelto por las funciones seno o coseno).
*/

const float TablaAngulos::tablaAngulos[CANT_ANGULOS][2] = {
	{	0	,	0	}	,
	{	1	,	2	}	,
	{	2	,	4	}	,
	{	3	,	6	}	,
	{	4	,	8	}	,
	{	5	,	10	}	,
	{	6	,	12	}	,
	{	7	,	14	}	,
	{	8	,	16	}	,
	{	9	,	18	}	,
	{	10	,	20	}	,
	{	11	,	22	}	,
	{	12	,	24	}	,
	{	13	,	26	}	,
	{	14	,	28	}	,
	{	15	,	30	}	,
	{	16	,	32	}	,
	{	17	,	34	}	,
	{	18	,	36	}	,
	{	19	,	38	}	,
	{	20	,	40	}	,
	{	21	,	42	}	,
	{	22	,	44	}	,
	{	23	,	46	}	,
	{	24	,	48	}	,
	{	25	,	50	}	,
	{	26	,	52	}	,
	{	27	,	54	}	,
	{	28	,	56	}	,
	{	29	,	58	}	,
	{	30	,	60	}	,
	{	31	,	62	}	,
	{	32	,	64	}	,
	{	33	,	66	}	,
	{	34	,	68	}	,
	{	35	,	70	}	,
	{	36	,	72	}	,
	{	37	,	74	}	,
	{	38	,	76	}	,
	{	39	,	78	}	,
	{	40	,	80	}	,
	{	41	,	82	}	,
	{	42	,	84	}	,
	{	43	,	86	}	,
	{	44	,	88	}	,
	{	45	,	90	}	
};

const float TablaAngulos::tablaSen[CANT_ANGULOS][2] = {
	{	0	,	0	}	,
	{	2	,	0.03489950f	}	,
	{	4	,	0.06975647f	}	,
	{	6	,	0.10452846f	}	,
	{	8	,	0.13917310f	}	,
	{	10	,	0.17364818f	}	,
	{	12	,	0.20791169f	}	,
	{	14	,	0.24192190f	}	,
	{	16	,	0.27563736f	}	,
	{	18	,	0.30901699f	}	,
	{	20	,	0.34202014f	}	,
	{	22	,	0.37460659f	}	,
	{	24	,	0.40673664f	}	,
	{	26	,	0.43837115f	}	,
	{	28	,	0.46947156f	}	,
	{	30	,	0.50000000f	}	,
	{	32	,	0.52991926f	}	,
	{	34	,	0.55919290f	}	,
	{	36	,	0.58778525f	}	,
	{	38	,	0.61566148f	}	,
	{	40	,	0.64278761f	}	,
	{	42	,	0.66913061f	}	,
	{	44	,	0.69465837f	}	,
	{	46	,	0.71933980f	}	,
	{	48	,	0.74314483f	}	,
	{	50	,	0.76604444f	}	,
	{	52	,	0.78801075f	}	,
	{	54	,	0.80901699f	}	,
	{	56	,	0.82903757f	}	,
	{	58	,	0.84804810f	}	,
	{	60	,	0.86602540f	}	,
	{	62	,	0.88294759f	}	,
	{	64	,	0.89879405f	}	,
	{	66	,	0.91354546f	}	,
	{	68	,	0.92718385f	}	,
	{	70	,	0.93969262f	}	,
	{	72	,	0.95105652f	}	,
	{	74	,	0.96126170f	}	,
	{	76	,	0.97029573f	}	,
	{	78	,	0.97814760f	}	,
	{	80	,	0.98480775f	}	,
	{	82	,	0.99026807f	}	,
	{	84	,	0.99452190f	}	,
	{	86	,	0.99756405f	}	,
	{	88	,	0.99939083f	}	,
	{	90	,	1	}
};

const float TablaAngulos::tablaCos[CANT_ANGULOS][2] = {
	{	0	,	1	}	,
	{	2	,	0.99939083f	}	,
	{	4	,	0.99756405f	}	,
	{	6	,	0.99452190f	}	,
	{	8	,	0.99026807f	}	,
	{	10	,	0.98480775f	}	,
	{	12	,	0.97814760f	}	,
	{	14	,	0.97029573f	}	,
	{	16	,	0.96126170f	}	,
	{	18	,	0.95105652f	}	,
	{	20	,	0.93969262f	}	,
	{	22	,	0.92718385f	}	,
	{	24	,	0.91354546f	}	,
	{	26	,	0.89879405f	}	,
	{	28	,	0.88294759f	}	,
	{	30	,	0.86602540f	}	,
	{	32	,	0.84804810f	}	,
	{	34	,	0.82903757f	}	,
	{	36	,	0.80901699f	}	,
	{	38	,	0.78801075f	}	,
	{	40	,	0.76604444f	}	,
	{	42	,	0.74314483f	}	,
	{	44	,	0.71933980f	}	,
	{	46	,	0.69465837f	}	,
	{	48	,	0.66913061f	}	,
	{	50	,	0.64278761f	}	,
	{	52	,	0.61566148f	}	,
	{	54	,	0.58778525f	}	,
	{	56	,	0.55919290f	}	,
	{	58	,	0.52991926f	}	,
	{	60	,	0.50000000f	}	,
	{	62	,	0.46947156f	}	,
	{	64	,	0.43837115f	}	,
	{	66	,	0.40673664f	}	,
	{	68	,	0.37460659f	}	,
	{	70	,	0.34202014f	}	,
	{	72	,	0.30901699f	}	,
	{	74	,	0.27563736f	}	,
	{	76	,	0.24192190f	}	,
	{	78	,	0.20791169f	}	,
	{	80	,	0.17364818f	}	,
	{	82	,	0.13917310f	}	,
	{	84	,	0.10452846f	}	,
	{	86	,	0.06975647f	}	,
	{	88	,	0.03489950f	}	,
	{	90	,	0	}
};


float TablaAngulos::getAnguloDiscretizado(float angulo){

	if( (angulo < 0) || (angulo > 360) ){
		Log::Escribir("TablaAngulos: getAnguloDiscretizado: error. Sólo se permiten angulos en el intervalo 0 <= x <= 360.");
		return -2;
	}

	if(angulo == 360) angulo = 0;

	float desfasaje = 0;
	if(angulo > 90)
		desfasaje += 90;
	if(angulo > 180)
		desfasaje += 90;
	if(angulo > 270)
		desfasaje += 90;

	float anguloTentativo = angulo;
	float diferenciaMenor = abs(angulo - (tablaAngulos[0][1] + desfasaje));
	for(int i = 0; i < CANT_ANGULOS; i++){
		if(abs(angulo - (tablaAngulos[i][1] + desfasaje)) < diferenciaMenor){
			diferenciaMenor = abs(angulo - (tablaAngulos[i][1] + desfasaje));
			anguloTentativo = tablaAngulos[i][1] + desfasaje;
		}
	}
	return anguloTentativo;
}

int TablaAngulos::getPosicionEnTabla(float angulo){
	
	float anguloDiscreto = getAnguloDiscretizado(angulo);
	float desfasaje = getDesfasaje(anguloDiscreto);
	float anguloPuro = anguloDiscreto - desfasaje;

	for(int i = 0; i < CANT_ANGULOS; i++)
		if(anguloPuro == tablaAngulos[i][1])
			return i;

	Log::Escribir("TablaAngulos: no se pudo obtener la posición del ángulo " + Convert(anguloDiscreto) + " en la tabla.");
	return -2; //en caso de error
}

float TablaAngulos::getDesfasaje(float angulo){

	float anguloDiscreto = getAnguloDiscretizado(angulo);
	float desfasaje = 0;

	if(anguloDiscreto > 270)
		desfasaje = 270;
	else if(anguloDiscreto > 180)
		desfasaje = 180;
	else if(anguloDiscreto > 90)
		desfasaje = 90;

	return desfasaje;
}

float TablaAngulos::SenoDiscreto(float angulo){
	
	float anguloDiscreto = getAnguloDiscretizado(angulo);

	//obtengo el angulo "puro" (el que está en tabla) y su desfasaje
	float desfasaje = getDesfasaje(anguloDiscreto);
	float anguloPuro = anguloDiscreto - desfasaje;

	int posEnTabla;
	if(desfasaje == 0){
		posEnTabla = getPosicionEnTabla(anguloPuro);
		return tablaSen[posEnTabla][1];
	}
	if(desfasaje == 90){
		posEnTabla = getPosicionEnTabla(desfasaje + 90 - anguloDiscreto);
		return tablaSen[posEnTabla][1];
	}
	if(desfasaje == 180){
		posEnTabla = getPosicionEnTabla(anguloPuro);
		return -(tablaSen[posEnTabla][1]);
	}
	if (desfasaje == 270){
		posEnTabla = getPosicionEnTabla(desfasaje + 90 - anguloDiscreto);
		return -(tablaSen[posEnTabla][1]);
	}

	Log::Escribir("TablaAngulos: error al calcular seno.");
	return -2; //en caso de error
}

float TablaAngulos::CosenoDiscreto(float angulo){
	
	float anguloDiscreto = getAnguloDiscretizado(angulo);

	//obtengo el angulo "puro" (el que está en tabla) y su desfasaje
	float desfasaje = getDesfasaje(anguloDiscreto);
	float anguloPuro = anguloDiscreto - desfasaje;

	int posEnTabla;
	if(desfasaje == 0){
		posEnTabla = getPosicionEnTabla(anguloPuro);
		return tablaCos[posEnTabla][1];
	}
	if(desfasaje == 90){
		posEnTabla = getPosicionEnTabla(2*desfasaje - anguloDiscreto);
		return -(tablaCos[posEnTabla][1]);
	}
	if(desfasaje == 180){
		posEnTabla = getPosicionEnTabla(anguloPuro);
		return -(tablaCos[posEnTabla][1]);
	}
	if (desfasaje == 270){
		posEnTabla = getPosicionEnTabla(desfasaje + 90 - anguloDiscreto);
		return tablaCos[posEnTabla][1];
	}

	Log::Escribir("TablaAngulos: error al calcular coseno.");
	return -2; //en caso de error
}

float TablaAngulos::getAnguloSiguiente(float angulo){

	float anguloDiscreto = getAnguloDiscretizado(angulo);
	if(anguloDiscreto == -2){
		Log::Escribir("getAnguloSiguiente: error al discretizar el ángulo");
		return -2;
	}

	//obtengo el angulo "puro" (el que está en tabla) y su desfasaje
	float desfasaje = getDesfasaje(anguloDiscreto);
	float anguloPuro = anguloDiscreto - desfasaje;

	int posEnTabla = getPosicionEnTabla(anguloPuro);
	if(posEnTabla == -2){
		Log::Escribir("getAnguloSiguiente: error al obtener posición en tabla");
		return -2;
	}

	if( (posEnTabla == CANT_ANGULOS - 2) && (desfasaje == 270) ) return 0;
	else if(posEnTabla == CANT_ANGULOS - 1) return tablaAngulos[1][1] + desfasaje + 90;
	else return tablaAngulos[posEnTabla + 1][1] + desfasaje;

	Log::Escribir("TablaAngulo: Error en cálculo de ángulo siguiente.");
	return -2;
}

float TablaAngulos::getAnguloAnterior(float angulo){

	float anguloDiscreto = getAnguloDiscretizado(angulo);
	if(anguloDiscreto == -2){
		Log::Escribir("getAnguloAnterior: error al discretizar el ángulo");
		return -2;
	}

	//obtengo el angulo "puro" (el que está en tabla) y su desfasaje
	float desfasaje = getDesfasaje(anguloDiscreto);
	float anguloPuro = anguloDiscreto - desfasaje;

	int posEnTabla = getPosicionEnTabla(anguloPuro);
	if(posEnTabla == -2) return -2;

	if(posEnTabla == 0) return tablaAngulos[CANT_ANGULOS - 2][1] + 270;
	else if(posEnTabla == CANT_ANGULOS - 1) return tablaAngulos[CANT_ANGULOS - 2][1] + desfasaje;
	else return tablaAngulos[posEnTabla - 1][1] + desfasaje;

	Log::Escribir("TablaAngulo: Error en cálculo de ángulo anterior.");
	return -2;
}

float TablaAngulos::getAngulo(int posEnTabla)
{
	return tablaAngulos[posEnTabla][1];
}