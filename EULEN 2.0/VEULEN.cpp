/*
 * VEULEN.cpp
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#include "VEULEN.h"

VEULEN::VEULEN() {
	// TODO Auto-generated constructor stub

}
void VEULEN::ImprimirResumen(float pv1,float pv2,float pv3,float t)
{
	Limpiar();
	ImprimirEncabezado("		INFORMACION DE TOTALES","		======================");
	ImprimirNroDecimal("\n Total Ventas Limpieza Convencional: ",pv1);
	ImprimirNroDecimal("\n Total Ventas Limpieza Industrial: ",pv2);
	ImprimirNroDecimal("\n Total Ventas Limpieza y Desifeccion: ",pv3);
	ImprimirNroDecimal("\n Total a Pagar: ",t);
	ImprimirLineasBlanco(2);
	Pausa();
}
