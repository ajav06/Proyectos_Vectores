/*
 * Controlador.h
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include"VAsociacion.h"
#include"MAsociacion.h"

class Controlador {
	private:
		VAsociacion va;
		MAsociacion ma;
		bool CargarCayos;
		bool ProLan;
		
	public:
		Controlador();
		void CargarDatos();
		void ProcesarTraslados();
		void ReporteLancheros();
		void ListadoCayos();
};

#endif /* CONTROLADOR_H_ */
