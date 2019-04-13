#include "particle_content.h"       //Particle definitions
#include "states_constructor.h"     //Returns an initial and final state vector named state_in and state_out
#include "conservation.h"           //Checks the conservation of spin and charge and E1 + E2 > m1 + m2 + m3 +...+
#include <iostream>
#include <vector>
#include <string>

float E1{6500};  //Beam 1 energy
float E2{6500};  //Beam 2 energy

int main(){
  
  states();           //Ask for the states and return the vectors state_in and state_out
   
  spin_check();       //Check that the process conserves spin
  charge_check();     //Check that the process conserves charge
  kin_check(E1, E2);  //Check that the process is kinematically allowed

  particle pi_1 = map(state_in[0]);   //Initial particle 1
  particle pi_2 = map(state_in[1]);   //Initial particle 2

  pi_1.energy = E1;                   //Initializes the energy of initial particle 1
  pi_2.energy = E2;                   //Initializes the energy of initial particle 2
}

