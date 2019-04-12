#include "p_definition.h"
#include <iostream>

std::string p_name;

int main(){
  std::cin >> p_name;
  std::cout << map(p_name).mass << std::endl;
}
