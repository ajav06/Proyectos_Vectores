/*
 * MEmpleado.cpp
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#include "MEmpleado.h"

MEmpleado::MEmpleado() {
	suel=0;
	est='D';
}
void MEmpleado::ActualizarEstatus(string o){
	if(est=='O')
		ob=o;
	else
		ob="NINGUNA";
}
char MEmpleado::GetEstatus(){
	return est;
}
void MEmpleado::SetSueldo(float s){
	suel=s;
}
float MEmpleado::GetSueldo(){
	return suel;
}
void MEmpleado::SetEstatus(char et){
	est=et;
}
string MEmpleado::ObraTrabajada(){
	return ob;
}
