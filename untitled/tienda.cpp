//
// Created by chris on 28/03/2025.
//
#include "Tienda.h"
#include <iostream>

Tienda::Tienda() {}

void Tienda::agregarObjeto(Objeto objeto) {
    objetosDisponibles.push_back(objeto);
}

void Tienda::mostrarObjetos() {
    std::cout << "Objetos en la tienda:\n";
    for (const Objeto &obj : objetosDisponibles) {
        std::cout << "- " << obj.getNombre() << " (" << obj.getTipo() << "): " << obj.getEfecto() << std::endl;
    }
}

bool Tienda::venderObjeto(Objeto objeto, Usuario &usuario) {
    for (size_t i = 0; i < objetosDisponibles.size(); i++) {
        if (objetosDisponibles[i].getNombre() == objeto.getNombre()) {
            objetosDisponibles.erase(objetosDisponibles.begin() + i);
            return true;
        }
    }
    return false;
    }