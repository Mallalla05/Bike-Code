#ifndef GRAVEL_H_
#define GRAVEL_H_

#include "bicicleta.h"

class Gravel : public Bicicleta {
private:
    string transmision;

public:
    Gravel(string nom, string mar, int a, double p, string col, double pre, string trans)
        : Bicicleta(nom, mar, a, p, col, pre), transmision(trans) {}

    string getTipo() const override { return "Gravel"; }
    string toString() const override {
        stringstream ss;
        ss << "Tipo: Gravel, Nombre: " << nombre << ", Marca: " << marca
           << ", Año: " << ano << ", Peso: " << peso << "kg, Color: " << color
           << ", Precio $: " << precio << ", Transmisión: " << transmision << "\n";
        return ss.str();
    }
};

#endif
