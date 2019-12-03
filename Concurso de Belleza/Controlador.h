/*
 * Controlado.h
 *
 *  Created on: 5 feb. 2017
 *      Author: albert
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include"MOrganizacion.h"
#include "VOrganizacion.h"

class Controlador {
	private:
		bool chequeo;
		VOrganizacion vo;
		MOrganizacion mo;
		
	public:
		Controlador();
		void CargarDatos();
		bool CargaExitosa();
		void ActualizarM();
		void IncluirM(string ced);
		void ModificarM(int i,MModelo mm);
		void EliminarM(int i);
		void ListaCandidatas();
};

#endif /* CONTROLADOR_H_ */
