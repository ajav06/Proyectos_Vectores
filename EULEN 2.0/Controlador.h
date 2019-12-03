/*
 * Controlador.h
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MEULEN.h"
#include "VServicios.h"
#include "VEULEN.h"
class Controlador{
	private:
		MEULEN me;
		VEULEN ve;
		bool chequeo_opcion;
		bool chequeo_opcion1;
		
	public:
		Controlador();
		void ProcesarLimpieza();
		void ResumenLimpieza();
};

#endif /* CONTROLADOR_H_ */
