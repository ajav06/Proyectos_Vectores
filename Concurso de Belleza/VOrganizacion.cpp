/*
 * VModelo.cpp
 *
 *  Created on: 5 feb. 2017
 *      Author: albert
 */

#include "VOrganizacion.h"

VOrganizacion::VOrganizacion() {
	// TODO Auto-generated constructor stub

}
void VOrganizacion::Medida(vector<string> &auxced,vector<string> &auxnom){
	Limpiar();
	ImprimirStringJustificado("Cedula: ",8);
	ImprimirStringJustificado("Nombre: ",20);
	ImprimirLineasBlanco(1);
	for(int i=0;i<auxced.size();i++){
		ImprimirStringJustificado(auxced[i],8);
		ImprimirStringJustificado(auxnom[i],20);
		ImprimirLineasBlanco(1);
	}
	Pausa();
}
void VOrganizacion::Modelo(string ced,string nom,float b,float cin,float c,float al,float pe,int ed,char es){
	Limpiar();
	ImprimirEncabezado("\n		DATOS MODELO","		============");
	ImprimirString("\n Cedula: ",ced);
	ImprimirString("\n Nombre: ",nom);
	ImprimirNroDecimal("\n Medida Busto: ",b);
	ImprimirNroDecimal("\n Medida Cintura: ",cin);
	ImprimirNroDecimal("\n Medida Cadera: ",c);
	ImprimirNroDecimal("\n Altura: ",al);
	ImprimirNroDecimal("\n Peso: ",pe);
	ImprimirNroDecimal("\n Estudios Universitarios: ",es);
	Pausa();
}

