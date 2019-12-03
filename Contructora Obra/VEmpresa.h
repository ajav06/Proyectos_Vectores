/*
 * VEmpresa.h
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#ifndef VEMPRESA_H_
#define VEMPRESA_H_
#include"VGeneral.h"

class VEmpresa:public VGeneral {
public:
	VEmpresa();
	void ImprimirEmpleado(string ced,string nom,string dir,string tel,char est,string ob,float sul);
	void ImprimirObra(string cod,string tip,string dir,int mi,int ai,int du,char est,int mc,int ac,string ced,float mon);
};

#endif /* VEMPRESA_H_ */
