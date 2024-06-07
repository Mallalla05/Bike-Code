#ifndef TIENDA_H_
#define TIENDA_H_

#include "bmx.h"
#include "ebikes.h"
#include "gravel.h"
#include "montana.h"
#include "ruta.h"
#include "urbana.h"
#include "bicicleta.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAX = 1000;

class Tienda {
private:
    Bicicleta* inventario[MAX];
    int numBicicletas;

public:
    Tienda() : numBicicletas(0) {}

    void agregarBicicleta(Bicicleta* bici) {
        if (numBicicletas < MAX) {
            inventario[numBicicletas++] = bici;
        } else {
            cout << "Inventario lleno." << endl;
        }
    }

    void creaEjemplos() {
        agregarBicicleta(new Montana("XCaliber", "Trek", 2023, 11.8, 
            "Negro,Azul, Rojo", 28000, "Suspensión delantera"));
        agregarBicicleta(new Montana("Slash", "Trek", 2024, 13.7,
            "Negro", 118999, "Suspensión delantera y trasera"));
        agregarBicicleta(new Ruta("SWorks Tarmac SL", "Specialized", 2023, 7.2,
            "Azul", 255000, "Carbono FACT"));
        agregarBicicleta(new Ruta("SWorks Venge", "Specialized", 2023, 7.1, 
            "Blanca", 11257, "Carbono FACT 12"));
        agregarBicicleta(new Urbana("Urbana City", "Trek", 2020, 12.0, 
            "Verde-Roja", 55999, 26));
        agregarBicicleta(new Urbana("Dual Sport 2", "Trek", 2023, 10.0, 
            "Rojo", 16499, 27.5));
        agregarBicicleta(new Bmx("Modelo BMX Box", "Box", 2023, 10.0, 
            "Negro", 14000, "Freno de disco"));
        agregarBicicleta(new Bmx("Modelo BMX Pro-X", "Box", 2022, 9.8, 
            "Gris", 11000, "Freno de disco"));
        agregarBicicleta(new Ebike("Ebike Power", "Trek", 2023, 20.5, 
            "Blanco", 344999, 80, 350));
        agregarBicicleta(new Ebike("Ebike 27", "Specialized", 2024, 15.5, 
            "Negro", 12000,90, 500));
        agregarBicicleta(new Gravel("Checkpoint SLR", "Trek", 2024, 8.45, 
            "Marigold", 202999, "SRAM XG"));
        agregarBicicleta(new Gravel("Crux Expert", "Specialized", 2024, 8.16, 
            "GLOSS CARBON", 110000, "SRAM XPLR"));
   
    }
void muestraBicicletas() const {
        for (int i = 0; i < numBicicletas; ++i) {
            cout << inventario[i]->toString() << endl;
        }
    }

    void muestraBicicletas(const string& tipo) const {
        for (int i = 0; i < numBicicletas; ++i) {
            if (inventario[i]->getTipo() == tipo) {
                cout << inventario[i]->toString() << endl;
            }
        }
    }

    double calculaTotalInventario() const {
        double total = 0.0;
        for (int i = 0; i < numBicicletas; ++i) {
            total += inventario[i]->getPrecio();
        }
        return total;
    }

    int getNumBicicletas() const {
        return numBicicletas;
    }

    Bicicleta* getBicicleta(int index) const {
        if (index >= 0 && index < numBicicletas) {
            return inventario[index];
        }
        return nullptr;
    }
};


#endif
