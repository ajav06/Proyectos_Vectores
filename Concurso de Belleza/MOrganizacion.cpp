/*
 * Organizacion.cpp
 *
 *  Created on: 5 feb. 2017
 *      Author: albert
 */

#include "MOrganizacion.h"

MOrganizacion::MOrganizacion() {
	// TODO Auto-generated constructor stub

}
int MOrganizacion::BuscarModelo(string ced){
	for(int i=0;i<CantidadM();i++)
		if(vecM[i].GetCedula()==ced)
			return i;
	return -1;
}
int MOrganizacion::CantidadM(){
	return vecM.size();
}
void MOrganizacion::EliminarModelo(int i){
	vecM.erase(vecM.begin()+i);
}
MModelo MOrganizacion::GetModelo(int i){
	return vecM[i];
}
void MOrganizacion::SetModelo(int i, MModelo mm){
	vecM[i]=mm;
}
void MOrganizacion::IncluirModelo(MModelo mm){
	vecM.push_back(mm);
}
void MOrganizacion::ReporteMP(vector <string> &auxced,vector<string> &auxnom){
	for(int i=0;i<CantidadM();i++){
		if((vecM[i].GetBusto()==90)&&(vecM[i].GetCintura()==60)&&(vecM[i].GetCadera()==90)){
			auxced.push_back(vecM[i].GetCedula());
			auxnom.push_back(vecM[i].GetNombre());
		}
	}
}
