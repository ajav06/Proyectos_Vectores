/*
 * MEmpleado.h
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#ifndef MEMPLEADO_H_
#define MEMPLEADO_H_
#include "MPersona.h"

class MEmpleado:public MPersona {
private:
	int zon,con;
	float acu;
public:
	MEmpleado();
	void SetZona(int);
	int GetZona();
	void ActualizarComision(float);
	float GetAcumular();
	int GetContar();
};

#endif /* MEMPLEADO_H_ */
