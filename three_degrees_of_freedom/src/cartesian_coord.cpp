#include "../include/cartesian_coord.h"
#include <cmath>


cartesian_coord::cartesian_coord(){
}

void cartesian_coord::setcartesian_coord(float x, float y, float z){
    this->x = x;
    this->y = y;
    this->z = z;
}

float cartesian_coord::getcoordX(){
    return this->x;
}

float cartesian_coord::getcoordY(){
    return this->y;
}

float cartesian_coord::getcoordZ(){
    return this->z;
}

spheric_coord* cartesian_coord::converttospheric(cartesian_coord* ctcoord){
    float r, phi, psi, x, y, z;
    spheric_coord* auxspe = new spheric_coord();
    x = ctcoord->getcoordX();
    y = ctcoord->getcoordY();
    z = ctcoord->getcoordZ();
    r = sqrt((x*x)+(y*y)+(z*z));
    phi = atan((y/x));
    psi = acos((z/r));
    auxspe->setsphericcoord(r, phi, psi);
    return auxspe;
}

cylindric_coord* cartesian_coord::converttocylindirc(cartesian_coord* auxcart){
    float r, phi, ze, x, y, z;
    cylindric_coord* auxcyli = new cylindric_coord();
    x = auxcart->getcoordX();
    y = auxcart->getcoordY();
    z = auxcart->getcoordZ();
    r = sqrt((x*x)+(y*y));
    phi = atan((y/x));
    ze = z;
    auxcyli->setcylindriccoord(r, phi, ze);
    return auxcyli;
}

cartesian_coord::~cartesian_coord(){
    delete this;
}