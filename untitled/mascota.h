//
// Created by chris on 28/03/2025.
//

#ifndef MASCOTA_H
#define MASCOTA_H
#include <string>
class mascota {
  private:
    std::string nombre;
    int edad;
    int energia;
    int salud;
    std::string estadoEmocional;
    int experiencia;
  public:
    mascota(std::string _nombre, int _edad, int _energia,int _salud, std::string _estadoEmocional, int _experiencia);
    std::string getNombre() const;
    int getEdad() const;
    int getEnergia() const;
    int getExperiencia() const;
    int getSalud() const;
    std::string getEstadoEmocional();
    void mostrarEstado() const;
};
#endif //MASCOTA_H
