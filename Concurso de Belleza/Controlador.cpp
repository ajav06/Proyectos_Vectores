/*
 * Controlado.cpp
 *
 *  Created on: 5 feb. 2017
 *      Author: albert
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub
	chequeo=false;

}

bool Controlador::CargaExitosa(){
	return chequeo;
}

void Controlador::CargarDatos(){
	chequeo=false;
	MModelo mm;
	string ced,nom;
	float b,ci,ca,al,pe;
	int ed,es;
	char nombrearch[128];
	ifstream archmod;
	ofstream archsal;

	vo.Limpiar();

	vo.LeerNombreArchivo("Nombre del Archivo de Entrada: ",nombrearch);

	if(!vo.AbrirArchivoEntrada(archmod,nombrearch)){
		vo.ImprimirMensaje("\n ERROR: El Archivo no Existe \n");
		vo.Pausa();
		return;
	}

	ced=vo.LeerLineaArchivo(archmod);

	if(vo.FinArchivo(archmod)){
		vo.ImprimirMensaje("\n ERROR: El Archivo no tiene Datos");
		vo.Pausa();
		return;
	}

	vo.ImprimirMensaje("\n ....CARGANDO DATOS DE LAS MODELOS..");

	vo.LeerNombreArchivo("\n\nNombre del Archivo de Salida: ",nombrearch);
	if(!vo.AbrirArchivoSalida(archsal,nombrearch)){
		vo.ImprimirMensaje("\n ERROR: No se Puede Crear el Archivo \n");
		vo.Pausa();
		return;
	}

	while(!vo.FinArchivo(archmod)){

		nom=vo.LeerLineaArchivo(archmod);
		b=vo.LeerDatoNroDecimalArchivo(archmod);
		ci=vo.LeerDatoNroDecimalArchivo(archmod);
		ca=vo.LeerDatoNroDecimalArchivo(archmod);
		al=vo.LeerDatoNroDecimalArchivo(archmod);
		pe=vo.LeerDatoNroDecimalArchivo(archmod);
		ed=vo.LeerDatoNroArchivo(archmod);
		es=vo.LeerDatoNroArchivo(archmod);

		if((ed>25)||(es==2)){
			vo.GrabarLineaArchivo(archsal,ced);
			vo.GrabarLineaArchivo(archsal,nom);
		}

		else{
			mm.SetCedula(ced);
			mm.SetNombre(nom);
			mm.SetBusto(b);
			mm.SetCintura(ci);
			mm.SetCadera(ca);
			mm.SetAltura(al);
			mm.SetPeso(pe);
			mm.SetEdad(ed);
			mm.SetEstudios(es);
			mo.IncluirModelo(mm);
		}

		ced=vo.LeerLineaArchivo(archmod);
	}

	vo.CerrarArchivoEntrada(archmod);
	vo.CerrarArchivoSalida(archsal);

	chequeo=true;
}

void Controlador::ActualizarM(){
	int opc,resp,i;

	do{
		vo.Limpiar();
		string ced = vo.LeerString("Introduzca Cedula: ");
		i= mo.BuscarModelo(ced);
		if(i!=-1){
			vo.ImprimirMensaje("\nLa Modelo ya Existe... \n");
			
			opc=vo.LeerValidarNro("1. Consultar 2. Modificar 3. Eliminar: ",1,3);

			MModelo mm= mo.GetModelo(i);

			switch(opc){
			case 1: vo.Modelo(mm.GetCedula(),mm.GetNombre(),mm.GetBusto(),mm.GetCintura(),mm.GetCadera(),mm.GetAltura(),mm.GetPeso(),mm.GetEdad(),mm.GetEstudios());
				break;
			case 2: ModificarM(i,mm);
				break;
			case 3: EliminarM(i);
				break;
			}
		}

		else{
			vo.ImprimirMensaje("\nLa Modelo no Exixte... \n");
			opc=vo.LeerValidarNroDecimal("1. Incluir 2. Salir: ",1,2);
			if(opc==1)
				IncluirM(ced);
		}

		resp=vo.LeerValidarNro("\nDesea Actualizar otra Modelo 1. Si 2. No: ",1,2);

	}while(resp==1);
}

void Controlador::ModificarM(int i,MModelo mm){
	vo.Limpiar();
	vo.ImprimirEncabezado("\n		MODIFICAR MODELO","		================");

	string nom=vo.LeerString("\n Nombre: ");

	float b=vo.LeerValidarNroDecimalValorInicial("\n Medida Busto: ",0);

	float ci=vo.LeerValidarNroDecimalValorInicial("\n Medida Cintura: ",0);

	float ca=vo.LeerValidarNroDecimalValorInicial("\n Medida Cadera: ",0);

	float al=vo.LeerValidarNroDecimalValorInicial("\n Altura: ",0);

	float pe=vo.LeerValidarNroDecimalValorInicial("\n Peso: ",0);

	int ed=vo.LeerValidarNroValorInicial("\n Edad: ",0);

	int es=vo.LeerValidarNro("\n Estudios Universitarios 1.Si 2.No: ",1,2);

	int opc=vo.LeerValidarNro("\n Confirmar la Modificacion 1. Si 2.No: ",1,2);

	if(opc==2)
		return;

	if((ed>25)||(es==2))
		mo.EliminarModelo(i);

	else if((ed<=25)&&(es==1)){
		mm.SetNombre(nom);
		mm.SetBusto(b);
		mm.SetCintura(ci);
		mm.SetCadera(ca);
		mm.SetAltura(al);
		mm.SetPeso(pe);
		mm.SetEdad(ed);
		mm.SetEstudios(es);
		mo.SetModelo(i,mm);
		vo.Limpiar();
	}

	vo.ImprimirMensaje("\nMODIFICACION REALIZADA CON EXITO...");
	vo.Pausa();
}

void Controlador::IncluirM(string ced){
	MModelo mm;
	vo.Limpiar();

	vo.ImprimirEncabezado("\n		INCLUIR MODELO","		================");

	string nom=vo.LeerString("\n Nombre: ");

	float b=vo.LeerValidarNroDecimalValorInicial("\n Medida Busto: ",0);

	float ci=vo.LeerValidarNroDecimalValorInicial("\n Medida Cintura: ",0);

	float ca=vo.LeerValidarNroDecimalValorInicial("\n Medida Cadera: ",0);

	float al=vo.LeerValidarNroDecimalValorInicial("\n Altura: ",0);

	float pe=vo.LeerValidarNroDecimalValorInicial("\n Peso: ",0);

	int ed=vo.LeerValidarNroValorInicial("\n Edad: ",0);

	int es=vo.LeerValidarNro("\n Estudios Universitarios 1.Si 2.No: ",1,2);

	int opc=vo.LeerValidarNro("\n Confirmar la Inclusion 1. Si 2.No: ",1,2);

	if(opc==2)
		return;

	if((ed<=25) && (es==1)){
		mm.SetCedula(ced);
		mm.SetNombre(nom);
		mm.SetBusto(b);
		mm.SetCintura(ci);
		mm.SetCadera(ca);
		mm.SetAltura(al);
		mm.SetPeso(pe);
		mm.SetEdad(ed);
		mm.SetEstudios(es);
		mo.IncluirModelo(mm);
		vo.Limpiar();
	}

	vo.ImprimirMensaje("\n INCLUSION REALIZADA CON EXITO...");
	vo.Pausa();
}

void Controlador::EliminarM(int i){
	int opc=vo.LeerValidarNro("\nConfirmar la Eliminacion 1. Si 2.No: ",1,2);

	if(opc==2)
		return;

	mo.EliminarModelo(i);
	vo.ImprimirMensaje("\n ELIMINACION REALIZADA CON EXITO...");
}

void Controlador::ListaCandidatas(){
	if(mo.CantidadM()==0){
		vo.Limpiar();
		vo.ImprimirMensaje("\n No Hay Candidatas con Medidas Perfectas");
		vo.Pausa();
		return;
	}

	vector<string> auxced;
	vector<string> auxnom;
	
	mo.ReporteMP(auxced,auxnom);
	vo.Medida(auxced,auxnom);
}
