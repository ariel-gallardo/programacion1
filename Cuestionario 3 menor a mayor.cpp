#include <program1.h>
// Enunciado: ¿?
principal
	real a,b,c;
limpiar
	leerM( a, "Valor 1: ");
	leerM( b, "Valor 2: ");
	leerM( c, "Valor 3: ");
si( a <= b Y a <= c ) entonces
	mostrar << a << ", ";
	si( b > c ) entonces
		mostrar << c << ", " << b;
	sino
		mostrar << b << ", " << c;
	finSi
sinoSi( b <= c ) entonces
	mostrar << b << ", ";
	si( a >= c ) entonces
		mostrar << c << ", " << a;
	sino
		mostrar << a << ", " << c;
	finSi
sino
	mostrar << c << ", ";
	si( b <= a ) entonces
		mostrar << b << ", " << a;
	sino
		mostrar << a << ", " << b;
	finSi
finSi
mostrar << salto;
pausa;
finPrincipal
