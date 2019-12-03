/*
 * VServicios.h
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#ifndef VSERVICIOS_H_
#define VSERVICIOS_H_
#include "VGeneral.h"
class VServicios : public VGeneral {
public:
	VServicios();
	void ImprimirTipoL(string nc,string nomb,string ns, float pv);
};

#endif /* VSERVICIOS_H_ */
