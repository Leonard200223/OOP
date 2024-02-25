#include "Proprietate.h"

istream & operator>>(istream &dev, Proprietate &x){
    cout<<"Cod: "; dev.getline(x.cod, 6);
    cout<<"Valoare: "; dev>>x.valoare; dev.get();
    return dev;
    }

void Proprietate::afisare(){
    cout<<"Cod: "<<cod<<endl;
    cout<<"Valoare: "<<valoare<<endl;
    }

Proprietate::Proprietate(char a[6], double b){
    strcpy(cod, a);
    valoare=b;
    }

Proprietate::~Proprietate(){
}

void afisval(Proprietate** v, int n){
    int i;
    for (i=0; i<n; i++)
        if((*v[i]).valoare>10000)v[i]->afisare();
}

void sortare(Proprietate **v, int n){
    int i, j;
    Proprietate *aux;
    for (i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if((*v[i]).getvenit()>(*v[j]).getvenit()){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
