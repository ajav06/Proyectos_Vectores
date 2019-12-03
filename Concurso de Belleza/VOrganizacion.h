/*
 * VModelo.h
 *
 *  Created on: 5 feb. 2017
 *      Author: albert
 */

#ifndef VORGANIZACION_H_
#define VORGANIZACION_H_
#include"VGeneral.h"
#include<vector>

class VOrganizacion:public VGeneral {
public:
	VOrganizacion();
	void Modelo(string ced,string nom,float b, float cin,float c,float al,float pe,int ed, char es);
	void Medida(vector<string> &auxced,vector<string> &auxnom);
};

#endif /* VORGANIZACION_H_ */
