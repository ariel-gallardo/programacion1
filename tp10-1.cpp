#include <program1.h>
//Trabajado en Linux
principal
entero vocalpxc=0;
caracter teclado,teclaAnt=' ';
limpiar;
iterar
	leeTecConEco(teclado);
salirSi(teclado ES '\n');
	si( esVocal(teclado) Y esConso(teclaAnt) ) entonces
		vocalpxc++;
	finSi
teclaAnt = teclado;
finIterar
	mostrar << "cantidad de vocales predecidas por consonantes: "
		    << vocalpxc <<salto;
finPrincipal
	
