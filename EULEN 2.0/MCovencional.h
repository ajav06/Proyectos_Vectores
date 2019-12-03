/*
 * MCovencional.h
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#ifndef MCOVENCIONAL_H_
#define MCOVENCIONAL_H_
#include"MServicios.h"

class MCovencional : public MServicios{
private:
	int tl;
public:
	MCovencional();
	float ProcesarVenta();
	void SetTl(int);
	int GetTl();
};

#endif /* MCOVENCIONAL_H_ */
