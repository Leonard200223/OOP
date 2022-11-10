#include "Produs.h"

class Electrocasnic:public Produs{
protected:
    int durata_garantie;
public:
    Electrocasnic()=default;
    Electrocasnic(char *m, int p, int x):Produs(m,p),durata_garantie(x){}
    friend istream & operator>>(istream &, Electrocasnic &);
    friend ostream & operator<<(ostream &, const Electrocasnic &);
    };

