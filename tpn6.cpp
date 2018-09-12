#include <program1.h>
Funcion Entero x10( Entero porRef );

principal
	Entero Numero = 0;
	leerM( Numero, "Numero: " );
	segun( x10( Numero ) )
		caso 	  1: mostrar << "Tiene 1 cifra."  << salto;
		otroCaso  2: mostrar << "Tiene 2 cifras." << salto;
		otroCaso  3: mostrar << "Tiene 3 cifras." << salto;
		casoAsumido: mostrar << "Tiene 4 cifras o mas." << salto;
	finSegun
finPrincipal

Funcion Entero x10( Entero porRef Numero )
{
	Entero x = 0;
	
	iterar
		si( Numero < 0 ) entonces Numero = Numero*-1; finSi
		salirSi( Numero < XalaY(10,x) );
		x++;
	finIterar
		
	regresa( x );
}


