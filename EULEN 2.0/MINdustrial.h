/*
 * MINdustrial.h
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#ifndef MINDUSTRIAL_H_
#define MINDUSTRIAL_H_
#include "MServicios.h"

class MINdustrial : public MServicios{
private:
	int tl, cantP;
	float mts;
public:
	MINdustrial();
	void SetCantP(int);
	int GetCantP();
	void SetMts(float);
	float PagoP();
	float GetMts();
	float ProcesarVenta();
	void SetTl(int);
	int GetTl();
};

#endif /* MINDUSTRIAL_H_ */
