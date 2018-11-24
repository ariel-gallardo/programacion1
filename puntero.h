#ifndef PUNTERO_H
#define PUNTERO_H
#include <program1.h>
#include "Matriz.h"
#include "Calculo.h"

#define ARRIBA																	0
#define ABAJO																	1
#define IZQUIERDA																2
#define DERECHA																	3

Estructura puntero
{
	privado:
			Entero Punto[4][2];
			
	publico:
			puntero( Entero x1, Entero y1,										//Punto para no calcular fuera de la matriz.
					 Entero x2, Entero y2,
					 Entero x3, Entero y3,
					 Entero x4, Entero y4 );
	
			Procedimiento derecha();
			Procedimiento reiniciarX();
			Procedimiento bajar();
			Procedimiento Filtrar( vectorDin( vectorDin(Real) ) porRef,
								   Entero Punto[4][2], Logico uPunto[4],
								   Entero porRef , Entero porRef);
			
			Real buscarPosDesvEstMin( vectorDin( vectorDin(Real) ) porRef,
									  Logico uPunto[4], Entero posDesvMin[2],
									  Entero porRef,
									  Entero porRef, Entero porRef );
};
#endif
