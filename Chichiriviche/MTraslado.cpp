/*
 * MTraslado.cpp
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#include "MTraslado.h"

MTraslado::MTraslado() {
	diaS=0;
	nroC=0;
}
void MTraslado::SetDiaSemana(int ds){
	diaS=ds;
}
void MTraslado::SetNroCayo(int nc){
	nroC=nc;
}
int MTraslado::GetDiaSemana(){
	return diaS;
}
int MTraslado::GetNroCayo(){
	return nroC;
}
