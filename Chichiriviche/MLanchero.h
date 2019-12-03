/*
 * MLancheros.h
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#ifndef MLANCHERO_H_
#define MLANCHERO_H_
#include "MPersona.h"

class MLanchero:public MPersona{
private:
	float acum;
public:
	MLanchero();
	void LimpiarAC();
	void ActualizarMonto(float);
	float GetAcumular();
};

#endif /* MLANCHERO_H_ */
