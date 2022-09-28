#pragma once
#include <iostream>
#include <list>
#include "Eigen/Dense"

#include "particle.h"

using namespace std;

class universe
{
public:
    list<particle>* all_particles;
    Eigen::Vector3d G;
    double time = 0.; 
    Eigen::ArrayXd times;

    universe(Eigen::Vector3d G);
    ~universe();
    void add_particle(particle *particle);
};


