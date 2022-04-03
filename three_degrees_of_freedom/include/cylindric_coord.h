// Coordenadas cilindricas solo en sistemas de 3 grados de libertad

#ifndef CYLINDRIC_COORD
#define CYLINDRIC_COORD

#include "cartesian_coord.h"
#include "spheric_coord.h"

class cylindric_coord{
    private:
        float radial, polar_angle, z;
    public:
        cylindric_coord();
        void setcylindriccoord(float , float, float);
        float getradialdistc();
        float getpolaranglec();
        float getZ();
        virtual cartesian_coord* converttocartesian(cylindric_coord*);
        virtual spheric_coord* converttospheric(spheric_coord*);
        ~cylindric_coord();

};

#endif