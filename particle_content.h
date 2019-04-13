#include <map>
#include <iostream>

//Particles definition
struct particle
{
  float mass;             //Particle mass
  float charge;           //Electric charge
  float spin;             //Spin
  float energy;           //Energy
  };

//Masses in GeV, electric charges in e- units
//Charged leptons
particle ep{5e-4, +1, 0.5, 0};
particle em{5e-4, -1, 0.5, 0};

particle mup{0.105, +1, 0.5, 0};
particle mum{0.105, -1, 0.5, 0};

particle taup{1.777, +1, 0.5, 0};
particle taum{1.777, -1, 0.5, 0};

//Higgs
particle h{125, 0, 0, 0};

//Quarks
particle u{3e-2, 2/3., 0.5, 0};
particle ub{3e-2, -2/3., 0.5, 0};

particle d{7e-2, -1/3., 0.5, 0};
particle db{7e-2, 1/3., 0.5, 0};

particle s{0.12, -1/3., 0.5, 0};
particle sb{0.12, 1/3., 0.5, 0};

particle c{1.2, 2/3., 0.5, 0};
particle cb{1.2, -2/3., 0.5, 0};

particle t{174, 2/3., 0.5, 0};
particle tb{174, -2/3., 0.5, 0};

particle b{4.3, -1/3., 0.5, 0};
particle bb{4.3, 1/3., 0.5, 0};

//Neutrinos
particle ve{0, 0, 0.5, 0};
particle vu{0, 0, 0.5, 0};
particle vt{0, 0, 0.5, 0};

//Vectorial bosons
particle a{0, 0, 1, 0}; //Photon
particle g{0, 0, 1, 0}; //Gluon

particle wp{0.0804, +1, 1, 0}; //W+
particle wm{0.0804, -1, 1, 0}; //W-
particle z{0.0919, 0, 1, 0};   //Z

//Function to map a string name into a variable name
particle map(std::string p_name){
  std::map<std::string,particle> p_map;
  p_map["e+"] = ep;
  p_map["e-"] = em;
  p_map["mu+"] = mup;
  p_map["mu-"] = mum;
  p_map["tau+"] = taup;
  p_map["tau-"] = taum;
  
  p_map["h"] = h;
  
  p_map["u"] = u;
  p_map["u~"] = ub;
  p_map["d"] = d;
  p_map["d~"] = db;
  p_map["c"] = c;
  p_map["c~"] = cb;
  p_map["s"] = s;
  p_map["s~"] = sb;
  p_map["t"] = t;
  p_map["t~"] = tb;
  p_map["b"] = b;
  p_map["b~"] = bb;
  
  p_map["a"] = a;
  p_map["g"] = g;
  
  p_map["w-"] = wm;
  p_map["w+"] = wp;
  p_map["z"] = z;

  p_map["ve"] = ve;
  p_map["vu"] = vu;
  p_map["vt"] = vt;
  
  return p_map[p_name];
}

