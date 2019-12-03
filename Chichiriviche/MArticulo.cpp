// MArticulo.cpp

#include "MArticulo.h"
MArticulo::MArticulo() {}

//Setters
void MArticulo::SetCodigo(string c) {
	codigo = c;
}
void MArticulo::SetDesc(string d) {
	desc = d;
}
void MArticulo::SetPvp(float p) {
	pvp = p;
}
void MArticulo::SetCosto(float c) {
	costo = c;
}
void MArticulo::SetTipo(int t) {
	tipo = t;
}
//Getters
string MArticulo::GetCodigo() {
	return codigo;
}
string MArticulo::GetDesc() {
	return desc;
}
float MArticulo::GetPvp() {
	return pvp;
}
float MArticulo::GetCosto() {
	return costo;
}
int MArticulo::GetTipo() {
	return tipo;
}
