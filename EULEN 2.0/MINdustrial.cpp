/*
 * MINdustrial.cpp
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#include "MINdustrial.h"

MINdustrial::MINdustrial() {
	tl=0;
	mts=0;
	cantP=0;
}
void MINdustrial::SetTl(int tli){
	tl=tli;
}
int MINdustrial::GetTl(){
	return tl;
}
float MINdustrial::ProcesarVenta(){
	switch(tl){
	case 1: return GetPrec()+GetMts()*15350+PagoP();
	case 2: return GetPrec()*1.35+20000*GetMts()+PagoP();
	}
}
int MINdustrial::GetCantP(){
	return cantP;
}
void MINdustrial::SetCantP(int cp){
	cantP=cp;
}
void MINdustrial::SetMts(float m){
	mts=m;
}
float MINdustrial::GetMts(){
	return mts;
}
float MINdustrial::PagoP(){
	return GetCantP()*23500;
}
