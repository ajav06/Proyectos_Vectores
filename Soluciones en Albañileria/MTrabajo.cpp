/*
 * MTrabajo.cpp
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#include "MTrabajo.h"

MTrabajo::MTrabajo() {
	codS=0;
	met=0;
}
void MTrabajo::SetCedulaC(string c){
	ced=c;
}
void MTrabajo::SetCodigoS(int s){
	codS=s;
}
void MTrabajo::SetMetrosT(float m){
	met=m;
}
string MTrabajo::GetCedulaC(){
	return ced;
}
int MTrabajo::GetCodigoS(){
	return codS;
}
float MTrabajo::GetMetrosT(){
	return met;
}
