#ifndef POINT_H
#define POINT_H


class point
{
    private:
        double x;
        double y;
    public:
        point(point &o);
        point();
        point(double _x, double _y);
        virtual ~point();
        double getx();
        double gety();
        void setx(double _x);
        void sety(double _y);
        void printpoint ();
        void modifypoint ( double _x, double _y);

};

#endif // POINT_H
