#include "Venta.h"
#include <algorithm>
using std::find;
using std::time;

Venta::Venta(){
}

Venta::Venta(time_t fecha){
}

Venta::Venta(time_t fecha, vector<Producto> productos){
    this -> fecha = fecha;
    this -> productos = productos;
}

Venta::~Venta(){
}

const time_t            Venta::getFecha(){
    return this -> fecha;
}

const vector<Producto>  Venta::getProductos(){
    return this -> productos;
}

const vector<Pago>      Venta::getPagos(){
    return this -> pagos;
}

void    Venta::setFecha(time_t fecha){
    this -> fecha = fecha;
}

void    Venta::setProductos(const vector<Producto> productos){
    this -> productos = productos;
}

void    Venta::setPagos(const vector<Pago> pagos){
    this -> pagos = pagos;
}

void    Venta::agregarProducto(const Producto& producto){
    this -> productos.push_back(producto);
}

void    Venta::retirarProducto(const Producto& producto){
    this -> productos.erase(find(
        this -> productos.begin(), 
        this -> productos.end(), 
        producto
    ));
}

void    Venta::retirarProducto(const int i){
    this -> productos.erase(this -> productos.begin() + i);
}

void    Venta::retirarProducto(){
    this -> productos.erase(this -> productos.end());
}

void    Venta::limpiar(){
    this -> productos.clear();
}

float   Venta::total(){
    float sum = 0;
    for (int i = 0; i < this -> productos.size(); ++i)
    {
        sum += this -> productos[i].getPrecio();
    }
    return sum;
}

float   Venta::saldo(){
    float sum = 0;
    for (int i = 0; i < this -> pagos.size(); ++i)
    {
        sum += this -> pagos[i].getPrecio();
    }
    return this -> total() - sum;
}

void    Venta::cancelar(){
    Pago pago;
    pago.setFecha(time(NULL));
    pago.setMonto(this -> saldo());
    this -> realizarPago(pago);
}

void    Venta::realizarPago(Pago pago){
    this -> pagos.push_back(pago);
}

void    Venta::realizarPago(float monto){
    Pago pago;
    pago.setFecha(time(NULL));
    pago.setMonto(monto);
    this -> realizarPago(pago);
}

bool    Venta::cancelada(){
    return this -> saldo() == 0.0;
}
