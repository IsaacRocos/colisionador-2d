#ifndef COLISIONADOR_H
#define COLISIONADOR_H

#include <vector>
#include <windows.h> //VER SI ESTO ES NECESARIO O SE PUEDE SACAR

/*static __declspec(dllexport) double Add(double a, double b);*/
namespace Colisionador2D{

	

	bool WINAPI DllMain (HINSTANCE hInst, DWORD dwd, LPVOID lpv ) {  /* VER SI ESTO ES NECESARIO O SE PUEDE SACAR */
		return true;
	}

	///////////////////

	extern "C" struct __declspec(dllimport) Circ{
		int x;
		int y;
		unsigned int r;
	};

	///////////////////

	extern "C" struct __declspec(dllimport) RectCirc{
		std::vector<Circ> vectorSup, vectorIzq, vectorInf, vectorDer;
	};

	//////////////////

	extern "C" class __declspec(dllimport) Rect{
		int x;
		int y;
		unsigned int w;
		unsigned int h;

	public:
		Rect(int x, int y, unsigned int w, unsigned int h);
		RectCirc* Circularizar(unsigned int divisorHorizontal, unsigned int divisorVertical);
	};

	//////////////////

    extern "C" class __declspec(dllimport) Colisionador{

    };
}

#endif //COLISIONADOR_H