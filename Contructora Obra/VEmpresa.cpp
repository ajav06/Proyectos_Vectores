/*
 * VEmpresa.cpp
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#include "VEmpresa.h"

VEmpresa::VEmpresa() {
	// TODO Auto-generated constructor stub

}
void VEmpresa::ImprimirObra(string cod,string tip,string dir,int mi,int ai,int du,char est,int mc,int ac,string ced,float mon){
	Limpiar();
	ImprimirEncabezado("		DATOS OBRA","		==========");
	ImprimirString("CODIGO: ",cod);
	ImprimirString("\nTIPO: ",tip);
	ImprimirString("\nDIRECCION: ",dir);
	ImprimirNro("\nMES INICIO: ",mi);
	ImprimirNro("\nAÑO INICIO: ",ai);
	ImprimirNro("\nDURACION: ", du);
	ImprimirChar("\nESTADO DE LA OBRA: ",est);
	ImprimirNro("\nMES CULMINACION: ",mc);
	ImprimirNro("\nAÑO CULMINACION: ",ac);
	ImprimirString("\nEMPLEADO RESPONSABLE: ", ced);
	ImprimirNroDecimal("\nMONTO ASIGNADO PAGO EMPLEADOS: ",mon);
	ImprimirLineasBlanco(1);
	Pausa();
}
void VEmpresa::ImprimirEmpleado(string ced,string nom,string dir,string tel,char est,string ob,float sul){
	Limpiar();
	ImprimirEncabezado("		DATOS EMPLEADO","		==============");
	ImprimirString("CEDULA: ", ced);
	ImprimirString("\nNOMBRE: ",nom);
	ImprimirString("\nDIRECCION: ",dir);
	ImprimirString("\nTELEFONO: ",tel);
	ImprimirChar("\nESTADO: ",est);
	ImprimirString("\nOBRA QUE TRABAJA: ",ob);
	ImprimirNroDecimal("\nSUELDO MENSUAL: ",sul);
	ImprimirLineasBlanco(1);
	Pausa();
}
