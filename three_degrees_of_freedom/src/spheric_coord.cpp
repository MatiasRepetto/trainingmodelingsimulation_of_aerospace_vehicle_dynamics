#include "../include/spheric_coord.h"
#include <cmath>


spheric_coord::spheric_coord(){

}

void spheric_coord::setsphericcoord(float r, float phi, float psi){
    this->radial_dist = r;
    this->polar_angle = phi;
    this->azimuthal_angle = psi;
}

float spheric_coord::getradialdist(){
    return this->radial_dist;
}

float spheric_coord::getpolarangle(){
    return this->polar_angle;
}

float spheric_coord::getazimuthalangle(){
    return this->azimuthal_angle;
}

cartesian_coord* spheric_coord::converttocartesian(spheric_coord* spcoord){
    float r, p, o, x, y, z;
    cartesian_coord* auxcart = new cartesian_coord();
    r = spcoord->getradialdist();
    p = spcoord->getpolarangle();
    o = spcoord->getazimuthalangle();
    x = r*sin(o)*cos(p);
    y = r*sin(o)*sin(p);
    z = r*cos(o);
    auxcart->setcartesian_coord(x, y, z);
    return auxcart;
}

cylindric_coord* spheric_coord::converttocylindric(spheric_coord* auxspe){
    float r, p, o, x, y, z;
    cylindric_coord* auxcyl = new cylindric_coord();
    r = auxspe->getradialdist();
    p = auxspe->getpolarangle();
    o = auxspe->getazimuthalangle();
    x = r*sin(o);
    y = p;
    z = r*cos(o);
    auxcyl->setcylindriccoord(x, y, z);
    return auxcyl;
}

spheric_coord::~spheric_coord(){
    delete this;
}