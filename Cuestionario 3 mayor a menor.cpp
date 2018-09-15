#include <program1.h>
// Enunciado: ¿?
principal
	real a,b,c;
limpiar;
	leerM( a, "Valor 1: ");
	leerM( b, "Valor 2: ");
	leerM( c, "Valor 3: ");
si( a >= b Y c <= a ) entonces
	mostrar << a << ", ";
	si( b > c ) entonces
		mostrar << b << ", " << c;
	sino
		mostrar << c << ", " << b;
	finSi																		// Muestra tres valores ordenados de mayor a menor
sinoSi( b > c ) entonces														// a < B | C
	mostrar << b << ", ";
	si( a < c ) entonces
		mostrar << c << ", " << a;
	sino
		mostrar << a << ", " << c;
	finSi
sino
	mostrar << c << ", ";
	si( b >= a ) entonces
		mostrar << b << ", " << a;
	sino
		mostrar << a << ", " << b;
	finSi
finSi
mostrar << salto;
pausa;
finPrincipal
