
#include "particle.h"

#include "Eigen/Dense"
#include "iostream"
using namespace std;

particle::particle(double Mass, int ID, Eigen::Vector3d Position, Eigen::Vector3d Velocity){
    this->ID = ID;
    this->Mass = Mass;
    this->Position = Position;
    this->Velocity = Velocity;
    cout<<"particle initiated"<<endl
        <<"ID:" << (this->ID) <<endl
        <<"Position:" <<this->Position[0]<<","<<this->Position[1]<<","<<this->Position[2]<<endl
        <<"Velocity:" <<this->Velocity[0]<<","<<this->Velocity[1]<<","<<this->Velocity[2]<<endl
        <<"________________________________________________________________"<<endl;
    
};
particle::~particle(){
    cout<<"particle (ID= "<<this-> ID<<") annihilated"<<endl;
};

void particle::save_new_time_frame(){
    this->Position
}