/*
 * Modelo.h
 *
 *  Created on: 5 feb. 2017
 *      Author: albert
 */

#ifndef MMODELO_H_
#define MMODELO_H_
#include "MPersona.h"
class MModelo: public MPersona{
private:
	float bust,cint,cad,al,pes;
	char est;
public:
	MModelo();
	void SetBusto(float);
	void SetPeso(float);
	void SetCintura(float);
	void SetCadera(float);
	void SetAltura(float);
	void SetEstudios(char);
	float GetPeso();
	float GetBusto();
	float GetCintura();
	float GetCadera();
	float GetAltura();
	char GetEstudios();
};

#endif /* MMODELO_H_ */
