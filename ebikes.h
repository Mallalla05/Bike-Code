#ifndef EBIKE_H_
#define EBIKE_H_
#include "bicicleta.h"

class Ebike: public Bicicleta {
private:
  int autonomia;
  int potenciaMotor;

public:

Ebike (string nom,string mar,int a,double p,string col,double pre,string susp):
  Bicicleta (nom,mar,a,p,col,pre),autonomia(auto),potenciaMotor(potencia){}

  string getTipo()const override{
    return "Ebike";
  }
  string toString()const override{
    stringstream ss;
    ss<<"ipo: Ebike, Nombre: "<<nombre<< ", Marca: "<<marca<< ", Año: "<<ano<< ", Peso: " <<peso<< "kg, Color: " << color << ", Precio $: " <<precio<<  ", Autonomia: " <<autonomia<<"Km, Potencia del motor: "<<potenciaMotor<<  "\n"
    return ss.str();


      }
};
#endif

ublic:

Montana (string nom,string mar,int a,double p,string col,double pre,string susp):
  Bicicleta (nom,mar,a,p,col,pre),suspension (susp){}

  string getTipo()const override{
    return "Montaña";
  }
  string toString()const override{
    stringstream ss;
    ss<<"ipo: Montaña, Nombre: "<<nombre<< ", Marca: "<<marca<< ", Año: "<<ano<< ", Peso: " <<peso<< "kg, Color: " << color << ", Precio $: " <<precio<<  ", Suspension: " <<suspension<<  "\n"
    return ss.str();



      }
};
#endif