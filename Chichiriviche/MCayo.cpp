/*
 * MCayo.cpp
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#include "MCayo.h"

MCayo::MCayo() {
	tar=0;
	acum=0;
}
void MCayo::LimpiarAC(){
	acum=0;
}
void MCayo::SetNombreCayo(string nc){
	nomC=nc;
}
void MCayo::SetTarifa(float ta){
	tar=ta;
}
string MCayo::GetNombreCayo(){
	return nomC;
}
float MCayo::GetTarifa(){
	return tar;
}
void MCayo::Actualizar(float mon){
	acum+=mon;
}
float MCayo::GetAcumular(){
	return acum;
}
