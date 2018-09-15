#include <program1.h>
// Enunciado: ¿?
principal
	
	real a,b,c;
limpiar;
	leerM( a, "Valor 1: " );
	leerM( b, "Valor 2: " );
	leerM( c, "Valor 3: " );
/*
	De los 3 valores si los 3 son iguales mostrar 2
		Ej 3 3 3 = 3 3
	sino
	mostrar los dos valores iguales A C y uno distinto B A
		Ej 1 3 1 = 1 3
*/
si( b != a Y c == a ) entonces													
	mostrar << a << ", ";
	si( b != c ) entonces
		mostrar << b;
	sino
		mostrar << c;
	finSi
/*
	Si C es distinto que B mostrar B
	Mayor entre Valor 1 y Valor 3
	Ej 1 2 3 = 2 3 Dos mayores
	Ej 4 2 3 = 2 4 Desordenado
*/
// b == a Y c != a	1 1 2		
sinoSi( c != b ) entonces														
	mostrar << b << ", ";
	si( a >= c ) entonces
		mostrar << a;
	sino
		mostrar << c;
	finSi		
/*
	mostrar C y si A es igual a B mostrar A
		Ej 1 1 3 = 3 1 Menor y Mayor
		Ej 1 2 3 = 3 2 Desordenado
*/
sino
	mostrar << c << ", ";
	si( b == a ) entonces
		mostrar << a;
	sino
		mostrar << b;
	finSi
finSi
mostrar << salto;
pausa;

finPrincipal
