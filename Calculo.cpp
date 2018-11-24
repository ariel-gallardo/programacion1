#include "Calculo.h"
Real Promedio( vectorDin( vectorDin(Real) ) porRef Matriz,
			   Entero Punto[4][2], Logico uPunto[4],
			   Entero porRef Contador, Entero porRef y )
{
	Real Cuenta = 0.0;
	variarMas1( y, 0, 3 )
			si( uPunto[y] ) entonces
				Cuenta += Matriz[ Punto[y][1] ][ Punto[y][0] ];
			finSi
	finVariar
	
	retorna( Cuenta /= (Real)Contador );
}

Real DesvEst( vectorDin( vectorDin(Real) ) porRef Matriz,
			 Entero Punto[4][2], Logico uPunto[4],
			 Real porRef Media,
			 Entero porRef Contador, Entero porRef y )
{
	Real Cuenta = 0.0;
	variarMas1( y, 0, 3 )
		si( uPunto[y] ) entonces
			Cuenta += XalaY( ( Matriz[ Punto[y][0] ][ Punto[y][1] ] - Media ), 2 );
		finSi
	finVariar
			
	retorna( raiz2( Cuenta / (Real)Contador ) );
}
