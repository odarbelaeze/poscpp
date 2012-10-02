#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>
using std::string;

class Persona
{
private:
    string  id, nombre, apellido, telefono, email;

public:
    Persona();
    Persona(string id, string nombre, string apellido);
    ~Persona();

    const string getId();
    const string getNombre();
    const string getApellido();
    const string getTelefono();
    const string getEmail();

    void setId(string id);
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setTelefono(string telefono);
    void setEmail(string email);

    string nombreCompleto();
};

#endif /* PERSONA_H_ */