#include "Imobil.h"

Imobil::~Imobil()
{
    delete [] imbunatatiri;
    imbunatatiri=NULL;
}

Imobil& Imobil::operator=(const Imobil& x)
{
    if (this!=&x){
        (Proprietate&)(*this)=(Proprietate)x;
        Setimbunatatiri(x.imbunatatiri);
        venit_pe_an=x.venit_pe_an;
    }
    return *this;
}

void Imobil::Setimbunatatiri(char *x){
    if(x!=NULL){
        delete [] imbunatatiri;
        imbunatatiri=new char [strlen(x)+1];
        strcpy(imbunatatiri, x);
    }
    else imbunatatiri=NULL;
}

void Imobil::afisare(){
    cout<<"Cod: "<<cod<<endl;
    cout<<"Valoare: "<<valoare<<endl;
    cout<<"Venit pe an: "<<venit_pe_an<<endl;
    cout<<"Imbunatatiri: "<<imbunatatiri<<endl;
}

istream & operator>>(istream &dev , Imobil &x){
    dev>>(Proprietate&)x;
    char* aux;
    aux=new char [100];
    cout<<"Venit pe an: "; dev>>x.venit_pe_an; dev.get();
    cout<<"Imbunatatiri: "; dev.getline(aux, 100);
    x.Setimbunatatiri(aux);
    return dev;
}


