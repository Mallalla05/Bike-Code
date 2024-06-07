#include "tienda.h"
#include <iostream>

using namespace std;

void muestraMenu() {
  cout << "\n ~ Opciones a realizar ~ " << endl;
  cout << "\n 1.- Tipos de bicicletas " << endl;
  cout << "\n 2.- Registra una bicicleta" << endl;
  cout << "\n 3.- Valor de inventario" << endl;
  cout << "\n 4.- Salir" << endl;
  cout << "\n Elige la opción: ";
}

void muestraCategorias() {
  cout << "\n ~ Bicicletas dependiendo modalidad ~ " << endl;
  cout << "\n 1.- Montaña " << endl;
  cout << "\n 2.- Ruta" << endl;
  cout << "\n 3.- Urbana" << endl;
  cout << "\n 4.- BMX" << endl;
  cout << "\n 5.- Ebike " << endl;
  cout << "\n 6.- Gravel" << endl;
  cout << "\n Dame la modalidad: ";
}
void mostrarBicisCategoria(Tienda &tienda, int opcion) {
  if (opcion == 1) {
    tienda.muestraBicicletas("Montaña");
  } else if (opcion == 2) {
    tienda.muestraBicicletas("Ruta");
  } else if (opcion == 3) {
    tienda.muestraBicicletas("Urbana");
  } else if (opcion == 4) {
    tienda.muestraBicicletas("Bmx");
  } else if (opcion == 5) {
    tienda.muestraBicicletas("Ebike");
  } else if (opcion == 6) {
    tienda.muestraBicicletas("Gravel");
  } else {
    cout << "Categoría no válida." << endl;
  }
}

void agregarBicicleta(Tienda &tienda) {
  string nombre, marca, color, tipoFreno, suspension, transmision,
      materialMarco;
  int ano, autonomia, potencia, tipo;
  double peso, precio;
  float rodada;

  cout << "Seleccione el tipo de bicicleta a registrar: " << endl;
  cout << "1. Montaña\n2. Ruta\n3. Urbana\n4. BMX\n5. Ebike\n6. Gravel\n";
  cin >> tipo;
  cin.ignore();

  cout << "Ingrese el nombre: ";
  getline(cin, nombre);
  cout << "Ingrese la marca: ";
  getline(cin, marca);
  cout << "Ingrese el año: ";
  cin >> ano;
  cout << "Ingrese el peso: ";
  cin >> peso;
  cout << "Ingrese el color: ";
  cin.ignore();
  getline(cin, color);
  cout << "Ingrese el precio: ";
  cin >> precio;
  cin.ignore();

  if (tipo == 1) {
    cout << "Ingrese la suspensión: ";
    getline(cin, suspension);
    tienda.agregarBicicleta(
        new Montana(nombre, marca, ano, peso, color, precio, suspension));
  } else if (tipo == 2) {
    cout << "Ingrese el material del marco: ";
    getline(cin, materialMarco);
    tienda.agregarBicicleta(
        new Ruta(nombre, marca, ano, peso, color, precio, materialMarco));
  } else if (tipo == 3) {
    cout << "Ingrese la rodada: ";
    cin >> rodada;
    tienda.agregarBicicleta(
        new Urbana(nombre, marca, ano, peso, color, precio, rodada));
  } else if (tipo == 4) {
    cout << "Ingrese el tipo de freno: ";
    getline(cin, tipoFreno);
    tienda.agregarBicicleta(
        new Bmx(nombre, marca, ano, peso, color, precio, tipoFreno));
  } else if (tipo == 5) {
    cout << "Ingrese la autonomía: ";
    cin >> autonomia;
    cout << "Ingrese la potencia: ";
    cin >> potencia;
    tienda.agregarBicicleta(new Ebike(nombre, marca, ano, peso, color, precio,
                                      autonomia, potencia));
  } else if (tipo == 6) {
    cout << "Ingrese la transmisión: ";
    getline(cin, transmision);
    tienda.agregarBicicleta(
        new Gravel(nombre, marca, ano, peso, color, precio, transmision));
  } else {
    cout << "Tipo no válido." << endl;
  }
}

int main() {
  Tienda tienda;
  tienda.creaEjemplos();

  int opcion;
  do {
    muestraMenu();
    while (!(cin >> opcion)) {
      cout << "Opción no válida. Intente nuevamente: ";
      cin.clear();
    }

    if (opcion == 1) {
      muestraCategorias();
      int categoria;
      while (!(cin >> categoria)) {
        cout << "Categoría no válida. Intente nuevamente: ";
        cin.clear();
      }
      mostrarBicisCategoria(tienda, categoria);
    } else if (opcion == 2) {
      agregarBicicleta(tienda);
    } else if (opcion == 3) {
      cout << "\nValor del inventario: $" << tienda.calculaTotalInventario()
           << endl;
    } else if (opcion == 4) {
      cout << "Saliendo..." << endl;
    } else {
      cout << "Opción no válida." << endl;
    }

  } while (opcion != 4);

  return 0;
}
