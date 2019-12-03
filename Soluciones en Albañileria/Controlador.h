/*
10 * Controlador.h
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MEmpresa.h"
#include "VAsociacion.h"
#include "MServicio.h"
#include "MEmpleado.h"
#include "MTrabajo.h"
#include<vector>
using namespace std;

class Controlador {
	private:
		VAsociacion va;
		MEmpresa ma;
		bool datos,trab;
		
	public:
		Controlador();
		void CargarDatos();
		void ProcesarTrabajo();
		void Reporte();
};

#endif /* CONTROLADOR_H_ */
