#include "Cliente.h"

Cliente::Cliente(){
}

Cliente::Cliente(Persona persona){
    this -> persona = persona;
}

Cliente::Cliente(string id, string nombre, string apellido){
    this -> id = id;
    this -> nombre = nombre;
    this -> apellido = apellido;
}

Cliente::~Cliente(){
}