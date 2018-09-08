#include <program1.h>
#define esOAritmetico(x)															( x ES '+' O x ES '-' O x ES '*'  O x ES '/' )
#define esOLogico(x)																( x ES '>' O x ES '<' O x ES '=' O x ES 'Y' O x ES 'Y' )
/*
Generar numeros al azar.
Generar Expresiones.
Generar operaciones logicas.
Almacenar operaciones logicas.
Resolver
*/
constante Cadena operandoL[7] = {" > "," < "," == "," <= "," >= "," Y "," O "};
constante Cadena operandoA[4] = {" + "," * "," - "," / "};

procedimiento crearNum( vectorDin( Entero ) porRef, Entero porRef );
	  funcion Cadena genFormula( vectorDin(Entero) porRef, Entero porRef );
procedimiento clasificar( vectorDin(Entero)   porRef,
						 vectorDin(Caracter) porRef,
						 Cadena porRef );
principal
	vectorDin(Entero) 	  numeros;
	vectorDin( vectorDin(Caracter) ) operandos;
	Entero contador = 0;
		crearNum( numeros, contador );
		Cadena Formula = genFormula( numeros, contador );
		borraVDin( numeros );
		clasificar( numeros, operandos, Formula );
		paraCada( simbolo, operandos )
			mostrar << simbolo << " " << flush;
		finParaCada
	mostrar << '\n' + Formula << salto;
	
finPrincipal

procedimiento crearNum( vectorDin( Entero ) porRef numeros, Entero porRef i )
{		
	variarMas1( i, 1, 10 )
		agregaEleVDin( numeros, (Entero)alAzarEntre( 1, 100 ) );
	finVariar
}

funcion Cadena genFormula( vectorDin(Entero) porRef numeros, Entero porRef i )
{
	Cadena Formula;
	variar( i, 0, 9, 1 )
		stringstream temp;
			temp << numeros[i];
		Formula += temp.str();
		si( tamanio( numeros ) -1 NOES i ) entonces
			si( esImpar(i) ) entonces
				Formula += operandoL[( Entero )alAzarEntre(1,8)];				// > < == <= >= Y O		[1-5]
			sino							
				Formula += operandoA[( Entero )alAzarEntre(1,5)];				// + - * /				[1-4]
			finSi
		finSi
	finVariar
	regresa( Formula );
}

procedimiento clasificar( vectorDin(Entero) 	 porRef   numeros,
						 vectorDin(Caracter) porRef operandos,
						 Cadena porRef Formula )
{
	Entero  i = 0;
	Cadena	 cadTemp;
	
	variar( i, 0, tamanio( Formula ), 1 )
		si( Formula[ i ] ES ' ' ) entonces										//Espacio
			agregaEleVDin( numeros, carEstaEnCad( Formula[ i ], Formula ) );
			cadTemp = "";
		sinoSi( esDigito( Formula[ i ] ) ) entonces								//Es digito																	
			cadTemp += Formula[ i ];
		sinoSi( esOLogico( Formula[i] ) ) entonces								//Es operando lógico
			agregaEleVDin( operandos, Formula[i] );
		sinoSi( esOAritmetico( Formula[i] ) )	entonces						//Es operando aritmetico
				agregaEleVDin( operandos, Formula[i] );
		finSi
	finVariar
}
