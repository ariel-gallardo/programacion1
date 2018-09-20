#ifndef FECHA_H
#define FECHA_H
#include <program1.h>
Estructura Fecha
{
	privado:
		Entero Day = 0, Month = 0, Year = 0;
		Funcion Logico Condicion();

		
	publico:
			Fecha();
			Fecha( Entero Day, Entero Month, Entero Year );
	Funcion Logico esBisiesto();
	Funcion Logico esBisiesto( Entero Year );
	
	Funcion Entero maxDM();
	Funcion Entero maxDM( Entero porRef );
	
	Funcion Entero verD();
	Funcion Entero verM();
	Funcion Entero verA();
	
	Funcion Cadena verFecha();
	
	Procedimiento Comparar( vectorDin( Fecha ) porRef, Entero deRef vE );
	Funcion Entero Contar( Entero A, Entero B, vectorDin( Fecha ) porRef );
	
};
#endif
