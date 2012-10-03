#include "Vendedor.h"

Vendedor::Vendedor(){
}

Vendedor::Vendedor(Persona persona){
    setId(persona.getId());
    setNombre(persona.getNombre());
    setApellido(persona.getApellido());
    setTelefono(persona.getTelefono());
    setEmail(persona.getEmail());

}

Vendedor::Vendedor(string id, string nombre, string apellido){
    setId(id);
    setNombre(nombre);
    setApellido(apellido);
}

Vendedor::~Vendedor(){
}

vector<Venta>   Vendedor::getVentas(){
    return this -> ventas;
}

void            Vendedor::setVentas(vector<Venta> ventas){
    this -> ventas = ventas;
}

void            Vendedor::realizarVenta(const Venta& venta){
    this -> ventas.push_back(venta);
}

float           Vendedor::totalVentas(){
    float total = 0;
    for (
        vector<Venta>::iterator venta = this -> ventas.begin(); 
        venta != this -> ventas.end() ; 
        ++venta
    )
    {
        total += venta -> total();
    }
    return total;
}

float           Vendedor::totalIngresos(){
    float ingresos = 0;
    for (
        vector<Venta>::iterator venta = this -> ventas.begin(); 
        venta != this -> ventas.end(); 
        ++venta
    )
    {
        vector<Pago> pagos = venta -> getPagos();
        for (
            vector<Pago>::iterator pago = pagos.begin(); 
            pago != pagos.end(); 
            ++pago
        )
        {
            ingresos += pago -> getMonto();
        }
    }
    return ingresos;
}
