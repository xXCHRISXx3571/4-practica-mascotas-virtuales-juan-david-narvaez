//
// Created by chris on 28/03/2025.
//
#include "mascota.h"
#include <iostream>
mascota::mascota(std::string _nombre, int _edad, int _energia,
                 int _salud, std::string _estadoEmocional, int _experiencia){
   nombre = _nombre;
    edad = _edad;
    energia = 100;
    salud = 100;
    estadoEmocional = "feliz";
    experiencia = 0;
}

std::string mascota::getNombre() const{
    return nombre;
}

int mascota::getEdad() const{
    return edad;
}

int mascota::getEnergia() const{
    return energia;
}

int mascota::getSalud() const {
    return salud;
}

std::string mascota::getEstadoEmocional() {
    return estadoEmocional;
}

int mascota::getExperiencia() const{
    return experiencia;
}

void mascota::mostrarEstado() const{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Energía: " << energia << std::endl;
    std::cout << "Salud: " << salud << std::endl;
    std::cout << "Estado emocional: " << estadoEmocional << std::endl;
    std::cout << "Experiencia: " << experiencia << std::endl;
}

