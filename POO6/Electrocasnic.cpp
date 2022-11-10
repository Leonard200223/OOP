#include "Electrocasnic.h"

istream & operator>>(istream & dev, Electrocasnic &x){
    /*char *marca2;
    marca2=new char[100];
    dev.get(marca2);
    x.setmarca(marca2);
    dev>>pret;*/
    dev>>(Produs&)x;
    cout<<"Garantie: "; dev>>x.durata_garantie;
    return dev;
    }

ostream & operator<<(ostream & dev, const Electrocasnic &x){
    dev<<(Produs&)x<<endl;
    dev<<"Garantie: "<<x.durata_garantie<<endl;
    return dev;
}

