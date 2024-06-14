/*
 * Proyecto: Bike code
 *Autor: Mariana Hernández Díaz
 *A01711207
 *14/06/2024
 *En esta clase se define el objeto Tienda la cual es la que administra el
 *inventario de todas las bicicletas.
 */


#ifndef TIENDA_H_
#define TIENDA_H_

// En esta parte se incluyen los archivos con los cuales vamos a trabajar.
#include "Bmx.h"
#include "Ebike.h"
#include "Gravel.h"
#include "Montana.h"
#include "Ruta.h"
#include "Urbana.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Nos define el tamaño de nuestro inventario
const int MAX = 100;

// Se declara la clase tienda
class Tienda {
private:
  Bicicleta *inventario[MAX]; // Es el puntero a objetos Bicicleta
  int numBicicletas; // el numero de bicicletas en el inventario

// Son los metodos publicos de nuestro objeto
public:
  // Es el constructor que inicializa el numero de bicis en 0.
  Tienda() : numBicicletas(0) {}

  // Funcion que nos deja agregar al inventario
  void agregarBicicleta(Bicicleta *bici) {
    if (numBicicletas < MAX) {
      inventario[numBicicletas++] =bici;/*esta parte agrega a bici al 
        //inventario y va aumentando nuestro contador.*/
    } else {
      cout << "Inventario lleno." << endl; /* muestra si nuestro inventario 
      llego al limite de bicicletas.*/
    }
  }

// Nos permite crear los ejemplos de las bicicletas y agregarlas al inventario.
  void creaEjemplos() {
// Son los ejemplos ya definidos de biciletas
    agregarBicicleta(new Montana("XCaliber", "Trek", 2023, 11.8,
                                 "Negro,Azul, Rojo", 28000,
                                 "Suspensión delantera"));
    agregarBicicleta(new Montana("Slash", "Trek", 2024, 13.7, "Negro", 118999,
                                 "Suspensión delantera y trasera"));
    agregarBicicleta(new Ruta("SWorks Tarmac SL", "Specialized", 2023, 7.2,
                              "Azul", 255000, "Carbono FACT"));
    agregarBicicleta(new Ruta("SWorks Venge", "Specialized", 2023, 7.1,
                              "Blanca", 11257, "Carbono FACT 12"));
    agregarBicicleta(
        new Urbana("Urbana City", "Trek", 2020, 12.0, "Verde-Roja", 55999, 26));
    agregarBicicleta(
        new Urbana("Dual Sport 2", "Trek", 2023, 10.0, "Rojo", 16499, 27.5));
    agregarBicicleta(new Bmx("Modelo BMX Box", "Box", 2023, 10.0, "Negro",
                             14000, "Freno de disco"));
    agregarBicicleta(new Bmx("Modelo BMX Pro-X", "Box", 2022, 9.8, "Gris",
                             11000, "Freno de disco"));
    agregarBicicleta(new Ebike("Ebike Power", "Trek", 2023, 20.5, "Blanco",
                               344999, 80, 350));
    agregarBicicleta(new Ebike("Ebike 27", "Specialized", 2024, 15.5, "Negro",
                               12000, 90, 500));
    agregarBicicleta(new Gravel("Checkpoint SLR", "Trek", 2024, 8.45,
                                "Marigold", 202999, "SRAM XG"));
    agregarBicicleta(new Gravel("Crux Expert", "Specialized", 2024, 8.16,
                                "GLOSS CARBON", 110000, "SRAM XPLR"));
  }

  // Esta funcion nos permite mostrar todas las biciletas del inventario
  void muestraBicicletas() const {
    for (int i = 0; i < numBicicletas; ++i) {
      cout << inventario[i]->toString()
           << endl; // Llama a toString() de cada bicicleta
    }
  }

  // muestra las bicis de un tipo especifico solamente
  void muestraBicicletas(const string &tipo) const {
    for (int i = 0; i < numBicicletas; ++i) {
      if (inventario[i]->getTipo() == tipo) { // compara el tipo de bicicleta.
        cout << inventario[i]->toString()
             << endl; // Llama a toString() de cada bicicleta.
      }
    }
  }

  // Esta funcion nos permite calcular el valor total de nuestro inventario.
  float calculaTotalInventario() const {
    float total = 0.0;
    for (int i = 0; i < numBicicletas; ++i) {
      total +=
          inventario[i]->getPrecio(); // suma el precio de las bicis al total
    }
    return total; // Retorna el valor total del inventario
  }

  // funcion para saber el numero de bicis del inventario
  int getNumBicicletas() const { return numBicicletas; }

  // nos ayuda para obtener una bici en especifico
  Bicicleta *getBicicleta(int index) const {
    if (index >= 0 && index < numBicicletas) {
      return inventario[index];
    }
    return nullptr; // retorna si el indice no es valido
  }
};

#endif // TIENDA_H_
