/*
 * MEmpledoUtis.cpp
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#include "MEmpleadoUti.h"

MEmpleadoUti::MEmpleadoUti() {
	can=0;
	tie=0;
}
void MEmpleadoUti::SetCantidad(int c){
	can=c;
}
void MEmpleadoUti::SetTiempo(int t){
	tie=t;
}
int MEmpleadoUti::GetCantidad(){
	return can;
}
int MEmpleadoUti::GetTiempo(){
	return tie;
}
