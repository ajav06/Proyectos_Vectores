/*
 * MTrabajo.h
 *
 *  Created on: 1 mar. 2017
 *      Author: albert
 */

#ifndef MTRABAJO_H_
#define MTRABAJO_H_
#include<string>
using namespace std;

class MTrabajo {
private:
	string ced;
	int codS;
	float met;
public:
	MTrabajo();
	void SetCedulaC(string);
	void SetCodigoS(int);
	void SetMetrosT(float);
	string GetCedulaC();
	int GetCodigoS();
	float GetMetrosT();
};

#endif /* MTRABAJO_H_ */
