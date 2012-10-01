#include "Producto.h"

Producto::Producto(){

}

Producto::Producto(long int ref, string nombre, float precio){
    this -> ref = ref;
    this -> nombre = nombre;
    this -> precio = precio;
}

Producto::~Producto(){

}

const long int  Producto::getRef(){
    return this -> ref;
}

const string    Producto::getNombre(){
    return this -> nombre;
}

const float     Producto::getPrecio(){
    return this -> precio;
}

void            Producto::setRef(long int ref){
    this -> ref = ref;
}

void            Producto::setNombre(string nombre){
    this -> nombre = nombre;
}

void            Producto::setPrecio(float precio){
    this -> precio = precio;
}

float           Producto::calcularIVA(){
    return this -> precio * 0.16;
}

float           Producto::calcularIVA(float porcentaje){
    return this -> precio * porcentaje;
}
