#include <iostream>
#include <vector>
#include <typeinfo>

std::string state1;
std::string state2;
std::vector<std::string> state_out; //Vector with the names of particles in the final state 
std::vector<std::string> state_in;  //Vector with the names of particles in the initial state
int counter{0};                     //Counter for the number of particles
int Nparticles;                    //Number of particles in the final state

void states(){

  std::cout << "***** Event generator *****\n";
  std::cout << "Particles are defined as:\n";
  
  std::cout << "Charged leptons and antileptons are: e- e+, mu- mu+, tau- tau+\n";

  std::cout << "Quarks and antiquarks are: u u~, d d~, c c~, s s~, t t~, b b~\n";

  std::cout << "Electronic, muonic and tauonic neutrinos are respectively: ve, vu, vt\n";

  std::cout << "Spin 1 bosons are: a, g, w+, w-, z\n";

  std::cout << "Higgs bosson is: h\n";

  //Enter the states
  std::cout << "Initial state\n";
  std::getline(std::cin, state1);
  std::cout << "Final state\n";
  std::getline(std::cin, state2);

  int len1 = state1.size();   //Number of characteres in the initial state
  int len2 = state2.size();   //Number of characteres in the final state

  //Counter for the particles in the final state
  for(int i = 0; i < len2; i++){
    if(state2[i] == ' '){
      counter += 1;
    }
  }
  
  if(state2[len2-1] == ' '){
    Nparticles = counter;
  }
  
  else{
    Nparticles = counter + 1;
    }

  //Resize the state vectors
  state_out.resize(Nparticles);
  state_in.resize(2);

  //Contruct the vector with the labels of particles in the initial state
  int count{0};
  for(int i = 0; i < 2; i++){
    for(int ii = count; ii < len1; ii++){
      
      if(state1[ii] == ' '){
	count += 1;
	break;
      }
      
      state_in[i] += state1[ii];
      count += 1;
}
  }

  //Contruct the vector with the labels of particles in the final state
  count = 0;
  for(int i = 0; i < Nparticles; i++){
    for(int ii = count; ii < len2; ii++){
      
      if(state2[ii] == ' '){
	count += 1;
	break;
      }
      
      state_out[i] += state2[ii];
      count += 1;
}
  }
}
