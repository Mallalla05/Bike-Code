#ifndef BMX_H_
#define BMX_H_

#include "bicicleta.h"

class Bmx : public Bicicleta {
private:
    string tipoFreno;

public:
    Bmx(string nom, string mar, int a, double p, string col, double pre, string freno)
        : Bicicleta(nom, mar, a, p, col, pre), tipoFreno(freno) {}

    string getTipo() const override { return "Bmx"; }
    string toString() const override {
        stringstream ss;
        ss << "Tipo: Bmx, Nombre: " << nombre << ", Marca: " << marca
           << ", Año: " << ano << ", Peso: " << peso << "kg, Color: " << color
           << ", Precio $: " << precio << ", Tipo de freno: " << tipoFreno << "\n";
        return ss.str();
    }
};

#endif
