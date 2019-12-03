/*
 * MTraslado.h
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#ifndef MTRASLADO_H_
#define MTRASLADO_H_

class MTraslado {
	int nroC,diaS;
public:
	MTraslado();
	void SetNroCayo(int);
	void SetDiaSemana(int);
	int GetNroCayo();
	int GetDiaSemana();
};

#endif /* MTRASLADO_H_ */
