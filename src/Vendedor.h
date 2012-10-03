#ifndef VENDEDOR_H_
#define VENDEDOR_H_

#include "Persona.h"
#include "Venta.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

class Vendedor: public Persona
{
private:
    vector<Venta> ventas;

public:
    Vendedor();
    Vendedor(Persona persona);
    Vendedor(string id, string nombre, string apellido);
    ~Vendedor();

    vector<Venta>   getVentas();

    void            setVentas(vector<Venta> ventas);

    void            realizarVenta(const Venta& venta);
    float           totalVentas();
    float           totalIngresos();
};

#endif /* VENDEDOR_H_ */