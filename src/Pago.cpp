#include "Pago.h"

Pago::Pago(){

}

Pago::Pago(float monto){
	this -> monto = monto;
}

Pago::Pago(time_point fecha, float monto){
	this -> fecha = fecha;
	this -> monto = monto;
}

Pago::~Pago(){

}

const time_point    Pago::getFecha(){
	return this -> fecha;
}

const float         Pago::getMonto(){
	return this -> monto;
}

void                Pago::setFecha(time_point fecha){
	this -> fecha = fecha;
}

void                Pago::setMonto(float monto){
	this -> monto = monto;
}
