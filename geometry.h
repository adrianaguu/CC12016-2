#ifndef GEOMETRY_H
#define GEOMETRY_H
#include "polygon.h"

class triangle : public polygon
{
    public:
        triangle();
        triangle(point a, point b, point c);
        virtual double area();
    private:
        point p1;
        point p2;
        point p3;
};

class rectangle : public polygon
{
    public:
        rectangle();
        rectangle(point p1, point p2);
        rectangle(const int a, const int b, const int c, const int d);
        virtual double area();
        virtual ~rectangle();
        void print();

    protected:

    private:
        point p1;
        point p2;
        point p3;
        point p4;
};

#endif // GEOMETRY_H
