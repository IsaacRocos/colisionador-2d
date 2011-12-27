#pragma once
#include <iostream>
#include <fstream>
#include <string>

#define __NIVELMAX__ 1
/*
 * nivel 0: información de alto nivel (carga de archivos del programa, apertura y cierre de ventanas, 
 * procesamiento de peticiones del usuario, etc.)
 * nivel 1: nivel 0 + reporte de errores
 * 
 */

using namespace std;

class Log{
private:
	static string rutaArchivo;
	static bool inicializado;
	static bool primeraEscritura;

public:
	//recibe la ruta donde se va a crear el archivo de log (y el nombre del archivo).
	static void Inicializar(string rutaArchivo);
	static void Escribir(string mensaje, int nivel=0, string file="", int line=0);
	/* si no se especifica el nivel, se toma el más bajo por defecto,
	 * para asegurar que el mensaje se escriba. Se escriben los mensajes
	 * de nivel menor o igual a __NIVELMAX__

	 * los parametros file y line deben ser las macros __FILE__ y __LINE__.
	 * Si no los ponen, en el archivo de log no se va a escribir el nombre del archivo
	 * ni el nro. de línea en que se invocó al método Escribir.
	 */
};