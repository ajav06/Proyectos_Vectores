/*
 * Principal.cpp
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */
#include"Controlador.h"
#include"VGeneral.h"

int main(){
	Controlador c;
	VGeneral vg;

	int o;

	do{
		vg.ImprimirMensaje("		MENU OPCIONES\n\n");
		vg.ImprimirMensaje("1. CARGAR DATOS DE LOS ARCHIVOS MAESTROS (CAYOS Y LANCHEROS)");
		vg.ImprimirMensaje("\n2. PROCESAR TRASLADOS");
		vg.ImprimirMensaje("\n3. MOSTRAR REPORTES DE LOS LANCHEROS");
		vg.ImprimirMensaje("\n4. LISTADO DE GANANCIAS DE LA ASOCIACION POR CAYOS");
		vg.ImprimirMensaje("\n5.SALIR \n");

		o=vg.LeerValidarNro("\nINDIQUE SU OPCION: ",1,5);

		switch(o){
			case 1: c.CargarDatos();
				break;
			case 2: c.ProcesarTraslados();
				break;
			case 3: c.ReporteLancheros();
				break;
			case 4: c.ListadoCayos();
				break;
		}

	}while(o!=5);
	
	return 0;
}


