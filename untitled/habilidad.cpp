//
// Created by chris on 28/03/2025.
//
#include "habilidad.h"

Habilidad::Habilidad(std::string _name, std::string _desc, int _XP) {
    name = _name;
    desc = _desc;
    XP = _XP;
}

std::string Habilidad::getNombre() {
    return name;
}
std::string Habilidad::getDesc() {
    return desc;
}
int Habilidad::getXP() {
    return XP;
}