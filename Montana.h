/*
 * Proyecto: Bike code
 *Autor: Mariana Hernández Díaz
 *A01711207
 *14/06/2024
 *En esta clase se define el objeto Montana el cual hereda de la clase abstracta que es bicicleta.
 */

#ifndef MONTANA_H_
#define MONTANA_H_

#include "Bicicleta.h"

// Se declara la clase montaña que se hereda de Bicicleta

class Montana : public Bicicleta {
private:
  // Se declara la variable especifica de esta clase
  string suspension; // suspensión de la bicicleta

  // Son los metodos publicos de nuestro objeto
public:
  // Se crea el constructor de nuestra clase
  Montana(string nom, string mar, int a, double p, string col, double pre,
          string susp)
      : Bicicleta(nom, mar, a, p, col, pre), suspension(susp) {}

  /* En esta parte el override nos ayuda a sobreescribir el metodo de virtual 
  toString de bicicleta*/
  string getTipo() const override { return "Montaña"; }
  string toString() const override {
    stringstream ss;
    ss << "Tipo: Montaña, Nombre: " << nombre << ", Marca: " << marca
       << ", Año: " << ano << ", Peso: " << peso << "kg, Color: " << color
       << ", Precio $: " << precio << ", Suspensión: " << suspension << "\n";
    return ss.str();
  }
};

#endif // MONTANA_H_
