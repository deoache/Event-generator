#include "particle_content.h"       //Particle definitions
#include "states_constructor.h"     //Returns an initial and final state vector named state_in and state_out
#include "conservation.h"           //Checks the conservation of spin and charge and E1 + E2 > m1 + m2 + m3 +...+
#include <iostream>
#include <vector>
#include <string>

float E1{6500};  //Beam 1 energy
float E2{6500};  //Beam 2 energy

int main(){
  
  states();
  map(state_in[0]).energy = E1;
  map(state_in[1]).energy = E2;
  
  spin_check();
  charge_check();
  kin_check(E1, E2);
  
}

