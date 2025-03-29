//
// Created by chris on 28/03/2025.
//

#ifndef OBJETO_H
#define OBJETO_H
#include<string>
class Objeto{
   private:
     std::string nombre;
     std::string tipo;
     std::string efecto;
    public:
      Objeto(std::string _nombre, std::string _tipo, std::string _efecto);
    std::string getNombre() const;
    std::string getTipo() const;
    std::string getEfecto() const;
};
#endif //OBJETO_H
