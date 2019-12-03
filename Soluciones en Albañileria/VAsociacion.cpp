/*
 * VAsociacion.cpp
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#include "VAsociacion.h"

VAsociacion::VAsociacion() {
	// TODO Auto-generated constructor stub

}
void VAsociacion::ImprimirReporte(vector<string> auxced, vector<int> auxcan, vector<float> auxmon){
	Limpiar();
	ImprimirMensaje("		REPORTE ESTADISTICO EMPLEADO\n");
	ImprimirStringJustificado("CEDULA",10);
	ImprimirStringJustificado("CANT TOTAL TRABAJADO",23);
	ImprimirStringJustificado("MONTO COMISION",16);
	ImprimirLineasBlanco(1);
	for(unsigned int i=0;i<auxced.size();i++){
		ImprimirStringJustificado(auxced[i],10);
		ImprimirNroJustificado(auxcan[i],13);
		ImprimirNroDecimalJustificado(auxmon[i],23);
		ImprimirLineasBlanco(1);
	}
	Pausa();
	Limpiar();
}
