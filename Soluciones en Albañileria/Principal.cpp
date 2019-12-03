/*
 * Principal.cpp
 *
 *  Created on: 2 mar. 2017
 *      Author: albert
 */
#include "VGeneral.h"
#include "Controlador.h"

int main(){
	VGeneral vg;
	Controlador c;

	int resp;

	do{
		vg.Limpiar();
		
		vg.ImprimirEncabezado("	EMPRESA SOLUCIONES EN ALBA�ILERIA","\n		MENU OPCIONES");
		vg.ImprimirMensaje("1. Cargar datos de archivos maestros (Empleados y Servicios de Alba�ileria)");
		vg.ImprimirMensaje("2. Procesar los Servicios de Alba�ileria realizados");
		vg.ImprimirMensaje("3. Reporte Estadistico de Empleados");
		vg.ImprimirMensaje("4. Salir");
		
		resp=vg.LeerValidarNro("\nIndique su opcion: ",1,4);
		
		switch(resp){
			case 1: c.CargarDatos();
				break;
			case 2: c.ProcesarTrabajo();
				break;
			case 3: c.Reporte();
				break;
		}
	
	}while(resp!=4);
	
	return 0;
}


