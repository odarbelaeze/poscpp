#ifndef PAGO_H_
#define PAGO_H_

#include <ctime>

class Pago
{
private:
    time_t fecha;
    float monto;

public:
    Pago();
    Pago(float monto);
    Pago(time_t fecha, float monto);
    ~Pago();

    const time_t    getFecha();
    const float         getMonto();

    void                setFecha(time_t fecha);
    void                setMonto(float monto);
};

#endif /* PAGO_H_ */