/**
	Leer 3 valores y:
		Determinar cuál (primero, segundo o tercer valor) es el mayor.
		Mostrarlos elementoados de menor a mayor.
**/
#include <program1.h>
procedimiento intercambiar( Entero porRef, Entero porRef );

principal
	Entero numero[3], i;
	Logico Elegir = VERDADERO;
	
	iterar
		variar( i, 0, 2, 1 )
			si( Elegir ) entonces
				leerM( numero[i], "Valor: " );
			finSi
				si( numero[i-1] > numero[i] Y i > 0 Y NO Elegir ) entonces
					intercambiar( numero[i-1], numero[i] );
					si( i ES 2 ) entonces i = 0; finSi
				finSi
		finVariar
			Elegir = FALSO;
		salirSi( numero[2] > numero[1] Y numero[1] > numero[0] );
	finIterar
		
	mostrar << salto;
	paraCada( num, numero )
		mostrar << "Valor: " << num << salto;
	finParaCada
	
		

finPrincipal
		
procedimiento intercambiar( Entero porRef A, Entero porRef B )
{
	Entero temp = A;
	A = B;
	B = temp;
}
/*
321
3>2
	
231
	
3>1
213
	
2>1
123

2>3
FALSO
*/
