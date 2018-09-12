/**
*	Leer 2 valores y:
*	Si se puede, dividir el primero por el segundo.
*	Dividir el mayor de los dos por el menor.
**/

#include <program1.h>
principal
	Entero A = 0.0, B = 0.0;
		leerM(A,"1er Numero : ");
		leerM(B,"2do Numero : ");
	limpiar;
	mostrar << fSi(A%B ES 0, "Es divisible", "No es divisible" ) << salto;
	mostrar << fSi(A>B, (Real)A/B, (Real)B/A ) << salto;
finPrincipal
