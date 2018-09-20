#include "fecha.h"
principal
	mostrar << "1 - Dado un anio y un mes, "
			<< "Muestre la fecha del Ultimo di­a de ese mes y ese año"
			<< salto;
vectorDin( Fecha ) Calendario;
	agregaEleVDin( Calendario, Fecha() );
	mostrar << salto;
	mostrar << "La fecha " << Calendario[0].verFecha() 
			<< " tiene como maximo "
			<< Calendario[0].maxDM() 
			<< " dias. \n \n"
			<< "La misma fecha un anio anterior. \n "
			<< salto;
		agregaEleVDin( Calendario, Fecha( Calendario[0].verD(),
										  Calendario[0].verM(),
										  Calendario[0].verA()-1 ) );
	mostrar << salto;
	Entero vE[2] = { 0, 0 };													//Primera solucion declarar
	Calendario[0].Comparar( Calendario , vE );
	mostrar << "Entre las fechas hay: "
			<< Calendario[0].Contar( vE[0], vE[1], Calendario )
			<< salto;
	
pausa;
finPrincipal
