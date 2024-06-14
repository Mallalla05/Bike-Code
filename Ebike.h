/*
* Proyecto: Bike code
*Autor: Mariana Hernández Díaz
*A01711207
*14/06/2024
*En esta clase se define el objeto Ebike el cual hereda de la clase abstracta que es bicicleta.
*/

#ifndef EBIKE_H_
#define EBIKE_H_

#include "Bicicleta.h"

//Se declara la clase ebike que se hereda de Bicicleta
class Ebike : public Bicicleta {
private:
//Se declara la variable especifica de esta clase
    int autonomia;//Autonomia de la bicicleta
    int potencia;//Potencia de la bicicleta

//Son los metodos publicos de nuestro objeto
public:
//Se crea el constructor de nuestra clase
    Ebike(string nom, string mar, int a, double p, string col, double pre,
            int aut, int pot)
        : Bicicleta(nom, mar, a, p, col, pre), autonomia(aut), potencia(pot) {}

/*En esta parte el override nos ayuda a sobreescribir el metodo de virtual 
toString de bicicleta*/

    string getTipo() const override { return "Ebike"; }
    string toString() const override {

        stringstream ss;
        ss << "Tipo: Ebike, Nombre: " << nombre << ", Marca: " << marca
           << ", Año: " << ano << ", Peso: " << peso << "kg, Color: " << color
           << ", Precio $: " << precio << ", Autonomía: " << autonomia
           << "km, Potencia: " << potencia << "W\n";
        return ss.str();

    }
};

#endif //EBIKE_H_
