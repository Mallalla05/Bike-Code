/*
 * Proyecto: Bike code
 *Autor: Mariana Hernández Díaz
 *A01711207
 *14/06/2024
 *En esta clase se define el objeto urbana el cual hereda de la clase abstracta
 *que es bicicleta.
 */
#ifndef URBANA_H_
#define URBANA_H_

#include "Bicicleta.h"
// Se declara la clase urbana que se hereda de Bicicleta
class Urbana : public Bicicleta {
private:
  // Se declara la variable especifica de esta clase
  float rodada; // rodada de la bicicleta
  // Son los metodos publicos de nuestro objeto
public:
  // Se crea el constructor de nuestra clase
  Urbana(string nom, string mar, int a, double p, string col, double pre,
         float rod)
      : Bicicleta(nom, mar, a, p, col, pre), rodada(rod) {}

  /* En esta parte el override nos ayuda a sobreescribir el metodo de virtual
  toString de bicicleta*/
  string getTipo() const override { return "Urbana"; }
  string toString() const override {
    stringstream ss;
    ss << "Tipo: Urbana, Nombre: " << nombre << ", Marca: " << marca
       << ", Año: " << ano << ", Peso: " << peso << "kg, Color: " << color
       << ", Precio $: " << precio << ", Rodada: " << rodada << "\n";
    return ss.str();
  }
};

#endif // URBANA_H_

