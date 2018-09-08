#include <program1.h>
principal
	 Entero a = 0, b = 0, c = 0, d = 0;
		mostrar << "Resolver: a - b * c^d >= " <<
							 "a * b^(b*c - a/d) && " <<
							 "b^2 -4*a*c >= d" << salto;
			leerM( a," a = " );
			leerM( b," b = " );
			leerM( c," c = " );
			leerM( d," d = " );
				 Entero tR1 = a - b * ( Entero)XalaY( c,d ),
					   tR2 = a * ( Entero)XalaY( b, b*c - a/d ),
					   tR3 = ( Entero)XalaY( b, 2 ) - 4 * a * c;
					limpiar;
					mostrar << a << " - " << b << " * " << c << '^' << d
							<< " >= "
							<< a << " * "
							<< b << '^' << c << " - " << a << '/' << d
							<< " Y "
							<< b << '^' << 2
							<< " - " << 4 << " * " << a << " * " << c << " >= "
							<< d << '\n' << salto;
				mostrar << tR1 << " >= " 
						<< tR2 << " Y "
						<< tR3 << " >= " << d << '\n' << salto;
			
				Logico tL1 = FALSO, tL2 = FALSO;
			fSi( tR1 >= tR2, tL1 = VERDADERO, tL1 = FALSO );
			fSi( tR3 >=   d, tL2 = VERDADERO, tL2 = FALSO );
		mostrar << fSi( tL1 ES  VERDADERO, "VERDADERO", "FALSO" ) << " Y "
				<< fSi( tL2 ES  VERDADERO, "VERDADERO", "FALSO" ) << '\n' << salto;
		mostrar << fSi( tL1 Y tL2, "VERDADERO", "FALSO" ) << '\n' << salto;
		pausa;
finPrincipal
