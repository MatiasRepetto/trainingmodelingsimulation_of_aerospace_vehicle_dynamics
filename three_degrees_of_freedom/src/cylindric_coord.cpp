#include "../include/cylindric_coord.h"
#include <cmath>

cylindric_coord::cylindric_coord(){

}

void cylindric_coord::setcylindriccoord(float r, float phi, float z){
    this->radial = r;
    this->polar_angle = phi;
    this->z = z;
}

float cylindric_coord::getradialdistc(){
    return this->radial;
}

float cylindric_coord::getpolaranglec(){
    return this->polar_angle;
}

float cylindric_coord::getZ(){
    return this->z;
}

cartesian_coord* cylindric_coord::converttocartesian(cylindric_coord* auxcyl){
    float x, y, z, r, phi, ze;
    cartesian_coord* auxcart = new cartesian_coord();
    r = auxcyl->getradialdistc();
    phi = auxcyl->getpolaranglec();
    ze = auxcyl->getZ();
    x = r*cos(phi);
    y = r*sin(phi);
    z = ze;
    auxcart->setcartesian_coord(x, y, z);
    return auxcart;
}

spheric_coord* cylindric_coord::converttospheric(spheric_coord* auxspe){
    float p, tht, psi, r, phi, z;
    spheric_coord* auxcart = new spheric_coord();
    r = auxspe->getradialdist();
    phi = auxspe->getpolarangle();
    z = auxspe->getazimuthalangle();
    p = sqrt((r*r)+(z*z));
    tht = phi;
    psi = acos((z/p));
    auxspe->setsphericcoord(p, tht, psi);
    return auxspe;
}

cylindric_coord::~cylindric_coord(){
    delete this;
}