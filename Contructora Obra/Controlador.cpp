/*
 * Controlador.cpp
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub
	ch=false;
}

bool Controlador::CargarDatos(){
	MEmpleado mm;
	MTipoEm mt;
	string ced,nom,dir,tlf,des;
	char arch[128],est;
	float sel,sul;
	ifstream ent;

	ve.Limpiar();
	
	//Carga Datos del archivo de empleados
	ve.LeerNombreArchivo("INTRODUZCA NOMBRE ARCHIVO (EMPLEADOS): ",arch);

	if(!ve.AbrirArchivoEntrada(ent,arch)){
		ve.ImprimirMensaje("\nARCHIVO NO ENCONTRADO...");
		ve.ImprimirLineasBlanco(1);
		ve.Pausa();
		return false;
	}

	ced=ve.LeerLineaArchivo(ent);

	if(ve.FinArchivo(ent)){
		ve.ImprimirMensaje("\nARCHIVO VACIO...");
		ve.ImprimirLineasBlanco(1);
		ve.Pausa();
		return false;
	}

	while(!ve.FinArchivo(ent)){
		nom=ve.LeerLineaArchivo(ent);
		dir=ve.LeerLineaArchivo(ent);
		tlf=ve.LeerLineaArchivo(ent);
		est=ve.LeerDatoCharArchivo(ent);
		sel=ve.LeerDatoNroDecimalArchivo(ent);
		mm.SetCedula(ced);
		mm.SetNombre(nom);
		mm.SetDir(dir);
		mm.SetTlf(tlf);
		mm.SetSueldo(sel);
		mm.SetEstatus(est);
		mm.ActualizarEstatus("a");
		me.IncluirEmpleado(mm);
		ced=ve.LeerLineaArchivo(ent);
	}

	ve.CerrarArchivoEntrada(ent);

	ve.ImprimirMensaje("\nCARGA REALIZADA CON EXITO...");

	ve.Pausa();
	ve.Limpiar();

	//Carga Datos del archivo de los tipos de empleados
	ve.LeerNombreArchivo("INTRODUZCA NOMBRE ARCHIVO (TIPOS EMPLEADOS): ",arch);

	if(!ve.AbrirArchivoEntrada(ent,arch)){
		ve.ImprimirMensaje("\nARCHIVO NO ENCONTRADO...");
		ve.Pausa();
		ve.ImprimirLineasBlanco(1);
		me.LimpiarEmpleado();
		return false;
	}

	des=ve.LeerLineaArchivo(ent);

	if(ve.FinArchivo(ent)){
		ve.ImprimirMensaje("\nARCHIVO VACIO...");
		ve.ImprimirLineasBlanco(1);
		ve.Pausa();
		me.LimpiarEmpleado();
		return false;
	}

	while(!ve.FinArchivo(ent)){
		sul=ve.LeerDatoNroDecimalArchivo(ent);
		mt.SetDescripcion(des);
		mt.SetSueldo(sul);
		me.IncluirTipoE(mt);
		des=ve.LeerLineaArchivo(ent);
	}

	ve.CerrarArchivoEntrada(ent);

	ve.ImprimirMensaje("\nCARGA REALIZADA CON EXITO...");

	ve.Pausa();
	ve.Limpiar();

	return true;
}

void Controlador::ActualizarEmpleado(){
	string ced;
	int opc,opc1,res,i;

	do{

		ve.Limpiar();

		ve.ImprimirEncabezado("		ACTUALIZACION EMPLEADOS","		======================");

		ced=ve.LeerString("INTRODUZCA CEDULA: ");

		i=me.BuscarEmpleado(ced);

		if(i!=-1){
			MEmpleado mm=me.GetVectorEmpleado(i);

			ve.ImprimirEmpleado(mm.GetCedula(),mm.GetNombre(),mm.GetDir(),mm.GetTlf(),mm.GetEstatus(),mm.ObraTrabajada(),mm.GetSueldo());

			opc=ve.LeerValidarNro("\nDESESA 1.MODIFICAR 2.ELIMINAR 3.SALIR: ",1,3);

			if(opc==1){
				opc1=ve.LeerValidarNro("\nREALMENTE DESEA ELIMINARLO 1.SI 2.NO: ",1,2);

				if(opc1==1)
					ModificarEmpleado(i,ced);
			}

			else if(opc==2){
				opc1=ve.LeerValidarNro("\nREALMENTE DESEA MODIFICARLO 1.SI 2.NO: ",1,2);

				if(opc1==1)
					me.EliminarEmpleado(i);
			}
		}

		else{
			ve.ImprimirMensaje("\nEMPLEADO NO ENCONTRADO...");

			opc=ve.LeerValidarNro("\nDESEA 1.INCLUIRLO 2.SALIR: ",1,2);

			if(opc==1){
				opc1=ve.LeerValidarNro("\nREALMENTE DESEA INCLUIRLO 1.SI 2.NO: ",1,2);

				if(opc1==1)
					IncluirEmpleado(ced);
			}
		}

		res=ve.LeerValidarNro("\nDESEA ACTUALIZAR OTRO EMPLEADO 1.SI 2.NO: ",1,2);

	}while(res==1);

	ve.Limpiar();
}

void Controlador::ModificarEmpleado(int i,string ced){
	MEmpleado mm;
	string nom,dir,tlf;
	char est;
	float sul;

	ve.Limpiar();

	ve.ImprimirMensaje("		MODIFICACION EMPLEADO");

	nom=ve.LeerString("\nINTRODUZCA NOMBRE: ");

	dir=ve.LeerString("\nINTRODUZCA DIRECCION: ");

	tlf=ve.LeerString("\nINTRODUZCA NRO. TELEFONO: ");

	est=ve.LeerChar("\nINTRODUZCA ESTATUS D.DISPONIBLE O.OCUPADO: ");

	sul=ve.LeerNroDecimal("\nINTRODUZCA SUELDO MENSUAL: ");

	mm.SetCedula(ced);
	mm.SetNombre(nom);
	mm.SetDir(dir);
	mm.SetTlf(tlf);
	mm.SetEstatus(est);
	mm.SetSueldo(sul);
	me.SetVectorEmpleado(i,mm);

	ve.ImprimirMensaje("\nMODICICACION REALIZADA CON EXITO...");
	ve.ImprimirLineasBlanco(1);

	ve.Pausa();
	ve.Limpiar();
}

void Controlador::IncluirEmpleado(string ced){
	MEmpleado mm;
	string nom,dir,tlf;
	char est;
	float sul;

	ve.Limpiar();

	ve.ImprimirMensaje("		INCLUCION EMPLEADO");

	nom=ve.LeerString("\nINTRODUZCA NOMBRE: ");

	dir=ve.LeerString("\nINTRODUZCA DIRECCION: ");

	tlf=ve.LeerString("\nINTRODUZCA NRO. TELEFONO: ");

	est=ve.LeerChar("\nINTRODUZCA ESTATUS D.DISPONIBLE O.OCUPADO: ");

	sul=ve.LeerNroDecimal("\nINTRODUZCA SUELDO MENSUAL: ");

	mm.SetCedula(ced);
	mm.SetNombre(nom);
	mm.SetDir(dir);
	mm.SetTlf(tlf);
	mm.SetEstatus(est);
	mm.SetSueldo(sul);
	me.IncluirEmpleado(mm);

	ve.ImprimirMensaje("\nINCLUCION REALIZADA CON EXITO...");
	ve.ImprimirLineasBlanco(1);

	ve.Pausa();
	ve.Limpiar();
}

void Controlador::Consultar(){
	int t,opc;
	char o;

	ve.Limpiar();

	opc=ve.LeerValidarNro("\nTIPO DE CONSULTA 1.TIPO EMPLEADO 2.ESTADO OBRAS: ",1,2);

	if(opc==1){
		t=ve.LeerValidarNro("\nINDIQUE TIPO EMPLEADO 1.CARPINTERO 2.HERRERO 3.ALBAÑIL 4.ING. OBRA 5.PINTOR: ",1,5);
		ve.ImprimirNro("\nCANTIDAD TOTAL: ",me.ContarEmpleado(t));
		ve.ImprimirLineasBlanco(1);
		ve.Pausa();
	}

	else if((opc==2) and (ch)){
		o=ve.LeerChar("\nINDIQUE EL ESTADO E.EJECUCION P.PENDIENTE C.CULMINADA: ");
		ve.ImprimirNro("CANTIDAD TOTAL: ",me.ContObras(o));
		ve.ImprimirLineasBlanco(1);
		ve.Pausa();
	}

	ve.Limpiar();
}

void Controlador::ControlObras(){
	MEmpleadoUti mu;
	string cod,dir,ced;
	int tip,mi,ai,i,ct,cm,resp,j,dur;
	int opc=0;
	float mon;

	do{
		ve.Limpiar();

		ve.ImprimirEncabezado("		CONTROL OBRAS","		=============");

		cod=ve.LeerString("INTRODUZCA CODIGO: ");

		i=me.BuscarObra(cod);
		
		if(i!=-1){
			MObra mo=me.GetVectorObra(i);
			ve.ImprimirObra(mo.GetCodigoO(),mo.DescripcionO(),mo.GetDireccionO(),mo.GetMesIO(),mo.GetAnnoIO(),mo.GetDuracionO(),mo.GetEstarusO(),mo.GetMesCO(),mo.GetAnnoCO(),mo.GetCedulaE(),mo.GetMontoE());
			
			if(mo.GetEstarusO()=='P'){
				opc=ve.LeerValidarNro("\nDESEA ACTUALIZAR MONTO PAGO EMPLEADOS 1.SI 2.NO: ",1,2);

				if(opc==1){
					mon=ve.LeerValidarNroDecimalValorInicial("\nMONTO PAGO EMPLEADOS: ",0);
					mo.SetMontoE(mon);

					mo.SetEstado(me.CamEstatusObra(mo));

					me.SetVectorObra(i,mo);

					ve.ImprimirMensaje("\nMODIFICACION REALIZADA CON EXITO...");
				}
			}
		}

		else{
			if(me.EmpleadosO()){
				MObra mo;

				tip=ve.LeerValidarNro("\nINDIQUE TIPO DE OBRA 1.HOSPITAL 2.ESCUELA 3.CENTRO COMERCIAL 4.CONJUNTO RESCIDENCIAL: ",1,4);

				dir=ve.LeerString("\nINDIQUE DIRECCION: ");

				mi=ve.LeerValidarNro("\nINDIQUE MES INICIO 1.ENERO...12.DICIEMBRE: ",1,12);

				ai=ve.LeerValidarNroValorInicial("\nINDIQUE A�O INICIO: ",2000);

				dur=ve.LeerValidarNroValorInicial("\nINDIQUE DURACION DE LA OBRA EN MESES: ",0);

				do{
					ced=ve.LeerString("\nINTRODUZCA CEDULA EMPLEADO RESPONSABLE: ");

					j=me.BuscarEmpleado(ced);

					if(j!=-1){
						MEmpleado mm=me.GetVectorEmpleado(j);

						if(mm.GetEstatus()=='O'){
							ve.ImprimirMensaje("\nEMPLEADO SE ENCUENTRA OCUPADO...");

							opc=ve.LeerValidarNro("\nDESEA BUSCAR OTRO EMPLEADO 1.SI 2.NO: ",1,2);

							if(opc==2)
								return;
						}

						else{
							mon=ve.LeerValidarNroDecimalValorInicial("\nMONTO PAGO EMPLEADOS: ",0);
							
							for(int k=0;k<me.CantidadTipoE();k++){
								ve.ImprimirString("\nTIPO DE EMPLEADO: ",mo.NombreTipo(k));

								ct=ve.LeerValidarNroValorInicial("\nCANTIDAD DE EMPLEADOS: ",0);

								if(ct!=0){
									cm=ve.LeerValidarNroValorInicial("MESES DE TRABAJO: ",0);

									mu.SetCantidad(ct);
									mu.SetTiempo(cm);

									mo.Incluir(mu);
								}

								else{
									mu.SetCantidad(0);

									mu.SetTiempo(0);

									mo.Incluir(mu);
								}
							}

							mm.SetEstatus('O');
							mm.ActualizarEstatus(cod);
							me.SetVectorEmpleado(j,mm);
						}
					}

					else{
						ve.ImprimirMensaje("\nEMPLEADO NO ENCONTRADO...");

						opc=ve.LeerValidarNro("\nDESEA BUSCAR OTRO EMPLEADO 1.SI 2.NO: ",1,2);

						if(opc==2)
							return;
					}

				}while(opc==1);

				mo.SetCedulaE(ced);
				mo.SetCodigoO(cod);
				mo.SetDireccionO(dir);
				mo.SetMesIO(mi);
				mo.SetAnnoIO(ai);
				mo.SetTipoO(tip);
				mo.SetDuracionO(dur);
				mo.SetMontoE(mon);
				mo.SetEstado(me.CamEstatusObra(mo));

				me.IncluirObra(mo);
			}

			else{
				ve.ImprimirMensaje("\nERROR... NO HAY EMPLEADO DESOCUPADO");
				ve.ImprimirLineasBlanco(1);
				ve.Pausa();
			}
		}

		resp=ve.LeerValidarNro("\nDESEA PROCESAR OTRA OBRA 1.SI 2.NO: ",1,2);

	}while(resp==1);

	ve.Limpiar();
	ch=true;
}

void Controlador::CulminarObra(){
	string cod;
	int mc,ac,i,resp;

	ve.Limpiar();

	if(ch){
		do{
			ve.Limpiar();

			ve.ImprimirEncabezado("		CULMINACION OBRAS","		=================");

			cod=ve.LeerString("\nINTRODUAZCA EL CODIGO: ");

			i=me.BuscarObra(cod);

			if(i!=-1){
				MObra mo=me.GetVectorObra(i);

				mc=ve.LeerValidarNro("\nINTRODUZCA MES CULMINACION 1.ENERO...12.DICIEMBRE: ",1,12);
				
				ac=ve.LeerValidarNroValorInicial("\nINTRUDUZCA EL AÑO DE CULMINACION: ",2000);

				mo.SetAnnoCO(ac);
				mo.SetMesCO(mc);
				me.SetVectorObra(i,mo);

				me.ActualizarObra(i);
			}

			else
				ve.ImprimirMensaje("\nOBRA NO ENCONTRADA...");

			resp=ve.LeerValidarNro("\nDESEA CULMINAR OTRA OBRA 1.SI 2.NO: ",1,2);
		}while(resp==1);
	}
	
	else{
		ve.ImprimirMensaje("\nERROR... PASE POR LA OPCION 2 PRIMERO");
		ve.ImprimirLineasBlanco(1);
		ve.Pausa();
	}
	
	ve.Limpiar();
}
