/*
 * MAsociacion.h
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#ifndef MASOCIACION_H_
#define MASOCIACION_H_
#include"MEmpleado.h"
#include"MServicio.h"
#include"MTrabajo.h"
#include <vector>
using namespace std;
class MEmpresa {
private:
	vector<MServicio> vectSer;
	vector<MEmpleado> vectEmp;
public:
	MEmpresa();
	void SetVectorSer(int i, MServicio ms);
	void SetVectorEmp(int i, MEmpleado me);
	void IncluirEmp(MEmpleado me);
	void IncluirSer(MServicio ms);
	void LimpiarVectorSer();
	MServicio GetVectorSer(int i);
	MEmpleado GetVectorEmp(int i);
	int CantidadVectorEmp();
	int CantidadVectorSer();
	int BuscarEmpleado(string ced);
	void ProcesarServicioTrabajo(MTrabajo mt,int i);
	void GenerarReporte(vector<string> &auxced, vector<int> &auxcan, vector<float> &auxmon);
};

#endif /* MASOCIACION_H_ */
