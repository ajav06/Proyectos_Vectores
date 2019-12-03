/*
 * MServicios.h
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#ifndef MSERVICIOS_H_
#define MSERVICIOS_H_
#include "MPersona.h"

class MServicios : public MPersona{
	string nroCon;
	int tipS;
	float prec;
public:
	MServicios();
	void SetNroCon(string);
	string GetNroCon();
	void SetTipS(int);
	int GetTipS();
	void SetPrec(float);
	float GetPrec();
	string NombreServicios();
};

#endif /* MSERVICIOS_H_ */
