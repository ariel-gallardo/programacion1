#include "fecha.h"
Fecha::Fecha()
{
	leerM(	 Day,  "Dia: ");
	leerM( Month,  "Mes: ");
	leerM(  Year, "Anio: ");
	limpiar;
	si( Condicion() ) entonces
		mostrar << "Fecha: " <<
		Day << '/' << Month  << '/' << Year
		<< " creada con exito." << salto;
	sino
		mostrar << "Fecha: " <<
		Day << '/' << Month << '/' << Year 
		<< " mal formulada."<< salto;
	Day = 0;
	Month = 0;
	Year = 0;
	finSi
}

Fecha::Fecha( Entero Day, Entero Month, Entero Year )
:Day(Day), Month(Month), Year(Year)
{
	si( Condicion() ) entonces
		mostrar << "Fecha: "
		<< Day << '/' << Month  << '/' << Year
		<< " creada con exito." << salto;
	sinoSi( Condicion() ) entonces
		
	sino
		mostrar << "Fecha: " <<
		Day << '/' << Month << '/' << Year 
		<< " mal formulada."<< salto;
	Day = 0;
	Month = 0;
	Year = 0;
	finSi
}

Funcion Logico Fecha::esBisiesto()
{
	retorna( fSi( Year%4 ES 0, VERDADERO, FALSO ) );
}

Funcion Logico Fecha::esBisiesto( Entero Year )
{
	retorna( fSi( Year%4 ES 0, VERDADERO, FALSO ) );
}

Funcion Logico Fecha::Condicion()	
{
	Entero temp = 31;
	si( Month ES 4 || Month ES 6 || Month ES 9 || Month ES 11 ) entonces
		temp-=1;
	retorna( fSi( Day > 0 Y Day <= temp, VERDADERO, FALSO ) );
	sinoSi( Month ES 2 ) entonces
		fSi( esBisiesto(), temp=-3, temp=-2 );
	retorna( fSi( Day > 0 Y Day <= temp, VERDADERO, FALSO ) );
	sinoSi( Month >=1 Y Month <=12 ) entonces
		retorna( fSi( Day > 0 Y Day <= temp, VERDADERO, FALSO ) );
	finSi
		retorna( FALSO );
}

Funcion Entero Fecha::maxDM()
{	
	retorna( maxDM( Month ) );
}

Funcion Entero Fecha::maxDM( Entero porRef Month )
{
	Cadena tempCad;
	Entero tempNum = 31;
	si( Condicion() ) entonces
		si( Month ES 4 || Month ES 6 || Month ES 9 || Month ES 11 ) entonces
			retorna( tempNum-1 );
		finSi
	sinoSi( Month ES 2 ) entonces
		si( esBisiesto() ) entonces
			retorna( tempNum-3 );
		sino
			retorna( tempNum-2 );
		finSi
	sino
		retorna( tempNum );
	finSi
	
	retorna( tempNum );
}

Funcion Entero Fecha::verD() { retorna( Day   ); }
Funcion Entero Fecha::verM() { retorna( Month ); }
Funcion Entero Fecha::verA() { retorna( Year  ); }

Funcion Cadena Fecha::verFecha()
{
	Cadena tempCad;
	tempCad += aCadena( Day	  ); tempCad += " / ";
	tempCad += aCadena( Month ); tempCad += " / ";
	tempCad += aCadena( Year  );
	
	retorna( tempCad );
}

Procedimiento Fecha::Comparar( vectorDin( Fecha ) porRef vF, Entero deRef vE )							
{
	Entero Elegir[2], Num = 0;
		paraCada( fecha, vF )
			mostrar << Num << "° " << fecha.verFecha() << salto;
			Num++;
		finParaCada
		mostrar << salto;
	mientras( Elegir[ vE[0] ] >= 0 Y Elegir[ vE[0] ] <= ( Entero )tamanio( vF ) Y 
			  Elegir[ vE[1] ] >= 0 Y Elegir[ vE[1] ] <= ( Entero )tamanio( vF ) Y 
			  Elegir[ vE[0] ] NOES Elegir[1] )
		leerM( Elegir[ vE[0] ], "Fecha n°1: " );
		leerM( Elegir[ vE[1] ], "Fecha n°2: " );
	finMientras
	mostrar << salto;
}

Funcion Entero Fecha::Contar( Entero A, Entero B,
							  vectorDin( Fecha ) porRef vF )
{
	Entero Dias = 0, tempA = 0, tempMi = 0, tempMf = 0;
	si( vF[ A ].verD() NOES vF[ B ].verD() O 
	    vF[ A ].verM() NOES vF[ B ].verM() O
	    vF[ A ].verA() NOES vF[ B ].verA() ) entonces
			si( vF[ A ].verA() < vF[ B ].verA() O
				vF[ A ].verM() < vF[ B ].verM() O
				vF[ A ].verD() < vF[ B ].verD() ) entonces
				variarMas1( tempA, vF[ A ].verA(), vF[ B ].verA()-1 )
					fSi( tempMi ES vF[ A ].verM() Y tempA ES vF[ A ].verA(),
						 tempMf  = vF[ A ].verM(), tempMf  = 12 );
					variarMas1( tempMi, vF[ A ].verM(), tempMf )
						Dias += maxDM( tempMi );
					finVariar
				finVariar
			Dias -= vF[ A ].verD();
		sino
			Contar( B, A, vF );
		finSi
	finSi
	retorna( Dias );
}
