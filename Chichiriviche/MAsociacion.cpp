/*
 * MAsociacion.cpp
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#include "MAsociacion.h"

MAsociacion::MAsociacion() {
	// TODO Auto-generated constructor stub
}
void MAsociacion::SeVectorCayo(int i,MCayo mc){
	vectCayo[i]=mc;
}
void MAsociacion::SetVectorLanchero(int i,MLanchero ml){
	vectLan[i]=ml;
}
MLanchero MAsociacion::GetVectorLanchero(int i){
	return vectLan[i];
}
MCayo MAsociacion::GetVectorCayo(int i){
	return vectCayo[i];
}
void MAsociacion::IncliurCayo(MCayo mc){
	vectCayo.push_back(mc);
}
void MAsociacion::IncluirLanchero(MLanchero ml){
	vectLan.push_back(ml);
}
int MAsociacion::CantidadCayos(){
	return vectCayo.size();
}
int MAsociacion::CantidadLancheros(){
	return vectLan.size();
}
int MAsociacion::BuscarLancheros(string ced){
	for(int i=0;i<CantidadLancheros();i++)
		if(vectLan[i].GetCedula()==ced)
			return i;
	return -1;
}
void MAsociacion::GenerarListadoLancheros(vector<string> &auxced,vector<string> &auxnom,vector<float> &auxgan){
	for(int i=0;i<CantidadLancheros();i++){
		auxced.push_back(vectLan[i].GetCedula());
		auxnom.push_back(vectLan[i].GetNombre());
		auxgan.push_back(vectLan[i].GetAcumular());
	}
}
void MAsociacion::GenerarListadoCayos(vector<string> &auxnomC,vector<float> &auxganC){
	for(int i=0;i<CantidadCayos();i++){
		auxnomC.push_back(vectCayo[i].GetNombreCayo());
		auxganC.push_back(vectCayo[i].GetAcumular());
	}
}
float MAsociacion::ProcesdarTraslado(MTraslado mt,int c){
	int monL=0;
	int monC=0;
	int cayo=vectCayo[c-1].GetTarifa();
	if((mt.GetDiaSemana()==6)||(mt.GetDiaSemana()==7)){
		monC=cayo*0.20;
		monL=cayo-(cayo*0.20);
	}
	else{
		monC=cayo*0.20;
		monL=cayo-(cayo*0.20);
	}
	vectCayo[c-1].Actualizar(monC);
	return monL;
}
