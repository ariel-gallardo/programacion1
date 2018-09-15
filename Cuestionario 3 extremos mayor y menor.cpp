#include <program1.h>
principal
	
	real a,b,c;
limpiar;
	leerM( a, "Valor 1: " );
	leerM( b, "Valor 2: " );
	leerM( c, "Valor 3: " );
si( b <= a Y a >= c ) entonces
	mostrar << a << ", ";
	si( b >= c ) entonces
		mostrar << c;
	sino
		mostrar << b;
	finSi
sinoSi( b <= c ) entonces
	mostrar << c << ", ";
	si( a <= b ) entonces
		mostrar << a;
	sino
		mostrar << b;
	finSi
sino
	mostrar << b << ", ";
	si( c >= a ) entonces
		mostrar << a;
	sino
		mostrar << c;
	finSi
finSi
mostrar << salto;
pausa;

finPrincipal
