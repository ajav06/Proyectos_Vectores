/*
 * MEmpledoUtis.h
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#ifndef MEMPLEDOUTIS_H_
#define MEMPLEDOUTIS_H_

class MEmpleadoUti {
private:
	int can,tie;
public:
	MEmpleadoUti();
	void SetCantidad(int);
	void SetTiempo(int);
	int GetCantidad();
	int GetTiempo();
};

#endif /* MEMPLEDOUTIS_H_ */
