/*
 * Proyecto: Bike code
 *Autor: Mariana Hernández Díaz
 *A01711207
 *14/06/2024
 *En esta clase se define el objeto bmx el cual hereda de la clase abstracta que
 *es bicicleta.
 */

#ifndef BMX_H_
#define BMX_H_

#include "Bicicleta.h"

// Se declara la clase bmx que se hereda de Bicicleta
class Bmx : public Bicicleta {

  // Se declara la variable especifica de esta clase
private:
  string tipoFreno; // Tipo de freno de la bicicleta

  // Son los metodos publicos de nuestro objeto
public:
  // Se crea el constructor de nuestra clase
  Bmx(string nom, string mar, int a, double p, string col, double pre,
      string tipofreno)
      : Bicicleta(nom, mar, a, p, col, pre), tipoFreno(tipofreno) {}

  /*En esta parte el override nos ayuda a sobreescribir el metodo de virtual
  toString de bicicleta*/
  string getTipo() const override { return "Bmx"; }
  string toString() const override {
    stringstream ss;
    ss << "Tipo: Bmx, Nombre: " << nombre << ", Marca: " << marca
       << ", Año: " << ano << ", Peso: " << peso << "kg, Color: " << color
       << ", Precio $: " << precio << ", Tipo de freno: " << tipoFreno << "\n";
    return ss.str();
  }
};

#endif // BMX_H_
