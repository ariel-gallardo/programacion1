#include <program1.h>
//Obtener MCD entre dos numeros.

procedimiento MCD( Entero A, Entero B );

principal
	iterar
	Entero A, B;
		leerM( A, "Numero A: " );
		leerM( B, "Numero B: " );
		MCD( A, B );
	finIterar
finPrincipal
			
procedimiento MCD( Entero A, Entero B )
{	
		si( A % B ES 0 ) entonces
			mostrar << "M.C.D : " << B << salto;
		sinoSi( A % B > 0 ) entonces
			MCD( B, (Entero)(A%B) );											// Tuve problemas se cerraba el programa asi que tuve que castear a entero al usar %.
		finSi
		
}
