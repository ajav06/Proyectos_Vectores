/*
 * MHospital.cpp
 *
 *  Created on: 12/01/2017
 *      Author: usuario
 */

#include "MHospital.h"

MHospital::MHospital() {
	// TODO Auto-generated constructor stub
}
void MHospital::SetTipoCentro(int tli){
	tipC=tli;
}
int MHospital::GetTipoCentro() {
	return tipC;
}
void MHospital::SetZona(int z){
	zon=z;
}
int MHospital::GetZona(){
	return zon;
}
void MHospital::SetUbicacion(int u){
	ubic=u;
}
int MHospital::GetUbicacion(){
	return ubic;
}
float MHospital::CalcularDesc(){
	switch(ubic){
	case 1: { if(tipC==1)
		return GetPrec()-(GetPrec()*0.205);
	else
		return GetPrec()-(GetPrec()*0.055);
	}
	case 2:{ if(tipC==1)
		return GetPrec();
	else
		return GetPrec();
	}
	case 3:{ if(tipC==1)
		return GetPrec()-(GetPrec()*0.205);
	else
		return GetPrec()-(GetPrec()*0.055);
	}
}
}
float MHospital::CalcularMontoH(){
	switch(zon){
	case 1: return CalcularDesc()+75000;
	case 2: return CalcularDesc()+55000;
	case 3: return CalcularDesc()+22500;
	}
}
