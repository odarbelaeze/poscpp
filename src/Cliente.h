#ifndef CLIENTE_H_
#define CLIENTE_H_

#include "Persona.h"
#include "Venta.h"

#include <vector>
using std::vector;

#include <string>
using std::string;


class Cliente : public Persona
{
private:
    vector<Venta> compras;
    float limite_credito;

public:
    Cliente();
    Cliente(Persona persona);
    Cliente(string id, string nombre, string apellido);
    ~Cliente();

    const vector<Venta> getCompras();
    const float getLimiteCredito();

    void	setCompras(vector<Venta> compras);
    void	setLimiteCredito(float limite_credito);
    void	extenderCredito(float extension);
    void	realizarCompra(const Venta& compra);
    void	pagar(const Venta& compra, float monto);
    void	cancelar();
    void	cancelar(const Venta& compra);
    void	cancelar(int ref_compra);
    float	saldo();
};

#endif /* CLIENTE_H_ */