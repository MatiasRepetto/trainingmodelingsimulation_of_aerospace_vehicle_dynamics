// Coordenadas esfericas solo en sistemas de 3 grados de libertad

#ifndef SPHERIC_COORD
#define SPHERIC_COORD

#include "cartesian_coord.h"
#include "cylindric_coord.h"

class spheric_coord{
    private:
        float radial_dist, polar_angle, azimuthal_angle;
    public:
        spheric_coord();
        void setsphericcoord(float , float, float);
        float getradialdist();
        float getpolarangle();
        float getazimuthalangle();
        virtual cartesian_coord* converttocartesian(spheric_coord*);
        virtual cylindric_coord* converttocylindric(spheric_coord*);
        ~spheric_coord();

};

#endif