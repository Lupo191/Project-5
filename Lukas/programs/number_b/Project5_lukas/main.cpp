/*
 *
 *
 * */
#include <iostream>
#include <fstream>
#include <cmath>
#include "planet.h"
#include "solarsystem.h"
#include <armadillo>

using namespace arma;
using namespace std;

int main()
{
    solarsystem mysystem;
    Planet p1(0,0,0,0,0,0,0,0,0,1) ;
    Planet p2(1,0,0,0,6,0,0,0,0,0.000001);
    mysystem.addplanet(p1);
    mysystem.addplanet(p2);
    mysystem.VelocityVerlet(0.001,1000);
    //mysystem.RungeKuttamethod(0.001,1000);
}



