/*
 * MTipoEm.cpp
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#include "MTipoEm.h"

MTipoEm::MTipoEm() {
	// TODO Auto-generated constructor stub
	suel=0;
}
void MTipoEm::SetDescripcion(string d){
	des=d;
}
void MTipoEm::SetSueldo(float s){
	suel=s;
}
string MTipoEm::GetDescripcion(){
	return des;
}
float MTipoEm::GetSueldo(){
	return suel;
}
