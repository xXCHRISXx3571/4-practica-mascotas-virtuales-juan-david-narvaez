//
// Created by chris on 28/03/2025.
//
#include"objeto.h"
 Objeto::Objeto(std::string _nombre, std::string _tipo, std::string _efecto) {
     nombre = _nombre;
     tipo = _tipo;
     efecto = _efecto;
 }
std::string Objeto::getNombre() const{
     return nombre;
 }
std::string Objeto::getTipo() const{
     return tipo;
 }
std::string Objeto::getEfecto() const{
     return efecto;
 }