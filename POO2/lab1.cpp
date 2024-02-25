#include<iostream>
#include<cstring>
#include "lab1.h"

using namespace std;

void Pachet_Promo::init(){
    char desc[1000];
    cin.get();
    cin.getline(desc,1000);
    descriere=new char[strlen(desc)+1];
    strcpy(descriere, desc);
    cin.getline(cod,4);
    cin>>pret;
    for(int i=0; i<4; i++){
        cin>>pret_initial_produse_continute[i];
    }
}

void Pachet_Promo::afisare() const{
    cout<<cod;
    cout<<endl;
    cout<<pret<<endl;
    for(int i=0; i<4; i++){
        cout<<pret_initial_produse_continute[i]<<" ";
    }
}

void Pachet_Promo::modificare(const char x[]){
    strcpy(cod,x);
    }

void Pachet_Promo::modificare(const Pachet_Promo &x){
    delete []descriere;
    descriere=NULL;
    descriere=new char[strlen(x.descriere)+1];
    strcpy(descriere,x.descriere);
    modificare(x.cod);
    pret=x.pret;
    for(int i=0; i<4; i++){
        pret_initial_produse_continute[i]=x.pret_initial_produse_continute[i];
    }
}

void Pachet_Promo::modificare(int x, int y){
    pret_initial_produse_continute[x-1]=y;
}

int Pachet_Promo::rez(){
    int r;
    r=pret_initial_produse_continute[0]+pret_initial_produse_continute[1]+pret_initial_produse_continute[2]+pret_initial_produse_continute[3]-pret;
    return r;
}

void sortare(Pachet_Promo *v, int n){
    Pachet_Promo aux;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i].rez()>v[j].rez()){/*aux.modificare(v[i]);*/ aux=v[i];
                                      /*  v[i].modificare(v[j]);*/ v[i]=v[j];
                                      /*  v[j].modificare(aux);*/ v[j]=aux;
            }
        }
    }
}

