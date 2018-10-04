#include <program1.h>
principal
	Entero It = 0, sum = 0;
	iterar
	Entero num = 0;
		leerM( num, "Numero: " );
	salirSi( esImpar( num ) );
		sum += num;
		It++;
	finIterar
	mostrar << "\n Promedio par: " << sum/It << salto;
finPrincipal
