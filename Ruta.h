/*
 * Proyecto: Bike code
 *Autor: Mariana Hernández Díaz
 *A01711207
 *14/06/2024
 *En esta clase se define el objeto Ruta el cual hereda de la clase abstracta que es bicicleta.
 */

#ifndef RUTA_H_
#define RUTA_H_

#include "Bicicleta.h"

// Se declara la clase ruta que se hereda de Bicicleta
class Ruta : public Bicicleta {
private:
// Se declara la variable especifica de esta clase
    string materialMarco;//material del marco de la bicicleta

// Son los metodos publicos de nuestro objeto
public:
// Se crea el constructor de nuestra clase
    Ruta(string nom, string mar, int a, double p, string col, double pre, 
        string material)
        : Bicicleta(nom, mar, a, p, col, pre), materialMarco(material) {}

  /* En esta parte el override nos ayuda a sobreescribir el metodo de virtual 
  toString de bicicleta*/
string getTipo() const override { return "Ruta"; }
    string toString() const override {
        stringstream ss;
        ss << "Tipo: Ruta, Nombre: " << nombre << ", Marca: " << marca
           << ", Año: " << ano << ", Peso: " << peso << "kg, Color: " << color
           << ", Precio $: " << precio << ", Material del marco: " 
            << materialMarco << "\n";
        return ss.str();
    }
};

#endif//RUTA_H_
