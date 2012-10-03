#include "Cliente.h"

Cliente::Cliente(){
}

Cliente::Cliente(Persona persona){
    this -> id = persona.getId();
    this -> nombre = persona.getNombre();
    this -> apellido = persona.getApellido();
    this -> telefono = persona.getTelefono();
    this -> email = persona.getEmail();
}

Cliente::Cliente(string id, string nombre, string apellido){
    this -> id = id;
    this -> nombre = nombre;
    this -> apellido = apellido;
}

Cliente::~Cliente(){
}


const vector<Venta> Cliente::getCompras(){
    return this -> compras;
}

const float         Cliente::getLimiteCredito(){
    return this -> limite_credito;
}


void    Cliente::setCompras(vector<Venta> compras){
    this -> compras = compras;
}

void    Cliente::setLimiteCredito(float limite_credito){
    this -> limite_credito = limite_credito;
}

void    Cliente::extenderCredito(float extension){
    this -> limite_credito += extension;
}

void    Cliente::realizarCompra(const Venta& compra){
    this -> compras.push_back(compra);
}

void    Cliente::pagar(const Venta& compra, float monto){
    find(this -> compras.begin(), this -> compras.end(), compra) -> realizarPago(monto);
}

void    Cliente::cancelar(){
    for (vector<Venta>::iterator compra = compras.begin(); compra != compras.end(); ++compra)
    {
        compra -> cancelar();
    }
}

void    Cliente::cancelar(const Venta& compra){
    find(this -> compras.begin(), this -> compras.end(), compra) -> cancelar();
}

void    Cliente::cancelar(int ref_compra){
    (this -> compras.begin() + ref_compra) -> cancelar();
    //this -> compras[i].cancelar();
}

float   Cliente::saldo(){
    float sum = 0;
    for (vector<Venta>::iterator compra = compras.begin(); compra != compras.end(); ++compra)
    {
        sum += compra -> saldo();
    }
    return sum;
}
