#ifndef TIENDA_H_
#define TIENDA_H_
#include <string>
#include <iostream>
#include <vector>
#include "bmx.h"
#include "ebikes.h"
#include "gravel.h"
#include "montaña.h"
#include "ruta.h"
#include "urbana.h"
using namespace std;

const int MAX=1000;
class Tienda{
private:
  Bicicleta*inventario[MAX];
  int numBicicletas;

public:
Tienda();:numBicicletas(0){}
tienda();
void agregarBicicleta(Bicicleta*bici);
void creaEjemplos();
void muestraBicicletas() const;
void muestraBicicletas(string tipo) const;
double calculaTotalInventario() const;
};

Tienda::Tienda(){
  for(int i=0; i<numBicicletas;++i){
    delete inventario[i];
  }
}

void Tienda::agregarBicicleta(Bicicleta* bici) {
    if (numBicicletas < MAX) {
        inventario[numBicicletas++] = bici;
    } else {
        cout << "Inventario lleno." << endl;
    }
}

void Tienda::creaEjemplos() {
    agregarBicicleta(nueva Montana("XCaliber ", "Trek", 2023, 11.8, "Negro,Azul,Rojo", 28000.80, "Suspension delantera"));
  agregarBicicleta(nueva Montana("Slash ", "Trek", 2024, 13.7, "Negro", 118999.50, "Suspension delantera y trasera"));
    agregarBicicleta(nueva Ruta("SWorks Tarmac SL", "Specialized", 2023, 7.2, "Azul", 255000.05, "Carbono FACT"));
  agregarBicicleta(nueva Ruta("SWorks Venge", "pecialized", 2023, 7.1, "Blanca", 11257.30, "Carbono FACT 12"));
    agregarBicicleta(nueva Urbana("Urbana City", "Trek", 2020, 12.0, "Verde-Roja", 55999.01, 26));
  agregarBicicleta(nueva Urbana("Dual Sport 2", "Trek", 2023, 10.0, "Rojo", 16499.00, 27.5));
    agregarBicicleta(nueva BMX("Modelo BMX Box", "Box", 2023, 10.0, "Negro", 14000.00, "Freno de disco"));
  agregarBicicleta(nueva BMX("Modelo BMX Pro-X", "Box", 2022, 9.8, "Gris", 11000.00, "Freno de disco"))
    agregarBicicleta(nueva Ebike("Ebike Power", "Trek"", 2023, 20.5, "Blanco", 344999.00, 80, 350));
  agregarBicicleta(nueva Ebike("Ebike 27", "Specialized", 2024, 15.5, "Negro", 12000.00, 90, 500));
    agregarBicicleta(nueva Gravel("Checkpoint SLR", "Trek", 2024, 8.45, "Marigold", 202999.00, "SRAM XG"));
  agregarBicicleta(nueva Gravel("Crux Expert", "Specialized", 2024, 8.16, "GLOSS CARBON", 110000.25, "SRAM XPLR"));
}
void Tienda::muestraBicicletas() const {
  for (int i = 0; i < numBicicletas; ++i) {
      cout << inventario[i]->toString() << endl;
  }
}

void Tienda::muestraBicicletas(string tipo) const {
  for (int i = 0; i < numBicicletas; ++i) {
      if (inventario[i]->getTipo() == tipo) {
          cout << inventario[i]->toString() << endl;
      }
  }
}

double Tienda::calcularValorTotalInventario() const {
  double valorTotal = 0.0;
  for (int i = 0; i < numBicicletas; ++i) {
      valorTotal += inventario[i]->getPrecio();
  }
  return valorTotal;
}

#endif
