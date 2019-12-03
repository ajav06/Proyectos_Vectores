/*
 * MServicio.h
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#ifndef MSERVICIO_H_
#define MSERVICIO_H_
#include <string>
using namespace std;
class MServicio{
private:
	int tie;
	string des;
	float prec;
public:
	MServicio();
	void SetTiempo(int);
	int GetTiempo();
	void SetDescripcion(string);
	string GetDecripcion();
	void SetPrecio(float);
	float GetPrecio();
};

#endif /* MSERVICIO_H_ */
