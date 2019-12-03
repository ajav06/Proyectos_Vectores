// MArticulo.h

#ifndef MARTICULO_H
#define MARTICULO_H
#include <string>
using namespace std;
class MArticulo  
{
   protected:
      string codigo,desc;
      float pvp,costo;
      int tipo;
   public: 
      MArticulo();
      MArticulo(string,string,float,float,int);
      void SetCodigo(string);
      void SetDesc(string);
      void SetPvp(float);
      void SetCosto(float);
      void SetTipo(int);
      string GetCodigo();
      string GetDesc();
      float GetPvp();
      float GetCosto();
      int GetTipo();
};
#endif
