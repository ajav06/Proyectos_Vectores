/*
 * MEmpresa.h
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#ifndef MEMPRESA_H_
#define MEMPRESA_H_
#include"MObra.h"
#include"MEmpleado.h"
#include"MTipoEm.h"
#include<vector>
using namespace std;

class MEmpresa {
private:
	vector<MObra> vectO;
	vector<MEmpleado> vectE;
	vector<MTipoEm> vectT;
public:
	MEmpresa();
	void SetVectorObra(int, MObra);
	MObra GetVectorObra(int);
	int CantidadObras();
	void IncluirObra(MObra);
	void ActualizarObra(int);
	int BuscarObra(string);
	char CamEstatusObra(MObra);

	void SetVectorEmpleado(int, MEmpleado);
	MEmpleado GetVectorEmpleado(int);
	int CantidadEmpleados();
	void IncluirEmpleado(MEmpleado);
	void LimpiarEmpleado();
	void EliminarEmpleado(int);
	int BuscarEmpleado(string);

	void SetVectorTipoE(int, MTipoEm);
	MTipoEm GetVectorTipoE(int);
	void IncluirTipoE(MTipoEm);
	int CantidadTipoE();

	int ContarEmpleado(int);
	int ContObras(char);
	bool EmpleadosO();

};

#endif /* MEMPRESA_H_ */
