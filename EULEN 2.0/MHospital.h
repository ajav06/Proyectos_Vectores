/*
 * MHospital.h
 *
 *  Created on: 12/01/2017
 *      Author: usuario
 */

#ifndef MHOSPITAL_H_
#define MHOSPITAL_H_
#include "MServicios.h"

class MHospital:public MServicios {
private:
	int tipC, zon, ubic;
public:
	MHospital();
	void SetTipoCentro(int);
	int GetTipoCentro();
	void SetZona(int);
	int GetZona();
	void SetUbicacion(int);
	int GetUbicacion();
	float CalcularDesc();
	float CalcularMontoH();
};

#endif /* MHOSPITAL_H_ */
