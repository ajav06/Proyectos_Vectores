/*
 * MTipoEm.h
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#ifndef MTIPOEM_H_
#define MTIPOEM_H_
#include<string>
using namespace std;

class MTipoEm {
private:
	string des;
	float suel;
public:
	MTipoEm();
	void SetDescripcion(string);
	void SetSueldo(float);
	string GetDescripcion();
	float GetSueldo();
};

#endif /* MTIPOEM_H_ */
