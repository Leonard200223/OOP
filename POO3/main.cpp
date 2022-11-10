#include <iostream>
#include <cstring>
#include "Angajat.h"

using namespace std;

int main(){
    Angajat *v;
    int n;
    cout<<"Cati angajati ? "; cin>>n;
    int i;
    v=new Angajat[n];
    char *newnume, newcnp[14];
    int newsalariu;

    newnume=new char[50];

    for(i=0; i<n; i++){
        cin.get();
        cout<<"Nume : "; cin.getline(newnume, 50);
        cout<<"CNP : "; cin.getline(newcnp, 14);
        cout<<"salariu : "; cin>>newsalariu;
        cout<<endl;
        Angajat Nou(newnume, newcnp, newsalariu);
        v[i]=Nou;
    }


    cout<<endl<<endl;

    for(i=0; i<n; i++){
        v[i].afisare();
        cout<<endl;
    }

    sortare(v,n);

    cout<<"Dupa sortarea dupa nume: ";

    cout<<endl<<endl;

    for(i=0; i<n; i++){
        v[i].afisare();
        cout<<endl;
    }

    cout<<endl<<endl;
    cout<<"Numarul femeilor este : "<<nrFemei(v,n)<<endl;
    cout<<"Numarul barbatilor este : "<<n-nrFemei(v,n)<<endl;

    cout<<"Angajatii cu salariu > 3000 sunt : "<<endl;
    afisare(v,n);

}






