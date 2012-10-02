#include "Persona.h"

Persona::Persona(){
}

Persona::Persona(string id, string nombre, string apellido){
	this -> id = id;
	this -> nombre = nombre;
	this -> apellido = apellido;
}

Persona::~Persona(){
}

const string Persona::getId(){
	return this -> id;
}

const string Persona::getNombre(){
	return this -> nombre;
}

const string Persona::getApellido(){
	return this -> apellido;
}

const string Persona::getTelefono(){
	return this -> telefono;
}

const string Persona::getEmail(){
	return this -> email;
}

void Persona::setId(string id){
	this -> nombre = nombre;
}

void Persona::setNombre(string nombre){
	this -> nombre = nombre;
}

void Persona::setApellido(string apellido){
	this -> apellido = apellido;
}

void Persona::setTelefono(string telefono){
	this -> telefono = telefono;
}

void Persona::setEmail(string email){
	this -> email = email;
}

string Persona::nombreCompleto(){
	return this -> nombre + " " + apellido;
}
