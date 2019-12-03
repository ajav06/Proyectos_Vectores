/*
 * Principal.cpp
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */
#include "Controlador.h"
#include "VGeneral.h"

int main(){
	int opc;

	Controlador c;
	VGeneral vg;

	do{
		vg.Limpiar();

		vg.ImprimirEncabezado("		M E N U O P C I O N E S","		=======================");
		vg.ImprimirMensaje("\n 1. Procesar Nuevas Limpiezas");
		vg.ImprimirMensaje("\n 2. Resultados de la Empresa");
		vg.ImprimirMensaje("\n 3. Salir");

		opc=vg.LeerValidarNro("\n \n SELECCIONE SU OPCION: ",1,3);
		
		if(opc==1)
			c.ProcesarLimpieza();
		
		else if(opc==2)
			c.ResumenLimpieza();
	
	}while(opc!=3);
	
	return 0;
}

