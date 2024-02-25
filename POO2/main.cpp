#include<iostream>
#include<string.h>
#include "lab1.h"
using namespace std;

int main(){
    Pachet_Promo *v, pachetnou;
    int nr_pachete, i, nrpachetnou, nval, npoz;
    char codnou[4];
    cin>>nr_pachete;
    v=new Pachet_Promo[nr_pachete];


    for(i=0; i<nr_pachete; i++){
        cout<<"Pachetul cu numarul "<<i<<" : "<<endl;
        v[i].init();
    }
    cout<<endl<<endl;

    for(i=0; i<nr_pachete; i++){
        cout<<"Pachetul cu numarul "<<i<<" : "<<endl;
        v[i].afisare();
        cout<<endl;
    }

    cout<<endl<<endl;

    cout<<"Introduceti numarul pachetului promotional PE care doriti sa-l modificati : ";
    cin>>nrpachetnou;
    pachetnou.init();
    v[nrpachetnou].modificare(pachetnou);
    cin.get();
    cout<<"Tastati noul cod al pachetului care tocmai a fost inlocuit : "<<endl;
    cin.getline(codnou, 4);
    v[nrpachetnou].modificare(codnou);
    cout<<"A cata valoare din preturi doriti s-o modificati ? ";
    cin>>npoz;
    cout<<endl;
    cout<<"Cu ce valoare doriti s-o inlocuiti ? ";
    cin>>nval;
    v[nrpachetnou].modificare(npoz, nval);

    cout<<endl<<endl;

    for(i=0; i<nr_pachete; i++){
        cout<<"Pachetul cu numarul "<<i<<" : "<<endl;
        v[i].afisare();
    }

    sortare(v,nr_pachete);

    cout<<endl<<endl;

    for(i=0; i<nr_pachete; i++){
        cout<<"Pachetul cu numarul "<<i<<" : "<<endl;
        v[i].afisare();
    }
}
