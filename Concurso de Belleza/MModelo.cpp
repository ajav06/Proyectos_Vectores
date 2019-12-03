/*
 * Modelo.cpp
 *
 *  Created on: 5 feb. 2017
 *      Author: albert
 */

#include "MModelo.h"

MModelo::MModelo() {
	est=0;
	al=0;
	cint=0;
	cad=0;
	bust=0;
	pes=0;
}
void MModelo::SetPeso(float p){
	pes=p;
}
float MModelo::GetPeso(){
	return pes;
}
void MModelo::SetAltura(float a){
	al=a;
}
void MModelo::SetBusto(float b){
	bust=b;
}
void MModelo::SetCadera(float c){
	cad=c;
}
void MModelo::SetCintura(float ci){
	cint=ci;
}
void MModelo::SetEstudios(char e){
	est=e;
}
float MModelo::GetAltura(){
	return al;
}
float MModelo::GetBusto(){
	return bust;
}
float MModelo::GetCadera(){
	return cad;
}
float MModelo::GetCintura(){
	return cint;
}
char MModelo::GetEstudios(){
	return est;
}
