#include "PersonaController.h"

PersonaController::PersonaController(const Persona& persona, const PersonaView& vista)
    : persona(persona), vista(vista) {}

void PersonaController::actualizarVista() {
    vista.mostrarPersona(persona.getNombre(), persona.getEdad());
}

void PersonaController::setNombre(const std::string& nombre) {
    persona.setNombre(nombre);
}

void PersonaController::setEdad(int edad) {
    persona.setEdad(edad);
}