/*
 * Controlador.cpp
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub
	chequeo_opcion=false;
	chequeo_opcion1=false;

}

void Controlador::ProcesarLimpieza(){
	MCovencional mc;
	MINdustrial mi;
	MHospital mh;
	VServicios vs;

	string nomb,nc;
	int tli, t,cp,resp,z,u;
	float pb,m;
	char nombarchivo[128];

	ofstream archsalida;
	ofstream archsalida2;

	ve.ImprimirEncabezado("\n		EULEN","		=====");

	me.SetAcumPv1(0);
	me.SetAcumPv2(0);
	me.SetAcumPv3(0);

	ve.LeerNombreArchivo("\n \n Nombre del archivo de Salida de datos: ",nombarchivo);

	if(!ve.AbrirArchivoSalida(archsalida,nombarchivo)){
		ve.ImprimirMensaje("\n ERROR: No se puede crear el Archivo \n LLame a su Proveedor \n");
		ve.Pausa();
		return;
	}

	ve.LeerNombreArchivo("\n \n Nombre del archivo de Salida de datos que superaron los 50000: ",nombarchivo);

	if(!ve.AbrirArchivoSalida(archsalida2,nombarchivo)){
		ve.ImprimirMensaje("\n ERROR: No se puede crear el Archivo \n LLame a su Proveedor \n");
		ve.Pausa();
		return;
	}

	chequeo_opcion1=true;

	do{
		nc=vs.LeerString("\n Introduzca el Nro de Contrato: ");

		nomb=vs.LeerString("\n Introduzca el Nombre del Cliente: ");

		t=vs.LeerValidarNro("\n Indique Tipo de Limpeza ('1'Convencional '2'Induztrial '3'Limpieza y Desinfeccion): ",1,3);

		pb=vs.LeerNroDecimal("\n Introduzca Precio Base de Limpieza: ");

		switch(t){

			case 1:{
				tli=vs.LeerValidarNro("\n Indique de Limpieza Realizara ('1' Lavado y Desmanchado de Fachadas '2' Lavado y Desmanchado de Vidrios '3' Lavado y Desmanchado de Muebles y Alfombras): ",1,3);
				
				mc.SetNroCon(nc);
				mc.SetNombre(nomb);
				mc.SetPrec(pb);
				mc.SetTipS(t);
				mc.SetTl(tli);
				
				me.ProcesarPv1(mc);
				
				vs.GrabarLineaArchivo(archsalida,mc.GetNroCon());
				vs.GrabarLineaArchivo(archsalida,mc.GetNombre());
				vs.GrabarDatoNroArchivo(archsalida,mc.GetTipS());
				vs.GrabarDatoNroDecimalArchivo(archsalida,mc.GetPrec());
				vs.GrabarDatoNroArchivo(archsalida,mc.GetTl());
				
				vs.ImprimirTipoL(mc.GetNroCon(),mc.GetNombre(),mc.NombreServicios(),mc.ProcesarVenta());
				
				if(mc.ProcesarVenta()>5000){
					vs.ImprimirEncabezado("Clientes que Uperaron los 50000","=============================");
					vs.ImprimirTipoL(mc.GetNroCon(),mc.GetNombre(),mc.NombreServicios(),mc.ProcesarVenta());
					
					vs.GrabarLineaArchivo(archsalida2,mc.GetNroCon());
					vs.GrabarLineaArchivo(archsalida2,mc.GetNombre());
					vs.GrabarLineaArchivo(archsalida2,mc.NombreServicios());
					vs.GrabarDatoNroDecimalArchivo(archsalida2,mc.ProcesarVenta());
				}
			}
			break;

			case 2: {
				tli=vs.LeerValidarNro("\n Indique de Limpieza Realizara ('1' Limpieza vial '2' Limpieza Integral de fábricas): ",1,2);
				
				m=vs.LeerValidarNroDecimalValorInicial("\n Metros Cuadrados a trabajar: ",0.00);
				
				cp=vs.LeerValidarNroDecimalValorInicial("\n Cantidad de Personas a Contratar: ",1);
				
				mi.SetNroCon(nc);
				mi.SetNombre(nomb);
				mi.SetPrec(pb);
				mi.SetTipS(t);
				mi.SetTl(tli);
				mi.SetCantP(cp);
				mi.SetMts(m);
				
				me.ProcesarPv2(mi);
				
				vs.GrabarLineaArchivo(archsalida,mi.GetNroCon());
				vs.GrabarLineaArchivo(archsalida,mi.GetNombre());
				vs.GrabarDatoNroArchivo(archsalida,mi.GetTipS());
				vs.GrabarDatoNroDecimalArchivo(archsalida,mc.GetPrec());
				vs.GrabarDatoNroArchivo(archsalida,mi.GetTl());
				vs.GrabarDatoNroDecimalArchivo(archsalida,mi.GetMts());
				vs.GrabarDatoNroArchivo(archsalida,mi.GetCantP());
				
				vs.ImprimirTipoL(mi.GetNroCon(),mi.GetNombre(),mi.NombreServicios(),mi.ProcesarVenta());
				
				if(mi.ProcesarVenta()>5000){
					vs.ImprimirEncabezado("Clientes que Uperaron los 50000","=============================");
					vs.ImprimirTipoL(mi.GetNroCon(),mi.GetNombre(),mi.NombreServicios(),mi.ProcesarVenta());
					
					vs.GrabarLineaArchivo(archsalida2,mi.GetNroCon());
					vs.GrabarLineaArchivo(archsalida2,mi.GetNombre());
					vs.GrabarLineaArchivo(archsalida2,mi.NombreServicios());
					vs.GrabarDatoNroDecimalArchivo(archsalida2,mi.ProcesarVenta());
				}
			}
			break;

			case 3: {
				tli=vs.LeerValidarNro("\n Indique Tipo de centro Hospitalario ('1'Ambulatorio '2'Clinica): ",1,2);
				
				z=vs.LeerValidarNro("\n Indique Zona de Limpieza ('1'Riesgo '2'Quirofano '3'Consultorio): ",1,3);
				
				u=vs.LeerValidarNro("\n Indique Ubicacion ('1'Centro '2'Este '3'Oeste): ",1,3);
				
				mh.SetNroCon(nc);
				mh.SetNombre(nomb);
				mh.SetPrec(pb);
				mh.SetTipS(t);
				mh.SetTipoCentro(tli);
				mh.SetZona(z);
				mh.SetUbicacion(u);
				
				me.ProcesarPv3(mh);
				
				vs.GrabarLineaArchivo(archsalida,mh.GetNroCon());
				vs.GrabarLineaArchivo(archsalida,mh.GetNombre());
				vs.GrabarDatoNroArchivo(archsalida,mh.GetTipS());
				vs.GrabarDatoNroDecimalArchivo(archsalida,mh.CalcularMontoH());
				
				vs.ImprimirTipoL(mh.GetNroCon(),mh.GetNombre(),mh.NombreServicios(),mh.CalcularMontoH());
			}
			break;
		}

		resp=vs.LeerValidarNro("\n Desea Procesar otro Cliente ('1' Si '2'No): ",1,2);

	}while(resp==1);

	ve.CerrarArchivoSalida(archsalida);
}
void Controlador::ResumenLimpieza(){
	MCovencional mc;
	MINdustrial mi;
	MHospital mh;
	VServicios vs;

	string nomb,nc;
	int tli, t,cp;
	float pb,m;
	char nombarchivo[128];

	ifstream archeulen;
	ofstream archsalida2;

	ve.LeerNombreArchivo("\n \n Nombre del archivo de Salida de datos que superaron los 50000: ",nombarchivo);

	if(!ve.AbrirArchivoSalida(archsalida2,nombarchivo)){
		ve.ImprimirMensaje("\n ERROR: No se puede crear el Archivo \n LLame a su Proveedor \n");
		ve.Pausa();
		return;
	}

	ve.LeerNombreArchivo("\n Nombre del archivo de Entrada de datos: ",nombarchivo);

	if(!ve.AbrirArchivoEntrada(archeulen,nombarchivo)){
		ve.ImprimirMensaje("\n ERROR: No existe el Archivo \n LLame a su Proveedor \n");
		ve.Pausa();
		return;
	}
	nc=ve.LeerLineaArchivo(archeulen);

	if(ve.FinArchivo(archeulen)){
		ve.ImprimirMensaje("\n ERROR: El Archivo no tiene datos \n LLame a su Proveedor \n");
		ve.Pausa();
		return;
	}

	ve.ImprimirMensaje("\n \n CARGANDO DATOS DE LIMPIEZA... \n \n");

	chequeo_opcion=true;

	while(!ve.FinArchivo(archeulen)){
		nomb=ve.LeerLineaArchivo(archeulen);
		
		t=ve.LeerDatoNroArchivo(archeulen);
		
		pb=ve.LeerDatoNroDecimalArchivo(archeulen);
		
		switch(t){
			case 1: {
				tli=vs.LeerDatoNroArchivo(archeulen);
				
				mc.SetNroCon(nc);
				mc.SetNombre(nomb);
				mc.SetPrec(pb);
				mc.SetTipS(t);
				mc.SetTl(tli);
				
				me.ProcesarPv1(mc);
				
				vs.ImprimirTipoL(mc.GetNroCon(),mc.GetNombre(),mc.NombreServicios(),mc.ProcesarVenta());

				if(mc.ProcesarVenta()>5000){
					vs.ImprimirEncabezado("Clientes que Uperaron los 50000","=============================");
					vs.ImprimirTipoL(mc.GetNroCon(),mc.GetNombre(),mc.NombreServicios(),mc.ProcesarVenta());
					
					vs.GrabarLineaArchivo(archsalida2,mc.GetNroCon());
					vs.GrabarLineaArchivo(archsalida2,mc.GetNombre());
					vs.GrabarLineaArchivo(archsalida2,mc.NombreServicios());
					vs.GrabarDatoNroDecimalArchivo(archsalida2,mc.ProcesarVenta());
				}
			}
			break;

			case 2: {
				tli=vs.LeerDatoNroArchivo(archeulen);
				
				m=vs.LeerDatoNroDecimalArchivo(archeulen);
				
				cp=vs.LeerDatoNroArchivo(archeulen);
				
				mi.SetNroCon(nc);
				mi.SetNombre(nomb);
				mi.SetPrec(pb);
				mi.SetTipS(t);
				mi.SetTl(tli);
				mi.SetMts(m);
				mi.SetCantP(cp);
				
				me.ProcesarPv2(mi);
				
				vs.ImprimirTipoL(mi.GetNroCon(),mi.GetNombre(),mi.NombreServicios(),mi.ProcesarVenta());
				
				if(mi.ProcesarVenta()>5000){
					vs.ImprimirEncabezado("Clientes que Uperaron los 50000","=============================");
					vs.ImprimirTipoL(mi.GetNroCon(),mi.GetNombre(),mi.NombreServicios(),mi.ProcesarVenta());
					vs.GrabarLineaArchivo(archsalida2,mi.GetNroCon());
					vs.GrabarLineaArchivo(archsalida2,mi.GetNombre());
					vs.GrabarLineaArchivo(archsalida2,mi.NombreServicios());
					vs.GrabarDatoNroDecimalArchivo(archsalida2,mi.ProcesarVenta());
				}
			}
			break;
		}
		
		nc=ve.LeerLineaArchivo(archeulen);
	}

	ve.ImprimirResumen(me.GetAcumPv1(),me.GetAcumPv2(),me.GetAcumPv3(),me.Total());

	ve.CerrarArchivoEntrada(archeulen);
}
