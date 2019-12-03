/*
 * Principal.cpp
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */
#include "VGeneral.h"
#include "Controlador.h"

int main(){
	Controlador c;
	VGeneral vg;

	bool ch=c.CargarDatos();
	int res=0;

	if(ch){
		do{
			vg.Limpiar();

			vg.ImprimirEncabezado("		MENU OPCIONES","		=============");
			vg.ImprimirMensaje("1. ACTUALIZACION EMPLEADOS RESPONSABLES");
			vg.ImprimirMensaje("2. CONTROL DE OBRAS");
			vg.ImprimirMensaje("3. CULMINACION DE OBRA");
			vg.ImprimirMensaje("4. CONSULTAS");
			vg.ImprimirMensaje("5. SALIR");

			res=vg.LeerValidarNro("\nINDIQUE SU OPCION: ",1,5);
			
			switch(res){
				case 1: c.ActualizarEmpleado();
					break;
				case 2: c.ControlObras();
					break;
				case 3: c.CulminarObra();
					break;
				case 4: c.Consultar();
					break;
			}
		}while(res!=5);
	}
	
	return 0;
}

