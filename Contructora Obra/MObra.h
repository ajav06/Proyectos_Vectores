/*
 * MObra.h
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#ifndef MOBRA_H_
#define MOBRA_H_
#include"MEmpleadoUti.h"
#include<vector>
using namespace std;
#include<string>
class MObra:public MEmpleadoUti{
private:
	vector<MEmpleadoUti> vectEmp;
	string cod,ced,dir;
	int tip,mesi,mesc,annoc,annoi,dur;
	char est;
	float mon;
public:
	MObra();
	void SetCodigoO(string);
	void SetTipoO(int);
	void SetMesIO(int);
	void SetMesCO(int);
	void SetAnnoCO(int);
	void SetAnnoIO(int);
	void SetDuracionO(int);
	void SetMontoE(float);
	void SetDireccionO(string);
	void SetEstado(char);

	string GetCodigoO();
	int GetTipoO();
	int GetMesIO();
	int GetAnnoIO();
	int GetDuracionO();
	int GetMesCO();
	int GetAnnoCO();
	float GetMontoE();
	char GetEstarusO();
	string GetDireccionO();

	void SetCedulaE(string);
	void SetVectEmple(int i, MEmpleadoUti mu);
	string NombreTipo(int);
	void Incluir(MEmpleadoUti);

	string GetCedulaE();
	MEmpleadoUti GetVectEmple(int i);

	string DescripcionO();
};

#endif /* MOBRA_H_ */
