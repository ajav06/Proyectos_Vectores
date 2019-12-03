/*
 * MServicios.cpp
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#include "MServicios.h"

MServicios::MServicios() {
	prec=0;
	tipS=0;
}
void MServicios::SetTipS(int t){
	tipS=t;
}
int MServicios::GetTipS(){
	return tipS;
}
void MServicios::SetNroCon(string nc){
	nroCon=nc;
}
string MServicios::GetNroCon(){
	return nroCon;
}
void MServicios::SetPrec(float pb){
	prec=pb;
}
float MServicios::GetPrec(){
	return prec;
}
string MServicios::NombreServicios(){
	if(GetTipS()==1)
		return "Limpieza Covencional";
	else if(GetTipS()==2)
		return "Limpieza Industrial";
	else
		return "Limpieza y Desinfeccion";
}
