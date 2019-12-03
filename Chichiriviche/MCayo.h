/*
 * MCayo.h
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#ifndef MCAYO_H_
#define MCAYO_H_
#include <string>
using namespace std;

class MCayo {
private:
	string nomC;
	float tar,acum;
public:
	MCayo();
	void SetNombreCayo(string);
	void SetTarifa(float);
	string GetNombreCayo();
	void LimpiarAC();
	float GetTarifa();
	void Actualizar(float);
	float GetAcumular();
};

#endif /* MCAYO_H_ */
