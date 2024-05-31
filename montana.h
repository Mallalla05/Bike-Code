#ifndef MONTANA_H_
#define MONTANA_H_

#include "bicicleta.h"

class Montana : public Bicicleta {
private:
    string suspension;

public:
    Montana(string nom, string mar, int a, double p, string col, double pre, string susp)
        : Bicicleta(nom, mar, a, p, col, pre), suspension(susp) {}

    string getTipo() const override { return "Montaña"; }
    string toString() const override {
        stringstream ss;
        ss << "Tipo: Montaña, Nombre: " << nombre << ", Marca: " << marca
           << ", Año: " << ano << ", Peso: " << peso << "kg, Color: " << color
           << ", Precio $: " << precio << ", Suspensión: " << suspension << "\n";
        return ss.str();
    }
};

#endif
