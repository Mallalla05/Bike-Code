#ifndef RUTA_H_
#define RUTA_H_

#include "bicicleta.h"

class Ruta : public Bicicleta {
private:
    string materialMarco;

public:
    Ruta(string nom, string mar, int a, double p, string col, double pre, string material)
        : Bicicleta(nom, mar, a, p, col, pre), materialMarco(material) {}

    string getTipo() const override { return "Ruta"; }
    string toString() const override {
        stringstream ss;
        ss << "Tipo: Ruta, Nombre: " << nombre << ", Marca: " << marca
           << ", Año: " << ano << ", Peso: " << peso << "kg, Color: " << color
           << ", Precio $: " << precio << ", Material del marco: " << materialMarco << "\n";
        return ss.str();
    }
};

#endif

  
 
