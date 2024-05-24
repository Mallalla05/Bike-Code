#include "tienda.h"
#include <iostream>
using namespace std;

int main() {
  Tienda tienda;
  tienda.creEjemplo();
  cout << "\nInventario Completo: " << endl;
  tienda.muestraBicicletas();
  cout << "\nBicicleta de montaña: " << endl;
  tienda.muestraBicicletas("Montana");
  cout << "\nBicicleta de ruta: " << endl;
  tienda.muestraBicicletas("ruta");
  cout << "\nBicicleta urbana: " << endl;
  tienda.muestraBicicletas("urbana");
  cout << "\nBicicleta BMX: " << endl;
  tienda.muestraBicicletas("bmx");
  cout << "\nBicicleta Ebike: " << endl;
  tienda.muestraBicicletas("Ebike");
  cout << "\nBicicleta Gravel: " << endl;
  tienda.muestraBicicletas("Gravel");
  double valorTotal = tienda.calculaTotalInventario();
  cout << "\nValor del inventario: $" << valorTotal << endl;
  return 0;
}
