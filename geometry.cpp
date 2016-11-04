#include "geometry.h"
#include "math.h"



point constructorpoints [4];

point* updatepoints (const point &p1, const point &p2,const point &p3, const point &p4 = point (0,0))
{
        constructorpoints[0]=p1;
        constructorpoints[1]=p2;
        constructorpoints[2]=p3;
        constructorpoints[3]=p4;
        return constructorpoints;
}

double norma(point a, point b)
{
    return sqrt( sqrt(a.getx()+b.getx())+ sqrt(a.gety()+b.gety()) );
}


rectangle::rectangle(point p1, point p2): polygon(updatepoints(p1,p2,p3,p4),4)
{
    this->p1=p1;
    this->p2=p2;
    this->p3.setx(p1.getx());
    this->p3.sety(p2.gety());
    this->p4.setx(p2.getx());
    this->p4.sety(p1.gety());
}

double rectangle::area()
{
    return norma(p1,p3)*norma(p2,p4) ;
}

rectangle ::rectangle(const int a, const int b, const int c, const int d)
{
    this->p1.setx(a);
    this->p1.sety(b);
    this->p2.setx(c);
    this->p2.sety(d);

    this->p3.setx(a);
    this->p3.sety(d);
    this->p4.setx(b);
    this->p4.sety(c);
}

rectangle::rectangle() : polygon()
{

}

void rectangle:: print ()
{
    p1.printpoint();
    p2.printpoint();
    p3.printpoint();
    p4.printpoint();
}

rectangle::~rectangle()
{
    //dtor
}

//----------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------



triangle::triangle(point a, point b, point c) : polygon()
{
    p1=a;
    p2=b;
    p3=c;
}


double triangle:: area()
{
    double x = norma(p1,p2);
    double y = norma(p2,p3);
    double z = norma(p1,p3);
    double w = (x+y+z)/2;

    return sqrt( w*(w-x)*(w-y)*(w-z) );
}
