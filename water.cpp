#include "molecule.hpp"

using namespace std;

int main()
{
  Molecule h2o(3, 0);

  h2o.zvals[0] = 8.0;
  h2o.geom[0][0] =  0.000000000000;
  h2o.geom[0][1] =  0.000000000000;
  h2o.geom[0][2] = -0.122368916506;
  h2o.zvals[1] = 1.0;
  h2o.geom[1][0] =  0.000000000000;
  h2o.geom[1][1] =  1.414995841403;
  h2o.geom[1][2] =  0.971041753535;
  h2o.zvals[2] = 1.0;
  h2o.geom[2][0] =  0.000000000000;
  h2o.geom[2][1] = -1.414995841403;
  h2o.geom[2][2] =  0.971041753535;

  h2o.print_geom();
  h2o.translate(5, 0, 0);
  h2o.print_geom();

  return 0;
}
