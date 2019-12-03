/*
 * MEmpresa.cpp
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#include "MEmpresa.h"
#include<iostream>
MEmpresa::MEmpresa() {
	// TODO Auto-generated constructor stub

}
char MEmpresa::CamEstatusObra(MObra mo){
	float m=0;
	for(int i=0;i<CantidadTipoE();i++){
		m+=mo.GetVectEmple(i).GetCantidad()*vectT[i].GetSueldo();
	}
	if((m-mo.GetMontoE())<=0)
		return 'E';
	else
		return 'P';
}
int MEmpresa::ContarEmpleado(int a){
	int f=0;
	for(int i=0;i<CantidadObras();i++){
		if(vectO[i].GetEstarusO()=='C')
			f+=vectO[i].GetVectEmple(a-1).GetCantidad();
	}
	return f;
}
int MEmpresa::CantidadTipoE(){
	return vectT.size();
}
int MEmpresa::CantidadObras(){
	return vectO.size();
}
void MEmpresa::ActualizarObra(int i){
	vectO[i].SetEstado('C');
	for(int j=0;j<CantidadObras();j++){
		if(vectE[j].GetCedula()==vectO[i].GetCedulaE()){
			vectE[j].SetEstatus('D');
			vectE[j].ActualizarEstatus("s");
		}
	}
}
int MEmpresa::BuscarEmpleado(string c){
	for(int i=0;i<CantidadEmpleados();i++)
		if(vectE[i].GetCedula()==c)
			return i;
	return -1;
}
int MEmpresa::BuscarObra(string o){
	for(int i=0;i<CantidadObras();i++)
		if(vectO[i].GetCodigoO()==o)
			return i;
	return -1;
}
void MEmpresa::EliminarEmpleado(int i){
	vectE.erase(vectE.begin()+i);
}
void MEmpresa::IncluirEmpleado(MEmpleado me){
	vectE.push_back(me);
}
void MEmpresa::IncluirObra(MObra mo){
	vectO.push_back(mo);
}
void MEmpresa::IncluirTipoE(MTipoEm mt){
	vectT.push_back(mt);
}
MEmpleado MEmpresa::GetVectorEmpleado(int i){
	return vectE[i];
}
MObra MEmpresa::GetVectorObra(int i){
	return vectO[i];
}
MTipoEm MEmpresa::GetVectorTipoE(int i){
	return vectT[i];
}
void MEmpresa::LimpiarEmpleado(){
	vectE.clear();
}
void MEmpresa::SetVectorEmpleado(int i, MEmpleado me){
	vectE[i]=me;
}
void MEmpresa::SetVectorObra(int i,MObra mo){
	vectO[i]=mo;
}
void MEmpresa::SetVectorTipoE(int i, MTipoEm mt){
	vectT[i]=mt;
}
int MEmpresa::ContObras(char a){
	int b=0;
	for(int i=0;i<CantidadObras();i++){
		if(vectO[i].GetEstarusO()==a)
			b++;}
	return b;
}
int MEmpresa::CantidadEmpleados(){
	return vectE.size();
}
bool MEmpresa::EmpleadosO(){
	int z=0;
	for(int i=0;i<CantidadEmpleados();i++)
		if(vectE[i].GetEstatus()=='D')
			z++;
	if(z>0)
		return true;
	else
		return false;
}
