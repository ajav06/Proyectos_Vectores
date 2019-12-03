/*
 * MEmpleado.h
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#ifndef MEMPLEADO_H_
#define MEMPLEADO_H_
#include"MPersona.h"
class MEmpleado :public MPersona{
private:
	char est;
	float suel;
	string ob;
public:
	MEmpleado();
	void SetEstatus(char);
	void ActualizarEstatus(string);
	void SetSueldo(float);
	char GetEstatus();
	string ObraTrabajada();
	float GetSueldo();
};

#endif /* MEMPLEADO_H_ */
