#include <UnitTest++.h>
#include "../app/Colisionador2D.h"

int main(int argc, char* argv[]){

	UnitTest::RunAllTests();
	system("PAUSE");;
	return 0;
}

///////////////////

using namespace Colisionador2D;

SUITE(PruebasColisionador){

	TEST(RectDeLadosDivisiblesPorElMismoImparSeCircularizaOk){

		Rect rect(4, 0, 50, 60);
		RectCirc *rc = rect.Circularizar(5, 5);

		//chequeo borde superior e izquierdo, asumo que los otros dos quedan igual
		unsigned int radio = 2;
		CHECK_EQUAL(radio, rc->vectorSup[0].x);
		/*CHECK_EQUAL(radio, rc->VecSup(0).y);
		CHECK_EQUAL(radio, rc->VecIzq(0).x);
		CHECK_EQUAL(radio, rc->VecIzq(0).y);
		unsigned int contador = 2*radio +1 +2;
		for(unsigned int i = 1; i < rc->LenVecSup(); i++){
			CHECK_EQUAL(contador, rc->VecSup(i).x);
			CHECK_EQUAL(contador, rc->VecSup(i).y);

			if(rc->LenVecIzq() > i){
				CHECK_EQUAL(contador, rc->VecIzq(i).x);
				CHECK_EQUAL(contador, rc->VecIzq(i).y);
			}

			contador += 2*radio + 1;
		}*/
	}
}