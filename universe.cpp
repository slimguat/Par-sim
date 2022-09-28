#include <iostream>
#include "universe.h"
#include "Eigen/Dense"
using namespace std;

universe::universe(Eigen::Vector3d G)
{
    this->G = G;
    this->time  = 0.0;
    this->times = Eigen::ArrayXd::Zero(100); 
    cout<<"universe created"<< endl
        <<"Gravity:"<< this->G[0] <<","<<this->G[1]<<","<<this->G[2] << endl
        <<"time now: " << this->time << endl
        <<"________________________________________________________________"<< endl;

}

universe::~universe()
{
    cout<<"universe destroyed"<<endl;
    list <particle>::iterator it;
    for ( it = all_particles->begin(); it!=all_particles->end(); it++)
    {
        it->~particle();
    }
    
}

void universe::add_particle(particle *particle)
{
    this->all_particles->push_back( *particle);
    cout<<"particle (ID="<<particle->ID<<") Have been added to the universe"<<endl
    <<"________________________________________________________________"<<endl;
};
