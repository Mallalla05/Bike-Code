#ifndef EBIKE_H_
#define EBIKE_H_

#include "bicicleta.h"

class Ebike : public Bicicleta {
private:
    int autonomia;
    int potencia;

public:
    Ebike(string nom, string mar, int a, double p, string col, double pre,
            int aut, int pot)
        : Bicicleta(nom, mar, a, p, col, pre), autonomia(aut), potencia(pot) {}

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

#endif
