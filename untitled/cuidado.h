//
// Created by chris on 28/03/2025.
//

#ifndef CUIDADO_H
#define CUIDADO_H
#include<string>
 class Cuidado {
    private:
    std::string estado;
    std::string dia;
    std::string tipo_cuidado;
    std::string salud_antes;
    std::string salud_despues;

   public:
     Cuidado(std::string _estado,std::string _dia, std::string _tipo_cuidado, std::string _salud_antes, std::string _salud_despues);
    std::string getEstado();
    std::string getDia();
    std::string getTipoCuidado();
    std::string getSalud_Antes();
    std::string getSalud_Despues();
    };


#endif //CUIDADO_H
