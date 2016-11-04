#include "polygon.h"
int polygon:: track=0;

polygon::polygon()
{
    this->arr=arraypoint(0);
    ++track;
}

polygon::polygon(point* par, int tam)
{
    this->arr=arraypoint(par,tam,tam);
    ++track;
}

polygon::polygon(arraypoint par)
{
    ++track;
    arr=par;
}

double polygon :: area ()
{

}

int polygon::getnumsides()
{
    return arr.get_size();
}

arraypoint* polygon :: getpoints()
{
    arraypoint* P = & this ->arr;
    return P;
}

int polygon :: getnumpolygons ()
{
    return track;
}

polygon::~polygon()
{
    --track;
}
