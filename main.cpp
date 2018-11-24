#include <program1.h>
#include "puntero.h"
principal
	vectorDin( vectorDin(Real) ) Matriz;
	   creaMatriz( Matriz );
	rellenaMatriz( Matriz );
	
	puntero genius( 0, -1,																											
					0, 1,
				    -1, 0,
				    1, 0 );
	
	Entero posDesvMin[2] = {0,0}, y = 0, x = 0, Contador = 0;
	Logico uPunto[4] = { FALSO, FALSO, FALSO, FALSO };
	
	Real desvMin = genius.buscarPosDesvEstMin( Matriz, uPunto, posDesvMin, Contador, x, y );
	mostrar << "Desviacion Minima: " << desvMin << salto;
finPrincipal

