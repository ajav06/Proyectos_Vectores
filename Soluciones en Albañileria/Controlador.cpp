/*
 * Controlador.cpp
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#include "Controlador.h"

Controlador::Controlador() {
	datos=trab=false;
}

void Controlador::CargarDatos(){
	MServicio ms;
	MEmpleado me;

	string ced,nom,nomS;
	int zon;
	float cos;
	char nombrearch[128];

	ifstream archser;
	ifstream archemp;

	va.Limpiar();

	va.LeerNombreArchivo("INTRODUZCA NOMBRE ARCHIVO (SERVICIOS): ",nombrearch);
	
	if(!va.AbrirArchivoEntrada(archser,nombrearch)){
		va.ImprimirMensaje("EL ARCHIVO NO EXISTE....");
		va.Pausa();
		return;
	}
	
	nomS=va.LeerLineaArchivo(archser);
	
	if(va.FinArchivo(archser)){
		va.ImprimirMensaje("EL ARCHIVO NO TIENE DATOS...");
		va.Pausa();
		return;
	}
	
	while(!va.FinArchivo(archser)){
		cos=va.LeerDatoNroDecimalArchivo(archser);
		ms.SetDescripcion(nomS);
		ms.SetPrecio(cos);
		ma.IncluirSer(ms);
		nomS=va.LeerLineaArchivo(archser);
	}
	
	va.ImprimirMensaje("CARGA DE DATOS REALIZADA CON EXITO...");
	
	va.Pausa();
	va.Limpiar();
	
	va.LeerNombreArchivo("INTRODUZCA NOMBRE ARCHIVO (EMPLEADOS): ",nombrearch);
	
	if(!va.AbrirArchivoEntrada(archemp,nombrearch)){
		va.ImprimirMensaje("EL ARCHIVO NO EXISTE....");
		va.Pausa();
		ma.LimpiarVectorSer();
		return;
	}
	
	ced=va.LeerLineaArchivo(archemp);
	
	if(va.FinArchivo(archemp)){
		va.ImprimirMensaje("EL ARCHIVO NO TIENE DATOS...");
		va.Pausa();
		ma.LimpiarVectorSer();
		return;
	}
	
	while(!va.FinArchivo(archemp)){
		nom=va.LeerLineaArchivo(archemp);
		zon=va.LeerDatoNroArchivo(archemp);
		me.SetCedula(ced);
		me.SetNombre(nom);
		me.SetZona(zon);
		ma.IncluirEmp(me);
		ced=va.LeerLineaArchivo(archemp);
	}
	
	va.ImprimirMensaje("CARGA DE DATOS REALIZADA CON EXITO...");
	
	va.CerrarArchivoEntrada(archser);
	va.CerrarArchivoEntrada(archemp);
	
	datos=true;
	
	va.Pausa();
	va.Limpiar();
}

void Controlador::ProcesarTrabajo(){
	MTrabajo mt;
	
	string ced, nom,cedC;
	int cod,resp;
	float met;
	
	va.Limpiar();
	
	if(datos){
		do{
			ced=va.LeerString("\nINTRODUZCA CEDULA DEL EMPLEADO: ");
			
			int i=ma.BuscarEmpleado(ced);
			
			if(i!=-1){
				MEmpleado me=ma.GetVectorEmp(i);
				
				cod=va.LeerValidarNro("\nINTRODUZCA CODIGO DEL SERVICIO: ",1,ma.CantidadVectorSer());
				
				met=va.LeerValidarNroDecimalValorInicial("\nINTRODUZCA Mts A TRABAJAR: ",0);
				
				cedC=va.LeerString("\nINTRODUZCA CEDULA DEL CLIENTE: ");
				
				mt.SetCedulaC(cedC);
				mt.SetCodigoS(cod);
				mt.SetMetrosT(met);
				
				ma.ProcesarServicioTrabajo(mt,i);
				
				va.Limpiar();
				trab=true;
			}

			else{
				va.ImprimirMensaje("\nEL EMPLEADO NO ESTA REGITRADO ");
				va.Limpiar();
			}
			
			resp=va.LeerValidarNro("\nDESEA SEGUIR PROCESANDO 1.SI 2.NO: ",1,2);
		
		}while(resp==1);
	}
	
	else{
		va.ImprimirMensaje("\nCARGAS DATOS PRIMERO...");
		
		va.Pausa();
		va.Limpiar();
	}
}

void Controlador::Reporte(){
	va.Limpiar();
	
	if(datos&&trab){
		vector<string> auxced;
		vector<int> auxcan;
		vector<float> auxmon;
		
		ma.GenerarReporte(auxced,auxcan,auxmon);
		
		va.ImprimirReporte(auxced,auxcan,auxmon);
	}
	
	else{
		va.ImprimirMensaje("PASE POR LAS OPCIONES 1 Y 2 PRIMEROS ANTES DE REALIZAR ESTA OPERACION...");
		
		va.Pausa();
		va.Limpiar();
	}
}
