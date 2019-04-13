#include <iostream>
#include <vector>
#include <typeinfo>
#include <string>

void spin_check(){
  
  float sum_spin1{0};
  float sum_spin2{0};

  for(int i = 0; i < 2; i++){
    sum_spin1 += map(state_in[i]).spin;
  }

  for(int i = 0; i < Nparticles; i++){
    sum_spin2 += map(state_out[i]).spin;
  }

  if(sum_spin1 != sum_spin2){
    std::cout << "The process violates spin conservation" << std::endl;
    exit(0);
  }
}

void charge_check(){
  float sum_charge1{0};
  float sum_charge2{0};

  for(int i = 0; i < 2; i++){
    sum_charge1 += map(state_in[i]).charge;
  }

  for(int i = 0; i < Nparticles; i++){
    sum_charge2 += map(state_out[i]).charge;
  }

  if(sum_charge1 != sum_charge2){
    std::cout << "The process violates charge conservation" << std::endl;
    exit(0);
  }
}

void kin_check(float E1, float E2){
  float en_in = E1 + E2;
  float sum_mass{0};

  for(int i = 0; i < Nparticles; i++){
    sum_mass += map(state_out[i]).mass;
  }

  if(en_in < sum_mass){
    std::cout << "The process is kinematically forbidden" << std::endl;
    exit(0);
  }
}
