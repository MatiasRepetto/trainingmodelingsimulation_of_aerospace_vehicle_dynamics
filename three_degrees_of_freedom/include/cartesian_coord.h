// Coordenadas cartesianas solo en sistemas de 3 grados de libertad

#ifndef CARTESIAN_COORD
#define CARTESIAN_COORD

#include "spheric_coord.h"
#include "cylindric_coord.h"

class cartesian_coord{
    private:
        float x,y,z;
    public:
        cartesian_coord();
        void setcartesian_coord(float, float, float);
        float getcoordX();
        float getcoordY();
        float getcoordZ();
        virtual spheric_coord* converttospheric(cartesian_coord*);
        virtual cylindric_coord* converttocylindirc(cartesian_coord*);
        ~cartesian_coord();
};

#endif