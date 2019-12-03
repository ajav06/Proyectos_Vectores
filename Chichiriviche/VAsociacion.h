/*
 * VAsociacion.h
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#ifndef VASOCIACION_H_
#define VASOCIACION_H_
#include"VGeneral.h"
#include<vector>

class VAsociacion:public VGeneral{
public:
	VAsociacion();
	void ImprimirListadoLancheros(vector<string> auxced,vector<string> auxnom,vector<float> auxgan);
	void ImprimirLIstadoCayos(vector<string> auxnomC,vector<float> auxganC);
};

#endif /* VASOCIACION_H_ */
