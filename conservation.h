#include <iostream>
#include <vector>
#include <typeinfo>
#include <string>

//Spin conservation
void spin_check(){
  
  float sum_spin1{0};   //Total initial spin
  float sum_spin2{0};   //Total final spin

  //Initial states always have two particles
  for(int i = 0; i < 2; i++){
    sum_spin1 += map(state_in[i]).spin;
  }

  //Nparticles is calculated by states_constructor, is the number of particles in the final state
  for(int i = 0; i < Nparticles; i++){
    sum_spin2 += map(state_out[i]).spin;
  }

  //Spin check, if is violated kill the process
  if(sum_spin1 != sum_spin2){
    std::cout << "The process violates spin conservation" << std::endl;
    exit(0);
  }
}

//Charge conservation
void charge_check(){
  
  float sum_charge1{0};    //Total initial charge
  float sum_charge2{0};    //Total final charge

  //Initial states always have two particles
  for(int i = 0; i < 2; i++){
    sum_charge1 += map(state_in[i]).charge;
  }

  //Nparticles is calculated by states_constructor, is the number of particles in the final state
  for(int i = 0; i < Nparticles; i++){
    sum_charge2 += map(state_out[i]).charge;
  }
  
  //Spin check, if is violated kill the process
  if(sum_charge1 != sum_charge2){
    std::cout << "The process violates charge conservation" << std::endl;
    exit(0);
  }
}

//Check that E1 + E2 > sum of masses in the final state
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
