/*
 * MAsociacion.cpp
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#include "MEmpresa.h"

MEmpresa::MEmpresa() {
	// TODO Auto-generated constructor stub

}
void MEmpresa::LimpiarVectorSer(){
	vectSer.clear();
}
void MEmpresa::IncluirEmp(MEmpleado me){
	vectEmp.push_back(me);
}
void MEmpresa::IncluirSer(MServicio ms){
	vectSer.push_back(ms);
}
void MEmpresa::ProcesarServicioTrabajo(MTrabajo mt,int i){
	float cos=vectSer[mt.GetCodigoS()-1].GetPrecio();
	float mont= cos*mt.GetMetrosT()*0.005;
	vectEmp[i].ActualizarComision(mont);
}
void MEmpresa::SetVectorEmp(int i, MEmpleado me){
	vectEmp[i]=me;
}
void MEmpresa::SetVectorSer(int i, MServicio ms){
	vectSer[i]=ms;
}
MEmpleado MEmpresa::GetVectorEmp(int i){
	return vectEmp[i];
}
MServicio MEmpresa::GetVectorSer(int i){
	return vectSer[i];
}
int MEmpresa::CantidadVectorEmp(){
	return vectEmp.size();
}
int MEmpresa::CantidadVectorSer(){
	return vectSer.size();
}
int MEmpresa::BuscarEmpleado(string ced){
	for(int i=0;i<CantidadVectorEmp();i++)
		if(vectEmp[i].GetCedula()==ced)
			return i;
	return -1;
}
void MEmpresa::GenerarReporte(vector<string> &auxced, vector<int> &auxcan, vector<float> &auxmon){
	for(int i=0;i<CantidadVectorEmp();i++){
		auxced.push_back(vectEmp[i].GetCedula());
		auxcan.push_back(vectEmp[i].GetContar());
		auxmon.push_back(vectEmp[i].GetAcumular());
	}
}
