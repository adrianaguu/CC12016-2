#include "point.h"
#include <iostream>
using namespace std;

point::point()
{
    x=0.0;
    y=0.0;
}

point::point(point &o)
{
    x=o.x;
    y=o.y;
}

point::point(double _x , double _y)
{
    x=_x;
    y=_y;
}

double point::getx()
{
    return x;

}

double point::gety()
{
    return y;

}

void point::setx( double _x)
{
    x=_x;

}
void point::sety(double _y)
{
    y=_y;
}
void point::printpoint()
{
    cout<<"x = " << x<<endl;
    cout<<"y = " << y;
}

void point:: modifypoint(double _x, double _y)
{
    x=_x;
    y=_y;
}
point::~point()
{

}
