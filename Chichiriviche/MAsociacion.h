/*
 * MAsociacion.h
 *
 *  Created on: 21 feb. 2017
 *      Author: albert
 */

#ifndef MASOCIACION_H_
#define MASOCIACION_H_
#include <vector>
using namespace std;
#include"MCayo.h"
#include"MLanchero.h"
#include"MTraslado.h"

class MAsociacion {
private:
	vector<MCayo> vectCayo;
	vector<MLanchero> vectLan;
public:
	MAsociacion();
	void SeVectorCayo(int i,MCayo mc);
	void SetVectorLanchero(int i,MLanchero ml);
	MCayo GetVectorCayo(int i);
	MLanchero GetVectorLanchero(int i);
	void IncliurCayo(MCayo mc);
	void IncluirLanchero(MLanchero ml);
	int CantidadLancheros();
	int BuscarLancheros(string);
	int CantidadCayos();
	float ProcesdarTraslado(MTraslado mt,int c);
	void GenerarListadoLancheros(vector<string> &auxced,vector<string> &auxnom,vector<float> &auxgan);
	void GenerarListadoCayos(vector<string> &auxnomC,vector<float> &auxganC);

};

#endif /* MASOCIACION_H_ */
