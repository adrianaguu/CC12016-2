#ifndef POLYGON_H
#define POLYGON_H
#include "arraypoint.h"

class polygon
{
    public:
        polygon();
        polygon(point* par, int tam);
        polygon(arraypoint par);
        virtual ~polygon();
        virtual double area()=0;
        int getnumsides ();
        arraypoint* getpoints ();
        static int getnumpolygons();
    protected:

    private:
        arraypoint arr;
        static int track;
};


#endif // POLYGON_H
