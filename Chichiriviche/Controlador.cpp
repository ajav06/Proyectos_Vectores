/*
 * Controlador.cpp
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#include "Controlador.h"

Controlador::Controlador() {
	ProLan=false;
	CargarCayos=false;
}

void Controlador::CargarDatos(){
	MCayo mc;
	MLanchero ml;
	string nc,ced,nom;
	float tar;
	char nombrearch[128];
	ifstream archCa;
	ifstream archLa;

	//Carga de Archivo de los Cayos
	va.LeerNombreArchivo("\nINTRODUZCA EL NOMBRE DEL ARCHIVO (CAYOS): ",nombrearch);

	if(!va.AbrirArchivoEntrada(archCa,nombrearch)){
		va.ImprimirMensaje("\n\nARCHIVO NO ENCONTRADO...");
		return;
	}

	nc=va.LeerLineaArchivo(archCa);
	if(!va.FinArchivo(archCa)){
		va.ImprimirMensaje("\n\nEL ARCHIVO SE ENCUENTRA VACIO...");
		return;
	}

	while(!va.FinArchivo(archCa)){
		tar=va.LeerDatoNroDecimalArchivo(archCa);
		mc.SetNombreCayo(nc);
		mc.SetTarifa(tar);
		ma.IncliurCayo(mc);
		nc=va.LeerLineaArchivo(archCa);
	}

	va.ImprimirMensaje("\n\nARCHIVO CARGADO CON EXITO...");
	va.Pausa();
	va.Limpiar();

	//Carga de Archivo de los Lancheros
	va.LeerNombreArchivo("\nINTRODUZCA EL NOMBRE DEL ARCHIVO (LANCHEROS): ",nombrearch);

	if(!va.AbrirArchivoEntrada(archLa,nombrearch)){
		va.ImprimirMensaje("\n\nARCHIVO NO ENCONTRADO...");
		return;
	}

	ced=va.LeerLineaArchivo(archLa);
	if(!va.FinArchivo(archLa)){
		va.ImprimirMensaje("\n\nEL ARCHIVO SE ENCUENTRA VACIO...");
		return;
	}

	while(!va.FinArchivo(archLa)){
		nom=va.LeerLineaArchivo(archLa);
		ml.SetCedula(ced);
		ml.SetNombre(nom);
		ma.IncluirLanchero(ml);
		ced=va.LeerLineaArchivo(archLa);
	}

	va.CerrarArchivoEntrada(archCa);
	va.CerrarArchivoEntrada(archLa);

	va.ImprimirMensaje("\n\nARCHIVO CARGADO CON EXITO...");

	CargarCayos=true;

	va.Pausa();
	va.Limpiar();
}

void Controlador::ProcesarTraslados(){
	MTraslado mt;
	string ced;
	int cant,dia,nroc,op,i;

	va.Limpiar();
	va.ImprimirEncabezado("		PROCESAR TRASLADOS","		=======================");

	do{
		ced=va.LeerString("\nINTRODUZCA CEDULA LANCHAERO: ");
		i=ma.BuscarLancheros(ced); //Guarda en i, la posicion donde se encuentra el lanchero

		if(i!=-1){

			MLanchero ml=ma.GetVectorLanchero(i); //Devuelve el lanchero en la poscion i

			cant=va.LeerValidarNroValorInicial("\nCANTIDAD DE TRASLADOS: ",0);

			ml.LimpiarAC();

			for(int i=0;i<cant;i++){

				nroc=va.LeerValidarNro("\nINDIQUE EL CAYO 1-7: ",1,7);
				dia=va.LeerValidarNro("\nINDIQUE EL DIA DE LA SEMANA 1-7:",1,7);
				mt.SetDiaSemana(dia);
				mt.SetNroCayo(nroc);
				ma.ProcesdarTraslado(mt,nroc);

			}

			ml.ActualizarMonto(ma.ProcesdarTraslado(mt,nroc));
			ma.IncluirLanchero(ml);

			ProLan=true;
		}

		else{
			va.Limpiar();
			va.ImprimirMensaje("\nEL LANCHERO NO EXITE...");
			va.Pausa();
		}
			
		op=va.LeerValidarNro("\nDESEA PROCESAR OTRO TRASLADO 1.SI 2.NO: ",1,2);
	}while(op==1);
}

void Controlador::ListadoCayos(){

	if((ProLan==true)&&(CargarCayos==true)){
		vector<string> auxnomC;
		vector<float> auxganC;
		ma.GenerarListadoCayos(auxnomC,auxganC);
		va.ImprimirLIstadoCayos(auxnomC,auxganC);
	}

	else{
		va.ImprimirMensaje("\nPRIMERO CARGUE LOS DATOS CORRESPONDIENTES...");
		va.Pausa();
		va.Limpiar();
		return;
	}
}

void Controlador::ReporteLancheros(){

	if((ProLan==true)&&(CargarCayos==true)){
		vector<string> auxced;
		vector<string> auxnom;
		vector<float> auxgan;
		ma.GenerarListadoLancheros(auxced,auxnom,auxgan);
		va.ImprimirListadoLancheros(auxced,auxnom,auxgan);
	}
	
	else{
		va.ImprimirMensaje("\nPRIMERO CARGUE LOS DATOS CORRESPONDIENTES...");
		va.Pausa();
		va.Limpiar();
		return;
	}
}
