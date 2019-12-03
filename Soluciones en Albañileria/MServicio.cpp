/*
 * MServicio.cpp
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#include "MServicio.h"

MServicio::MServicio() {
	// TODO Auto-generated constructor stub

}
void MServicio::SetTiempo(int t){
	tie=t;
}
int MServicio::GetTiempo(){
	return tie;
}
void MServicio::SetDescripcion(string d){
	des=d;
}
string MServicio::GetDecripcion(){
	return des;
}
void MServicio::SetPrecio(float p){
	prec=p;
}
float MServicio::GetPrecio(){
	return prec;
}
