#ifndef CLIENTE_H_
#define CLIENTE_H_

#include "Persona.h"
#include "Venta.h"

#include <vector>
using std::vector;

#include <string>
using std::string;


class Cliente
{
private:
    vector<Venta> compras;
public:
    Cliente();
    Cliente(Persona persona);
    Cliente(string id, string nombre, string apellido);
    ~Cliente();
};

#endif CLIENTE_H_