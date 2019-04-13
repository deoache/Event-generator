#include <iostream>
#include <vector>
#include <typeinfo>

std::string state1;
std::string state2;
std::vector<std::string> state_out;
std::vector<std::string> state_in;
int counter{0};
int Nparticles;

void states(){
   
  std::cout << "Initial state\n";
  std::getline(std::cin, state1);
  std::cout << "Final state\n";
  std::getline(std::cin, state2);

  int len1 = state1.size();
  int len2 = state2.size();
  
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
  
  state_out.resize(Nparticles);
  state_in.resize(2);

  char state_i[2]{'s'};
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

  char state_f[len2-counter]{'s'};
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
