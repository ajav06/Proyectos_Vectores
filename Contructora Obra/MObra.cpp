/*
 * MObra.cpp
 *
 *  Created on: 13 mar. 2017
 *      Author: albert
 */

#include "MObra.h"

MObra::MObra() {
	tip=0;
	mon=0;
	mesi=0;
	mesc=0;
	annoc=0;
	annoi=0;
	dur=0;
	est='E';
}
void MObra::SetCodigoO(string o){
	cod=o;
}
void MObra::SetCedulaE(string c){
	ced=c;
}
void MObra::SetAnnoCO(int a){
	annoc=a;
}
string MObra::DescripcionO(){
	switch(tip){
	case 1: return "HOSPITAL";
	case 2: return "ESCUELA";
	case 3: return "CENTRO COMERCIAL";
	case 4: return "CONJUNTO RESCIDENCIAL";
	}
}
void MObra::SetEstado(char es){
	est=es;
}

void MObra::SetAnnoIO(int i){
	annoi=i;
}
void MObra::SetDuracionO(int d){
	dur=d;
}
void MObra::SetMesCO(int co){
	mesc=co;
}
void MObra::SetMesIO(int io){
	mesi=io;
}
void MObra::SetMontoE(float me){
	mon=me;
}
void MObra::SetTipoO(int to){
	tip=to;
}
void MObra::SetVectEmple(int i,MEmpleadoUti mu){
	vectEmp[i]=mu;
}
MEmpleadoUti MObra::GetVectEmple(int i){
	return vectEmp[i];
}
float MObra::GetMontoE(){
	return mon;
}
int MObra::GetAnnoCO(){
	return annoc;
}
int MObra::GetAnnoIO(){
	return annoi;
}
string MObra::GetCedulaE(){
	return ced;
}
int MObra::GetDuracionO(){
	return dur;
}
string  MObra::GetCodigoO(){
	return cod;
}
int MObra::GetMesCO(){
	return mesc;
}
int MObra::GetMesIO(){
	return mesi;
}
int MObra::GetTipoO(){
	return tip;
}
void MObra::SetDireccionO(string d){
	dir=d;
}
string MObra::GetDireccionO(){
	return dir;
}
char MObra::GetEstarusO(){
	return est;
}
void MObra::Incluir(MEmpleadoUti mu){
	vectEmp.push_back(mu);
}
string MObra::NombreTipo(int a){
	int b=a+1;
	switch(b){
	case 1: return "CARPINTERO";
	case 2: return "HERRERO";
	case 3: return "ALBAÑIL";
	case 4: return "ING. ORA";
	case 5: return "PINTOR";
	}
}
