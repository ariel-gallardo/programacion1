#include <program1.h>
Estructura Fecha
{
	privado:
		Entero Day = 0, Month = 0, Year = 0;
		Funcion Logico Condicion();
		
	publico:
		Fecha();
		Fecha(Entero Day, Entero Month, Entero Year );
		Funcion Logico esBisiesto();
		Funcion Cadena maxDM();
};
principal
	mostrar << "1 - Dado un anio y un mes, "
			<< "muestre la fecha del Ultimo di­a de ese mes y ese anio."
			<< salto;
	Fecha DDMMAA_1;
	mostrar << DDMMAA_1.maxDM() << salto;
finPrincipal
	

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

Fecha::Fecha(Entero Day, Entero Month,Entero Year)
:Day(Day), Month(Month), Year(Year)
{
	si( Condicion() ) entonces
		mostrar << "Fecha: "
				<< Day << '/' << Month  << '/' << Year
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

Funcion Logico Fecha::esBisiesto()
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

Funcion Cadena Fecha::maxDM()
{
	Cadena tempCad;
	Entero tempNum = 31;
	si( Condicion() ) entonces
			   tempCad += " / ";
			   tempCad += aCadena(Month); tempCad += " / ";
			   tempCad += aCadena(Year);
			   
		si( Month ES 4 || Month ES 6 || Month ES 9 || Month ES 11 ) entonces
			tempCad.insert(0, aCadena( tempNum-1 ) );
		retorna( tempCad );
		sinoSi( Month ES 2 ) entonces
			si( esBisiesto() ) entonces
				tempCad.insert( 0, aCadena( tempNum-3 ) );
			retorna( tempCad );
			sino
				tempCad.insert( 0, aCadena(tempNum-2 ) );
			retorna( tempCad );
			finSi
		sino
			tempCad.insert( 0, aCadena(tempNum) );
		retorna( tempCad );
		finSi
	finSi
	tempCad.insert( 0, aCadena( tempNum ) );
	retorna( tempCad );
}
/*
28 29 febrero
7 31
4 30
	
*/
