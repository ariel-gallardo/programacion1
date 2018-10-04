#include <program1.h>
principal
entero contador=0;
mostrar<<"Escriba una palabra: \n"<<salto;
	iterar
	caracter letra = ' ';
		leeTecla( letra );
	salirSi( letra ES '\n' );
		si(letra ES 's')entonces
			contador++;
		finSi
	finIterar;
mostrar<<"\n\n****************************\ncantidad de letras 's': "<<contador<<"\n****************************"<<salto;
pausa;
finPrincipal
