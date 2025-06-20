#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    Persona(const std::string& nombre, int edad);
    std::string getNombre() const;
    int getEdad() const;
    void setNombre(const std::string& nombre);
    void setEdad(int edad);
};

#endif
