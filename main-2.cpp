#include "tienda.h"
#include <iostream>

using namespace std;

int main() {
    Tienda tienda;
    tienda.creaEjemplos();

    cout << "\nInventario Completo: " << endl;
    tienda.muestraBicicletas();

    cout << "\nBicicleta de montaña: " << endl;
    tienda.muestraBicicletas("Montaña");

    cout << "\nBicicleta de ruta: " << endl;
    tienda.muestraBicicletas("Ruta");

    cout << "\nBicicleta urbana: " << endl;
    tienda.muestraBicicletas("Urbana");

    cout << "\nBicicleta BMX: " << endl;
    tienda.muestraBicicletas("Bmx");

    cout << "\nBicicleta Ebike: " << endl;
    tienda.muestraBicicletas("Ebike");

    cout << "\nBicicleta Gravel: " << endl;
    tienda.muestraBicicletas("Gravel");

    int valorTotal = tienda.calculaTotalInventario();
    cout << "\nValor del inventario: $" << valorTotal << endl;

    return 0;
}
