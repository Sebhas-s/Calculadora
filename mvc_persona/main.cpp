#include "model/Persona.h"
#include "view/PersonaView.h"
#include "controller/PersonaController.h"

int main() {
    Persona modelo("Stefany", 22);
    PersonaView vista;
    PersonaController controlador(modelo, vista);

    controlador.actualizarVista();

    controlador.setNombre("María");
    controlador.setEdad(25);
    controlador.actualizarVista();

    return 0;
}