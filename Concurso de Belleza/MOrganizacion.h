/*
 * Organizacion.h
 *
 *  Created on: 5 feb. 2017
 *      Author: albert
 */

#ifndef MORGANIZACION_H_
#define MORGANIZACION_H_
#include <vector>
#include "MModelo.h"

class MOrganizacion {
private:
	vector<MModelo> vecM;
public:
	MOrganizacion();
	void SetModelo(int i,MModelo mm);
	MModelo GetModelo(int i);
	int CantidadM();
	void IncluirModelo(MModelo mm);
	void EliminarModelo(int i);
	void ReporteMP(vector<string> &auxced, vector<string> &auxnom);
	int BuscarModelo(string ced);
};

#endif /* MORGANIZACION_H_ */
