#include "Matriz.h"
Procedimiento creaMatriz( vectorDin( vectorDin(Real) ) porRef Matriz )
{
	Entero tam;
	iterar
	salirSi( tam > 0 Y tam < 23 Y esImpar(tam) );
		limpiar;
		leer(tam);
	finIterar
		Entero it = 0;
	variar( it, 0, tam-1, 1 )
		vectorDin(Real) temp(tam,0.0);
		agregaEleVDin( Matriz, temp );
	finVariar
	observaMatriz( Matriz );
}

Procedimiento observaMatriz( vectorDin( vectorDin(Real) ) porRef Matriz )
{
	mostrar << salto;
	paraCada( nFil, Matriz )
		paraCada( nCol, nFil )
			mostrar << nCol << " " << flush;
		finParaCada
		mostrar << salto;
	finParaCada
	mostrar << salto;
}

Procedimiento rellenaMatriz( vectorDin( vectorDin(Real) ) porRef Matriz )
{
	paraCada( nFil, Matriz )
		Entero Contador = 0;
		paraCada( nCol, nFil )
			reintentar:
				Real nuevoV;
				leer( nuevoV );
				si( nuevoV >= -102 Y nuevoV <= 102 ) entonces
					borra1EleVDin( nFil, tamanio(nFil)-1 );
					intercalaEleVDin( nFil, nuevoV, Contador );
				sino
					goto reintentar;
				finSi
			Contador++;
		finParaCada
	finParaCada
	observaMatriz( Matriz );
}
