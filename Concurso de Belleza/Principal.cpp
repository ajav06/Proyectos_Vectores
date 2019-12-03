/*
 * Principal.cpp
 *
 *  Created on: 5 feb. 2017
 *      Author: albert
 */
#include "Controlador.h"

int main(){
	bool ch=false;

	Controlador c;
	VGeneral vg;

	int opc;

	c.CargarDatos();
	ch=c.CargaExitosa();

	if(ch==true){
		do{
			vg.Limpiar();

			vg.ImprimirEncabezado("		MENU OPCIONES","		=============");
			vg.ImprimirMensaje("\n 1. Actualizacion de Candidatas");
			vg.ImprimirMensaje("\n 2. Listado de Candidatas con Medidas Perfectas");
			vg.ImprimirMensaje("\n 3. Salir");

			opc=vg.LeerValidarNro("\n\n Indique su Opcion: ",1,3);

			if(opc==1)
				c.ActualizarM();

			else if(opc==2)
				c.ListaCandidatas();

		}while(opc !=3);
	}
	
	return 0;
}



