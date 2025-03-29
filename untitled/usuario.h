#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include "mascota.h"

class Usuario {
private:
    std::string nombre;
    std::vector<mascota> mascotas;

public:
    Usuario(std::string _nombre);

    void adoptarMascota(const mascota& nuevaMascota);
    void mostrarMascotas() const;
    std::string getNombre() const;
};

#endif
