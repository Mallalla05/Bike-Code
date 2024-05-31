#ifndef BICICLETA_H_
#define BICICLETA_H_

#include <string>
#include <sstream>

using namespace std;

class Bicicleta {
protected:
    string nombre;
    string marca;
    int ano;
    double peso;
    string color;
    double precio;

public:
    Bicicleta(string nom, string mar, int a, double p, string col, double pre)
        : nombre(nom), marca(mar), ano(a), peso(p), color(col), precio(pre) {}
    virtual ~Bicicleta() {} 
    virtual string getTipo() const = 0;
    virtual string toString() const = 0;
    double getPrecio() const { return precio; }
};

#endif
