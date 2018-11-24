#include "puntero.h"

puntero::puntero( Entero x1, Entero y1,
				  Entero x2, Entero y2,
				  Entero x3, Entero y3,
				  Entero x4, Entero y4 )
{
	   Punto[ARRIBA][0] = x1;    Punto[ARRIBA][1] = y1;
		Punto[ABAJO][0] = x2;     Punto[ABAJO][1] = y2;
	Punto[IZQUIERDA][0] = x3; Punto[IZQUIERDA][1] = y3;
	  Punto[DERECHA][0] = x4;   Punto[DERECHA][1] = y4;	
}

Procedimiento puntero::derecha()
{
	   Punto[ARRIBA][0]++;
		Punto[ABAJO][0]++;
	Punto[IZQUIERDA][0]++;
	  Punto[DERECHA][0]++;
}
Procedimiento puntero::reiniciarX()
{
	   Punto[ARRIBA][0] = 0;
		Punto[ABAJO][0] = 0;
	Punto[IZQUIERDA][0] = -1;
	  Punto[DERECHA][0] = 1;
}

Procedimiento puntero::bajar()
{
	   Punto[ARRIBA][1]++;
		Punto[ABAJO][1]++;
	Punto[IZQUIERDA][1]++;
	  Punto[DERECHA][1]++;
}

Procedimiento puntero::Filtrar( vectorDin( vectorDin(Real) ) porRef Matriz,
							    Entero Punto[4][2], Logico uPunto[4],
								Entero porRef Contador, Entero porRef y )
{
	variarMas1( y, 0, 3 )
		si(   Punto[y][1] >= 0 Y Punto[y][1] < (Entero)tamanio(Matriz)
			Y Punto[y][0] >= 0 Y Punto[y][0] < (Entero)tamanio(Matriz)  ) entonces
			uPunto[y] = VERDADERO;
			Contador++;
		sino
			uPunto[y] = FALSO;
		finSi
	finVariar
}

Real puntero::buscarPosDesvEstMin( vectorDin( vectorDin(Real) ) porRef Matriz,
								   Logico uPunto[4], Entero posDesvMin[2],
								   Entero porRef Contador,
								   Entero porRef x, Entero porRef y )
{
	Real DesvMin = 0.0;
	Logico Primero = VERDADERO;
	
	si( Contador > 0 ) entonces
		x = 0; y = 0;
		paraCada( nFil, Matriz )
			paraCada( nCol, nFil )
				Filtrar( Matriz, Punto, uPunto, Contador, y );
				si( Primero ) entonces
					Real Media = Promedio( Matriz, Punto, uPunto, Contador, y );
					DesvMin = DesvEst( Matriz, Punto, uPunto,
									   Media, Contador, y );
					Primero = FALSO;
					posDesvMin[0] = x;
					posDesvMin[1] = y;
				sino
					Real Media = Promedio( Matriz, Punto, uPunto, Contador, y );
					Real tDesvMin = DesvEst( Matriz, Punto, uPunto,
											 Media, Contador, y );
					si( tDesvMin < DesvMin ) entonces
						DesvMin = tDesvMin;
						posDesvMin[0] = x;
						posDesvMin[1] = y;
					finSi
				finSi
				x++;
			derecha();
			finParaCada
		y++;
		bajar();
		reiniciarX();
		finParaCada
	finSi
	mostrar << "Fila: " << posDesvMin[1] 
			<< "\nColumna: " << posDesvMin[0]
			<< salto;
	retorna( DesvMin );
}
