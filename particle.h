#pragma once
#include <iostream>
#include <list> 
#include "Eigen/Dense"

// #include "history.h"
class particle{
    public:
        int             ID;
        double          Mass;
        Eigen::Vector3d Position;
        Eigen::Vector3d Velocity;
        Eigen::MatrixXd HisVel;
        Eigen::MatrixXd HisPos;
        Eigen::ArrayXd  time ;
        int frame = 0
        // history History;
        particle(double Mass, int ID, Eigen::Vector3d Position, Eigen::Vector3d Velocity);
        ~particle();
        
        void save_new_time_frame();
};