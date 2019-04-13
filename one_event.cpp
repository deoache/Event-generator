#include "particle_content.h"
#include "states_constructor.h"
#include <iostream>
#include <vector>
#include <typeinfo>
#include <string>

float E1{6500};
float E2{6500};

int main(){
  
  states();

  float sum_spin1{0};
  float sum_spin2{0};

  for(int i = 0; i < 2; i++){
    sum_spin1 += map(state_in[i]).spin;
  }

  for(int i = 0; i < Nparticles; i++){
    sum_spin2 += map(state_out[i]).spin;
  }

  if(sum_spin1 != sum_spin2){
    std::cout << "The process is not possible" << std::endl;
    exit(0);
  }

  else{
    std::cout << "The process is possible" << std::endl;
  }

  //std::cout << map(str).mass << std::endl;
  
  /*int Nf;

  std::cout << "Number of particles in the final state\n";
  std::cin >> Nf;

  state_in.resize(2);
  state_out.resize(Nf);

  std::cout << "Particles in the initial state\n";

  for(int i = 0; i < 2; i++){
    std::cin >> state_in[i];
  }

  std::cout << "Particles in the final state\n";
  
  for(int i = 0; i < Nf; i++){
    std::cin >> state_out[i];
  }

  for(int i = 0; i < Nf; i++){
  std::cout << map(state_out[i]).mass << std::endl;}*/
  
}

