#include "usuario.h"
#include <iostream>

Usuario::Usuario(std::string _nombre) {
    nombre = _nombre;
}

void Usuario::adoptarMascota(const mascota& nuevaMascota) {
    mascotas.push_back(nuevaMascota);
    std::cout << nombre << " ha adoptado a " << nuevaMascota.getNombre() << " 🐾" << std::endl;
}

void Usuario::mostrarMascotas() const{
    std::cout << "Mascotas de " << nombre << ":" << std::endl;
    for (const mascota& m : mascotas) {
        std::cout << "- " << m.getNombre() << " (Edad: " << m.getEdad() << ", Energía: " << m.getEnergia() << ")" << std::endl;
    }
}

std::string Usuario::getNombre() const {   // Añadimos const aquí
    return nombre;
}

