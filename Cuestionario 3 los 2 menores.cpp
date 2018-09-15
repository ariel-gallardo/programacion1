#include <program1.h>
principal
	
	real a,b,c;
limpiar
	leerM(a,"Valor 1: ");
	leerM(b,"Valor 2: ");
	leerM(c,"Valor 3: ");
si( b >= a Y c >= a ) entonces
	mostrar << a << ", ";
	si( b <= c ) entonces
		mostrar << b;
	sino
		mostrar << c;
	finSi
sinoSi( c >= b ) entonces
	mostrar << b << ", ";
	si( a >= c ) entonces
		mostrar << c;
	sino
		mostrar << a;
	finSi
sino
	mostrar << c << ", ";
	si( b >= a ) entonces
		mostrar << a;
	sino
		mostrar << b;
	finSi
finSi
mostrar << salto;
pausa;
	
finPrincipal
