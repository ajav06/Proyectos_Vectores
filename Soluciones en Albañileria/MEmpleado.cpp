/*
 * MEmpleado.cpp
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#include "MEmpleado.h"

MEmpleado::MEmpleado() {
	zon=acu=con=0;
}
void MEmpleado::SetZona(int z){
	zon=z;
}
int MEmpleado::GetZona(){
	return zon;
}
void MEmpleado::ActualizarComision(float mont){
	acu+=mont;
	con++;
}
float MEmpleado::GetAcumular(){
	return acu;
}
int MEmpleado::GetContar(){
	return con;
}
