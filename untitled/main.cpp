#include <iostream>
#include "usuario.h"
#include "mascota.h"
#include "objeto.h"
#include "tienda.h"

int main() {

    Tienda tienda;
    tienda.agregarObjeto(Objeto("Galleta mágica", "snack", "Recupera energía"));
    tienda.agregarObjeto(Objeto("Juguete divertido", "juguete", "Mejora el estado emocional"));
    tienda.agregarObjeto(Objeto("Poción curativa", "poción", "Restaura salud"));
    tienda.mostrarObjetos();
    std::cout << std::endl;
    Usuario usuario("Chris");
    mascota m1("Luna", 2, 90, 100, "feliz", 30);
    mascota m2("Max", 1, 80, 90, "contento", 15);
    usuario.adoptarMascota(m1);
    usuario.adoptarMascota(m2);
    std::cout << std::endl;
    usuario.mostrarMascotas();
    Objeto objetoComprado("Poción curativa", "poción", "Restaura salud");
    bool vendido = tienda.venderObjeto(objetoComprado, usuario);
    std::cout << std::endl;
    if (vendido) {
        std::cout << usuario.getNombre() << " compró una " << objetoComprado.getNombre() << "." << std::endl;
    } else {
        std::cout << "El objeto no está disponible en la tienda." << std::endl;
    }
    std::cout << std::endl << "Objetos restantes en la tienda:" << std::endl;
    tienda.mostrarObjetos();return 0;
}