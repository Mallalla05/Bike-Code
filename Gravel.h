/*
* Proyecto: Bike code
*Autor: Mariana Hernández Díaz
*A01711207
*14/06/2024
*En esta clase se define el objeto Gravel el cual hereda de la clase abstracta que es bicicleta.
*/

#ifndef GRAVEL_H_
#define GRAVEL_H_

#include "Bicicleta.h"

//Se declara la clase gravel que se hereda de Bicicleta
class Gravel : public Bicicleta {
private:
//Se declara la variable especifica de esta clase
    string transmision;//transmision de la bicicleta

//Son los metodos publicos de nuestro objeto
public:

//Se crea el constructor de nuestra clase
    Gravel(string nom, string mar, int a, double p, 
        string col, double pre, string trans)
        : Bicicleta(nom, mar, a, p, col, pre), transmision(trans) {}

/*En esta parte el override nos ayuda a sobreescribir el metodo de virtual 
toString de bicicleta*/
    string getTipo() const override { return "Gravel"; }
    string toString() const override {
        stringstream ss;
        ss << "Tipo: Gravel, Nombre: " << nombre << ", Marca: " << marca
           << ", Año: " << ano << ", Peso: " << peso << "kg, Color: " << color
           << ", Precio $: " << precio << ", Transmisión: " 
            << transmision << "\n";
        return ss.str();
    }
};

#endif//GRAVEL_H_
