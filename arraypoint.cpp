#include "arraypoint.h"
#include <iostream>
using namespace std;

arraypoint::arraypoint()
{
    tam=0;
    arreglo = new point [tam];
}
void arraypoint::rezise(int nu)
{

    delete[] arreglo;
    arreglo = new point [nu];
    this->tam=nu;

}
void arraypoint::_insert(const int position, const point &p)
{
    if (position>tam)
    {
        cout<< "fuera de rango"<<endl;
        return;
    }

    tam++;
    arraypoint t = arraypoint(tam);

    for (int i=0;i<position;i++)
        t.arreglo[i]=arreglo[i];

    t.arreglo[position]=p;

    for (int i=position+1; i<tam;i++)
        t.arreglo[i]=arreglo[i-1];

    this->rezise(tam);

    for (int i=0; i<tam;i++)
        arreglo[i]=t.arreglo[i];
}

void arraypoint::print()
{
    for (int i=0; i<tam; i++)
    {
        cout<<"El elemento "<<i<<" es: "<<endl;
        arreglo[i].printpoint();
        cout<<endl;
    }
}


int arraypoint::get_size()
{
    return this->tam;
}

arraypoint::arraypoint(int x)
{
    this->tam=x;
    this->arreglo = new point [tam];
}

arraypoint::arraypoint(point _arreglo [], const int n_tam, const int o_tam)
{
    if (n_tam<=o_tam)
    {
        arreglo = new point[n_tam];
        tam = n_tam;
        for(int i=0; i<tam; i++)
            arreglo[i] = _arreglo[i];
    }
    else
    {
        cout<<"sobrepasa la capacidad";
    }
}

void arraypoint::pushback(const point &p)
{
    arraypoint t = arraypoint(tam);
    for(int i=0; i<tam; i++)
        t.arreglo[i] = arreglo[i];

    this->rezise(tam+1);

    for(int i=0; i<tam; i++)
        arreglo[i] = t.arreglo[i];
    arreglo[tam] = p;
    tam++;

}

arraypoint::arraypoint(const arraypoint &pv)
{
    arreglo = new point[pv.tam];
    tam = pv.tam;
    for(int i=0; i<tam; i++)
        arreglo[i] = pv.arreglo[i];

}

void arraypoint::_clear()
{
    tam=0;
    this->rezise(tam);
}

void arraypoint::_remove(const int pos)
{
    for(int i=1,j=0; (i+pos)<tam; i++,j++)
    {
        point temp = arreglo[pos+i];
        arreglo[pos+j] = temp;
    }

    arraypoint t = arraypoint(tam-1);
    for(int i=0; i<tam-1; i++)
        t.arreglo[i] = arreglo[i];
    this->rezise(tam-1);
    for(int i=0; i<tam-1; i++)
        arreglo[i] = t.arreglo[i];
    --tam;
}

arraypoint::~arraypoint()
{
    delete[] arreglo ;
}
