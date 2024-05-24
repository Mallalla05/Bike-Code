#ifndef BICICLETA_H_
#define BICICLETA_H_
#include <string>
using namespace std;

class Bicicleta {
protected:
  sting nombre;
  string marca;
  int ano;
  double peso;
  string color;
  double precio;
  s

public:
  
  Bicicleta (string nom,string mar,int a,double p,string col,double pre,):
      nombre(nom),marca(mar),ano(a),peso(p),color(col),preci o(pre){}
  virtual Bicicleta(){}
  virtual string getTipo() const=0;
  virtual string toTipo() const=0;
  double getPrecio () const {
    return precio;
  }
};

#endif