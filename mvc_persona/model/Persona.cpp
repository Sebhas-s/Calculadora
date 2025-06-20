#include "Persona.h"

Persona::Persona(const std::string& nombre, int edad)
    : nombre(nombre), edad(edad) {}

std::string Persona::getNombre() const {
    return nombre;
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}