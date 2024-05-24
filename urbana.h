#ifndef URBANA_H_
#define URBANA_H_
#include "bicicleta.h"

class Urbana: public Bicicleta {
private:
  int rodada;

public:

Urbana(string nom,string mar,int a,double p,string col,double pre,string susp):
  Bicicleta (nom,mar,a,p,col,pre),rodada(rod){}

  string getTipo()const override{
    return "Urbana";
  }
  string toString()const override{
    stringstream ss;
    ss<<"ipo: Urbana, Nombre: "<<nombre<< ", Marca: "<<marca<< ", Año: "<<ano<< ", Peso: " <<peso<< "kg, Color: " << color << ", Precio $: " <<precio<<  ", Rodada: " <<rodada<<  "\n"
    return ss.str();


      }
};
#endif