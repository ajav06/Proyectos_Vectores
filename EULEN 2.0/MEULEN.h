/*
 * MEULEN.h
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#ifndef MEULEN_H_
#define MEULEN_H_
#include "MCovencional.h"
#include "MINdustrial.h"
#include "MHospital.h"

class MEULEN {
private:
	float acumPv1,acumPv2, acumPv3;
public:
	MEULEN();
	void ProcesarPv1(MCovencional mc);
	void ProcesarPv2(MINdustrial mi);
	void ProcesarPv3(MHospital mh);
	void SetAcumPv1(float);
	float GetAcumPv1();
	void SetAcumPv3(float);
	float GetAcumPv3();
	void SetAcumPv2(float);
	float GetAcumPv2();
	float Total();
};

#endif /* MEULEN_H_ */
