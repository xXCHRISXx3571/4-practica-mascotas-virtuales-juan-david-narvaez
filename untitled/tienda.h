#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include "objeto.h"
#include "usuario.h"

class Tienda {
private:
    std::vector<Objeto> objetosDisponibles;

public:
    Tienda();
    void agregarObjeto(Objeto objeto);
    void mostrarObjetos();
    bool venderObjeto(Objeto objeto, Usuario &usuario);
};

#endif