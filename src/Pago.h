#ifndef PAGO_H_
#define PAGO_H_

#include <chrono>
using std::chrono::time_point;

class Pago
{
private:
    time_point fecha;
    float monto;

public:
    Pago();
    Pago(float monto);
    Pago(time_point fecha, float monto);
    ~Pago();

    const time_point    getFecha();
    const float         getMonto();

    void                setFecha(time_point fecha);
    void                setMonto(float monto);
};

#endif /* PAGO_H_ */