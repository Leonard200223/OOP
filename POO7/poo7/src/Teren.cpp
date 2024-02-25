#include "Teren.h"


Teren::~Teren()
{
    delete [] descriere;
    descriere=NULL;
}

Teren& Teren::operator=(const Teren& x)
{
    if(this!=&x){
        venit_pe_luna_m2=x.venit_pe_luna_m2;
        suprafata=x.suprafata;
        Setdescriere(x.descriere);
    }
    return *this;
}

void Teren::afisare(){
    cout<<"Cod: "<<cod<<endl;
    cout<<"Valoare: "<<valoare<<endl;
    cout<<"Venit pe luna: "<<venit_pe_luna_m2<<endl;
    cout<<"Suprafata: "<<suprafata<<endl;
    cout<<"Descriere: "<<descriere<<endl;
    }

istream & operator>>(istream &dev, Teren& x){
    dev>>(Proprietate&)x;
    cout<<"Venit pe luna: "; dev>>x.venit_pe_luna_m2;
    cout<<"Suprafata: "; dev>>x.suprafata; dev.get();
    char *aux;
    aux=new char [100];
    cout<<"Descriere: "; dev.getline(aux, 100);
    x.Setdescriere(aux);
    return dev;
    }
