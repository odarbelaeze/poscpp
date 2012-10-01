#ifndef VENTA_H_
#define VENTA_H_

#include "Pago.h"

#include <vector>
#include <ctime>
using std::vector;

class Venta
{
private:
    time_t fecha;
    vector<Producto> productos;
    vector<Pago> pagos;

public:
    Venta();
    Venta(time_t fecha);
    Venta(time_t fecha, vector<Producto> productos);
    ~Venta();

    const time_t            getFecha();
    const vector<Producto>  getProductos();
    const vector<Pago>      getPagos();

    void    setFecha(time_t fecha);
    void    setProductos(const vector<Producto> productos);
    void    setPagos(const vector<Pago> pagos);

    void    agregarProducto(const Producto& producto);
    void    retirarProducto(const Producto& producto);
    void    retirarProducto(const int i);
    void    retirarProducto();
    void    limpiar();
    float   total();
    float   saldo();
    void    cancelar();
    void    realizarPago(Pago pago);
    bool    cancelada();
};

#endif /* VENTA_H_ */