#ifndef COLISIONADOR2D_H
#define COLISIONADOR2D_H

// El siguiente bloque ifdef muestra la forma estándar de crear macros que facilitan 
// la exportación de archivos DLL. Todos los archivos de este archivo DLL se compilan con el símbolo COLISIONADOR2D_EXPORTS
// definido en la línea de comandos. Este símbolo no se debe definir en ningún proyecto
// que utilice este archivo DLL. De este modo, otros proyectos cuyos archivos de código fuente incluyan el archivo 
// interpretan que las funciones COLISIONADOR2D_API se importan de un archivo DLL, mientras que este archivo DLL interpreta los símbolos
// definidos en esta macro como si fueran exportados.
#ifdef COLISIONADOR2D_EXPORTS
#define COLISIONADOR2D_API __declspec(dllexport)
#else
#define COLISIONADOR2D_API __declspec(dllimport)
#endif

#include <iostream>
//#pragma warning( disable: 4251 )

//extern COLISIONADOR2D_API int nColisionador2D;

//COLISIONADOR2D_API int fnColisionador2D(void);

////////////////////////////////
////////////////////////////////

namespace Colisionador2D{


	struct COLISIONADOR2D_API Circ{
		int x;
		int y;
		unsigned int r;
	};

	///////////////////

	struct COLISIONADOR2D_API RectCirc{
		//std::vector<Circ> vectorSup, vectorIzq, vectorInf, vectorDer;

		Circ* vectorSup, vectorIzq, vectorInf, vectorDer;
		unsigned int lenHorizontal, lenVertical;

		/*Circ VecSup(unsigned int i);
		Circ VecIzq(unsigned int i);
		Circ VecInf(unsigned int i);
		Circ VecDer(unsigned int i);
		size_t LenVecSup();
		size_t LenVecIzq();
		size_t LenVecInf();
		size_t LenVecDer();*/
	};

	//////////////////

	class COLISIONADOR2D_API Rect{

		int x;
		int y;
		unsigned int w;
		unsigned int h;

	public:
		Rect(int x, int y, unsigned int w, unsigned int h);
		RectCirc* Circularizar(unsigned int divisorHorizontal, unsigned int divisorVertical);
	};

	//////////////////

	class COLISIONADOR2D_API Colisionador{
	public:
		void foo();
	};

}

#endif //COLISIONADOR2D_H