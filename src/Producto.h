#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#include <string>
using std::string;


class Producto
{
private:
    long int ref;
    string nombre;
    float precio;

public:
    Producto();
    Producto(long int ref, string nombre, float precio);
    ~Producto();
    
    const long int  getRef();
    const string    getNombre();
    const float     getPrecio();

    void            setRef(long int ref);
    void            setNombre(string nombre);
    void            setPrecio(float precio);

    float           calcularIVA();
    float           calcularIVA(float porcentaje);
};

#endif /* PRODUCTO_H_ */