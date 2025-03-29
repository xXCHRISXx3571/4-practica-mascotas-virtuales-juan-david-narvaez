//
// Created by chris on 28/03/2025.
//

#ifndef HABILIDAD_H
#define HABILIDAD_H
#include <string>
class Habilidad{
  private:
    std::string name;
    std::string desc;
    int XP;
  public:
    Habilidad(std::string _name, std::string _desc, int _XP);
  std::string getNombre();
  std::string getDesc();
  int getXP();
};
#endif //HABILIDAD_H
