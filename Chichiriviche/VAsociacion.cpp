/*
 * VAsociacion.cpp
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#include "VAsociacion.h"

VAsociacion::VAsociacion() {
	// TODO Auto-generated constructor stub

}
void VAsociacion::ImprimirLIstadoCayos(vector<string> auxnomC,vector<float> auxganC){
	Limpiar();
	ImprimirEncabezado("		LISTADO DE INGRESOS DE LA ASOCIACION POR CAYOS","		==========================================");
	ImprimirStringJustificado("NOMBRE DEL CAYO",20);
	ImprimirStringJustificado("MONTO DE LA GANANCIA",20);
	ImprimirLineasBlanco(1);
	for(unsigned int i=0;i<auxnomC.size();i++){
		ImprimirStringJustificado(auxnomC,20);
		ImprimirNroDecimalJustificado(auxganC,20);
		ImprimirLineasBlanco(1);
	}
	Pausa();
	Limpiar();
}
void VAsociacion::ImprimirListadoLancheros(vector<string> auxced,vector<string> auxnom,vector<float> auxgan){
	Limpiar();
	ImprimirEncabezado("		REPORTES DE INGRESOS DE LOS LANCHEROS","		==========================================");
	ImprimirStringJustificado("CEDULA DEL LANCHERO",20);
	ImprimirStringJustificado("NOMBRE DEL LANCHERO",20);
	ImprimirStringJustificado("MONTO DE LA GANANCIA",20);
	ImprimirLineasBlanco(1);
	for(unsigned int i=0;i<auxced.size();i++){
		ImprimirStringJustificado(auxced,20);
		ImprimirStringJustificado(auxnom,20);
		ImprimirNroDecimalJustificado(auxgan,20);
		ImprimirLineasBlanco(1);
	}
	Pausa();
	Limpiar();
}
