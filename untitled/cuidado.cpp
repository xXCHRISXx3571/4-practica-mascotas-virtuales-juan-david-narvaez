//
// Created by chris on 28/03/2025.
//
#include "cuidado.h"

 Cuidado::Cuidado(std::string _estado,std::string _dia, std::string _tipo_cuidado, std::string _salud_antes, std::string _salud_despues){
 estado = _estado;
 dia = _dia;
 tipo_cuidado = _tipo_cuidado;
 salud_antes = _salud_antes;
 salud_despues = _salud_despues;

 }
 std::string Cuidado::getDia(){
   return dia;
 }
 std::string Cuidado::getTipoCuidado(){
   return tipo_cuidado;
 }
 std::string Cuidado::getSalud_Antes(){
   return salud_antes;
 }
 std::string Cuidado::getSalud_Despues(){
   return salud_despues;
 }
