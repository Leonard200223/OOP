#include <iostream>
#include <cstring>
#include "Angajat.h"

using namespace std;

Angajat::Angajat(){
    nume=NULL;
    strcpy(CNP, "0000000000000");
    salariu=0;
    }

Angajat::Angajat(const char* nume, const char CNP[],const  int salariu){
    if(nume!=NULL){
        this->nume=new char [strlen(nume)+1];
        strcpy(this->nume, nume);
    }
    else this->nume=NULL;
    strcpy(this->CNP, CNP);
    this->salariu=salariu;
}

Angajat::~Angajat(){
    delete []nume;
    nume=NULL;
    CNP[0]='\0';
    salariu=0;
}

/*Angajat::Angajat(const Angajat &x){
    if(x.nume!=NULL){
        this->nume=new char [strlen(x.nume)+1];
        strcpy(this->nume, x.nume);
    }
    else this->nume=NULL;
    strcpy(this->CNP, x.CNP);
    this->salariu=x.salariu;
}*/

void Angajat::afisare()const{
    cout<<"Nume : "<<nume<<endl;
    cout<<"CNP : "<<CNP<<endl;
    cout<<"salariu : "<<salariu<<endl;
}

void Angajat::modificare(const Angajat &x){
    delete [] nume;
    if(x.nume!=NULL){
        nume=new char [strlen(x.nume)+1];
        strcpy(nume, x.nume);
    }
    else nume=NULL;
    strcpy(CNP, x.CNP);
    salariu=x.salariu;
}

int Angajat::getSalariu()const{
    return salariu;
}

char* Angajat::copienume()const{
    return nume;
}

bool Angajat::eFemeie()const{
    if(CNP[0]=='2' || CNP[0]=='6') return 1;
    return 0;
}

void sortare(Angajat *v, int n){
    int i, j;
    Angajat aux;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++)
            if(strcmp(v[i].copienume(), v[j].copienume())>0){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    }
}

int nrFemei(Angajat* v, int n){
    int nr=0;
    int i;
    for(i=0; i<n; i++)
        if(v[i].eFemeie()==1)nr++;
    return nr;
}

void afisare(Angajat *v, int n){
    int i;
    for(i=0; i<n; i++){
        if(v[i].getSalariu()>3000){
            v[i].afisare();
            cout<<endl;
        }
    }
}

Angajat & Angajat::operator=(const Angajat &y){
    delete [] nume;
    if(y.nume!=NULL){
        nume=new char [strlen(y.nume)+1];
        strcpy(nume, y.nume);
    }
    else nume=NULL;
    strcpy(CNP, y.CNP);
    salariu=y.salariu;
    return *this;
}

