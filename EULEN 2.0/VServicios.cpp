/*
 * VServicios.cpp
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#include "VServicios.h"

VServicios::VServicios() {
	// TODO Auto-generated constructor stub

}
void VServicios::ImprimirTipoL(string nc,string nomb,string ns,float pv){
	Limpiar();
	ImprimirEncabezado("		RESUMEN SERVISIOS","		=================");
	ImprimirString("\n Nro Contrato del Servicios:	",nc);
	ImprimirString("\n Nombre del Cliente:	",nomb);
	ImprimirString("\n Tipo de Limpieza:	",ns);
	ImprimirNroDecimal("\n Monto a Pagar:	",pv);
	ImprimirLineasBlanco(2);
	Pausa();
}
