/*
 * Controlador.h
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MEmpresa.h"
#include "VEmpresa.h"

class Controlador {
	private:
		MEmpresa me;
		VEmpresa ve;
		bool ch;
		
	public:
		Controlador();
		bool CargarDatos();
		void ActualizarEmpleado();
		void IncluirEmpleado(string);
		void ModificarEmpleado(int,string);
		void ControlObras();
		void CulminarObra();
		void Consultar();
};

#endif /* CONTROLADOR_H_ */
