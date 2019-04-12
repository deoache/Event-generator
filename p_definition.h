#include <iostream>

struct particle
{
  float m;
  float q;
  float s;
  float E;
  };

//Masses in GeV/c^2, electric charges in e units

particle ep = {5e-4, +1, 0.5, 0};
particle em = {5e-4, -1, 0.5, 0};

particle mup = {0.105, +1, 0.5, 0};
particle mum = {0.105, -1, 0.5, 0};

particle taup = {1.777, +1, 0.5, 0};
particle taum = {1.777, -1, 0.5, 0};

particle h = {125, 0, 0, 0};

particle u = {3e-2, 2/3., 0.5, 0};
particle ub = {3e-2, -2/3., 0.5, 0};

particle d = {7e-2, -1/3., 0.5, 0};
particle db = {7e-2, 1/3., 0.5, 0};

particle s = {0.12, -1/3., 0.5, 0};
particle sb = {0.12, 1/3., 0.5, 0};

particle c = {1.2, 2/3., 0.5, 0};
particle cb = {1.2, -2/3., 0.5, 0};

particle t = {174, 2/3., 0.5, 0};
particle tb = {174, -2/3., 0.5, 0};

particle b = {4.3, -1/3., 0.5, 0};
particle bb = {4.3, 1/3., 0.5, 0};

particle ve = {0, 0, 0.5, 0};
particle vu = {0, 0, 0.5, 0};
particle vt = {0, 0, 0.5, 0};

particle a = {0, 0, 1, 0};
particle g = {0, 0, 1, 0};

particle wp = {0.0804, +1, 1, 0};
particle wm = {0.0804, -1, 1, 0};
particle z = {0.0919, 0, 1, 0};
