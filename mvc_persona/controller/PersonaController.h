#ifndef PERSONACONTROLLER_H
#define PERSONACONTROLLER_H

#include "../model/Persona.h"
#include "../view/PersonaView.h"

class PersonaController {
private:
    Persona persona;
    PersonaView vista;

public:
    PersonaController(const Persona& persona, const PersonaView& vista);
    void actualizarVista();
    void setNombre(const std::string& nombre);
    void setEdad(int edad);
};

#endif