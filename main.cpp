/*
 * Proyecto: Bike code
 *Autor: Mariana Hernández Díaz
 *A01711207
 *14/06/2024
 *En este main se crea el menu de nuestro programa,se definen las principales
 *funciones que son donde podemos crear nuestros objetos y agregar a el archivo
 *tienda.
 */
#include "Tienda.h" //incluye nuestro archivo de tienda
#include <iostream>

using namespace std;
// En esta parte parte se genera el menu de opciones
void muestraMenu() {
  cout << "\n ~ Opciones a realizar ~ " << endl; // Titulo del menú
  cout << "\n 1.- Tipos de bicicletas "
       << endl; // Opcion donde encontramos nuestro inventario de bicicletas ya
                // agregadas.
  cout << "\n 2.- Registra una bicicleta"
       << endl; // Te permite agregar una bicicleta nueva al inventario
  cout << "\n 3.- Valor de inventario"
       << endl; // Te da el valor total de los precios que estan en inventario.
  cout << "\n 4.- Salir" << endl; // Nos deja salir del programa
  cout << "\n Elige la opción: "; // Da la opcion a que el usuario decida la
                                  // opcion que quiera.
}

// En este manu es el que se deplega despues de seleccionar opcion 1 en el menú
// anterior y escoger la modalidad de bicicleta que necesite.
void muestraCategorias() {
  cout << "\n ~ Bicicletas dependiendo modalidad ~ " << endl;
  cout << "\n 1.- Montaña " << endl;
  cout << "\n 2.- Ruta" << endl;
  cout << "\n 3.- Urbana" << endl;
  cout << "\n 4.- BMX" << endl;
  cout << "\n 5.- Ebike " << endl;
  cout << "\n 6.- Gravel" << endl;
  cout << "\n Dame la modalidad: "; // Nos deja que el usuario seleccione la
                                    // modalidad que quiere.
}
void mostrarBicisCategoria(Tienda &tienda, int opcion) {
  if (opcion == 1) {
    tienda.muestraBicicletas("Montaña"); // Muestra las bicis de montaña
  } else if (opcion == 2) {
    tienda.muestraBicicletas("Ruta"); // Muestra las bicis de ruta
  } else if (opcion == 3) {
    tienda.muestraBicicletas("Urbana"); // Muestra las bicis urbanas
  } else if (opcion == 4) {
    tienda.muestraBicicletas("Bmx"); // Muestra las bicis de bmx
  } else if (opcion == 5) {
    tienda.muestraBicicletas("Ebike"); // Muestra las ebikes
  } else if (opcion == 6) {
    tienda.muestraBicicletas("Gravel"); // Muestra las bicis de gravel
  } else {
    cout << "Categoría no válida." << endl;
  }
}

// Esta funcion nos permite que el usuario registre nuevas bicicletas al
// inventario

void agregarBicicleta(Tienda &tienda) {
  string nombre, marca, color, tipoFreno, suspension, transmision,
      materialMarco;
  int ano, autonomia, potencia, tipo;
  double peso, precio;
  float rodada;

  cout << "Seleccione el tipo de bicicleta a registrar: "
       << endl; // Muestra las opciones de bicicletas para registrar
  cout << "1. Montaña\n2. Ruta\n3. Urbana\n4. BMX\n5. Ebike\n6. Gravel\n";
  cin >> tipo;  // Lee la opcion que el usuario seleccione
  cin.ignore(); // Nos da el salto de linea

  // Esta parte nos permite que el usuario vaya colocando los datos de las
  // bicis.
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
  cin >> precio; // Lee el precio de la bicicleta
  cin.ignore();

  // Esta es la parte que dependiendo de la bicicleta que el usuario decida es
  // el detalle especifico por bici.
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
    cout << "Tipo no válido."
         << endl; // Nos muestra si es que el tipo dado es erroneo.
  }
}

int main() {
  // Se crea el objeto de tienda y se inicializa en ejemplo de bicicleta.
  Tienda tienda;
  tienda.creaEjemplos();

  int opcion;
  do {
    muestraMenu();
    while (!(cin >> opcion)) { // valida la opcion del usuario
      cout << "Opción no válida. Intente nuevamente: ";
      cin.clear();
    }
    // Depende de la opcion que seleccione el usuario es lo que se va a realizar
    if (opcion == 1) {
      muestraCategorias();
      int categoria;
      while (!(cin >> categoria)) {
        cout << "Categoría no válida. Intente nuevamente: ";
        cin.clear();
      }
      mostrarBicisCategoria(
          tienda, categoria); // muestra la categoria de bici seleccionada
    } else if (opcion == 2) {
      agregarBicicleta(tienda); // agrega una nueva bici al inventario
    } else if (opcion == 3) {
      cout << "\nValor del inventario: $" << tienda.calculaTotalInventario()
           << endl;
    } else if (opcion == 4) {
      cout << "Saliendo..." << endl; // muestra el mensaje de salida
    } else {
      cout << "Opción no válida."
           << endl; // nos marca error si la opcion no es valida.
    }

  } while (opcion != 4); // deja que el codigo se siga repitiendo hasta que el
                         // usuario nos deje salir

  return 0; // Se finaliza el programa
}

