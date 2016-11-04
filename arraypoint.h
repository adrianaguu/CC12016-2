#ifndef ARRAYPOINT_H
#define ARRAYPOINT_H
#include "point.h"


class arraypoint
{
    public:
        arraypoint();
        arraypoint(int x);
        arraypoint(const arraypoint &o);
        arraypoint(point _arreglo [], const int n_tam, const int o_tam);
        void print();
        void _clear();
        void rezise(int nu);
        void _insert(const int position , const point &p);
        void _remove (const int pos);
        void pushback(const point &p);
        int get_size();
        virtual ~arraypoint();

    protected:
    private:
        int tam;
        point *arreglo;
};

#endif // ARRAYPOINT_H

