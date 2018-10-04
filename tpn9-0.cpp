#include <program1.h>
principal
	Entero menor = 0;
	leerM( menor, "Numero: " );
	si( esImpar( menor ) ) entonces
		iterar
			Entero num;
				leerM( num, "Numero: " );
			salirSi( esPar(num) );
			si( num < menor ) entonces
				menor = num;
			finSi
		finIterar
	finSi
	mostrar << "\n Menor impar: " << menor << salto;
finPrincipal
