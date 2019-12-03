/*
 * MEULEN.cpp
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#include "MEULEN.h"

MEULEN::MEULEN() {
	acumPv1=0;
	acumPv2=0;
}
void MEULEN::SetAcumPv1(float ap1){
	acumPv1=ap1;
}
float MEULEN::GetAcumPv1(){
	return acumPv1;
}
void MEULEN::SetAcumPv2(float ap2){
	acumPv2=ap2;
}
float MEULEN::GetAcumPv2(){
	return acumPv2;
}
void MEULEN::SetAcumPv3(float ap3){
	acumPv3=ap3;
}
float MEULEN::GetAcumPv3(){
	return acumPv3;
}
void MEULEN::ProcesarPv1(MCovencional mc){
	acumPv1+=mc.ProcesarVenta();
}
void MEULEN::ProcesarPv2(MINdustrial mi){
	acumPv2+=mi.ProcesarVenta();
}
void MEULEN::ProcesarPv3(MHospital mh){
	acumPv3+=mh.CalcularMontoH();
}
float MEULEN::Total(){
	return acumPv2+acumPv1+acumPv3;
}
