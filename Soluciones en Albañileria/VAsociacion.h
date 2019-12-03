/*
 * VAsociacion.h
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#ifndef VASOCIACION_H_
#define VASOCIACION_H_
#include "VGeneral.h"
#include<vector>
using namespace std;
class VAsociacion:public VGeneral {
public:
	VAsociacion();
	void ImprimirReporte(vector<string> auxced,vector<int> auxcan, vector<float> auxmon);
};

#endif /* VASOCIACION_H_ */
