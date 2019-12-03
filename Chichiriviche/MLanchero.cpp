/*
 * MLancheros.cpp
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#include "MLanchero.h"

MLanchero::MLanchero() {
	acum=0;

}
void MLanchero::ActualizarMonto(float mon){
	acum+=mon;
}
void MLanchero::LimpiarAC(){
	acum=0;
}
float MLanchero::GetAcumular(){
	return acum;
}
