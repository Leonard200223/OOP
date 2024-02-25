#ifndef PROPRIETATE_H
#define PROPRIETATE_H

#include<iostream>
#include<cstring>
using namespace std;

class Proprietate
{
    public:                   // Se fac automat: CFP, CC, D, OP=
        Proprietate()=default;
        virtual ~Proprietate();
        Proprietate(char[6], double);

        double Getvaloare() { return valoare; }
        friend istream & operator>>(istream &, Proprietate &);
        void virtual afisare();
        virtual double getvenit(){
            return 0;}

    protected:
        char cod[6];
        double valoare;
        friend void afisval(Proprietate**, int);
        friend void sortare(Proprietate **, int);


    private:

};

#endif // PROPRIETATE_H
