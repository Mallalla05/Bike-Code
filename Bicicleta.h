/*
* Proyecto: Bike code
*Autor: Mariana Hernández Díaz
*A01711207
*14/06/2024
*En esta clase se define el objeto bicicleta la cual es una clase abstracta de la cual se derivan nuestros tipos de bicicleta.
*/

#ifndef BICICLETA_H_
#define BICICLETA_H_

#include <string>
#include <sstream>

using namespace std;

//En esta parte se declara la base de la clase bicicleta que es abstracta.
class Bicicleta {
protected:
    //Se declaran nuestras variables
    string nombre;
    string marca;
    int ano;
    double peso;
    string color;
    double precio;

//Son los métodos publicos de nuestro objeto.
public:

//Se crea el constructor de nuestra clase.
    Bicicleta(string nom, string mar, int a, double p, string col, double pre)
        : nombre(nom), marca(mar), ano(a), peso(p), color(col), precio(pre) {}

//Se usa virtual para que en nuestras clases derivadas se pueda sobreescribir.
    virtual string getTipo() const = 0; //Nos permite saber el tipo de bicicleta

    virtual string toString() const = 0;//el to_string nos convierte atributos a string

//Se usa getter para poder obtener el precio
    double getPrecio() const { return precio; }
};

#endif //BICICLETA_H_
