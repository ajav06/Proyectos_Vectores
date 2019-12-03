/*
 * MCovencional.cpp
 *
 *  Created on: 14 dic. 2016
 *      Author: albert
 */

#include "MCovencional.h"

MCovencional::MCovencional() {
	tl=0;
}
void MCovencional::SetTl(int tli){
	tl=tli;
}
int MCovencional::GetTl(){
	return tl;
}
float MCovencional::ProcesarVenta(){
	switch(tl){
	case 1: return GetPrec()+25000;
	case 2: return GetPrec()*1.075+25500;
	case 3: return GetPrec()-GetPrec()*0.015;
	}
}
