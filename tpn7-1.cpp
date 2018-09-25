#include <program1.h>
Logico esBisiesto( Entero porRef );
Entero maxDia( Entero porRef, Entero porRef );

principal
	
	Entero Mes = 0, Anio = 0,
		   Dia = 0,   cM = 0;
	
	iterar
		leerM(  Dia, "Dia: " );
		leerM(  Mes, "Mes: " );
		leerM( Anio, "Año: " );
	salirSi( Mes > 0 Y Mes <= 12 Y Anio > 0 Y Dia < maxDia( Mes, Anio ) );
	finIterar
	
	si( Mes NOES 1 ) entonces
		variarMas1( cM, 1, Mes )
			Dia += maxDia( Mes, Anio );
		finVariar
	finSi
			
	mostrar << "Desde el 31 de diciembre de " << Anio-1 << " han pasado: "
			<< Dia+1 << " dias. " << salto;
	
finPrincipal

Logico esBisiesto( Entero porRef Anio )
{
	retorna( fSi( Anio % 4 ES 0, VERDADERO, FALSO ) );
}

Entero maxDia( Entero porRef Mes, Entero porRef Anio )
{
	Entero Dia = 31;
		si( Mes ES 4 O Mes ES 6 O Mes ES 9 O Mes ES 11 ) entonces
			Dia--;
		sinoSi( Mes ES 2 ) entonces
			fSi( esBisiesto( Anio ), Dia-=2, Dia-=3 );
		finSi
	retorna( Dia );
}
