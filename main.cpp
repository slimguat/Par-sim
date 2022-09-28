#include <iostream>
#include <cstdio> //No need for this lib I think 
#include <cstring>//No need for this lib I think 
#include <cstdlib>//No need for this lib I think 
#include "Eigen/Dense"

#include "particle.h"
#include "universe.h"
using namespace std;





/* Main */
int main()
{
    double mass = 1.;
    int ID   = 0;
    Eigen::Vector3d position1; position1<< 0,0,0;
    Eigen::Vector3d position2; position2<< 1,0,0;
    Eigen::Vector3d velocity; velocity<< 0,0,0;
    Eigen::Vector3d G       ; G       << 1,0,0;

    particle A(mass,0,position1,velocity);
    particle B(mass,1,position2,velocity);
    universe uni(G);

    uni.add_particle( &A );
    uni.add_particle( &B );
    
    ;
    return 0;
}