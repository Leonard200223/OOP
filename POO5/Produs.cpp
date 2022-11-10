#include "Produs.h"

void Produs::setMarca(char *x){
    if(x!=NULL){
        delete [] marca;
        marca=new char[strlen(x)+1];
        strcpy(marca, x);
    }
    else marca=NULL;
}

Produs::~Produs(){
    delete [] marca;
}

Produs & Produs::operator=(const Produs &x){

    if(this!=&x){
        delete []marca;
        setMarca(x.marca);
        pret=x.pret;
        g=x.g;
    }
    return *this;
}

ostream & operator<<(ostream &dev, const Produs &x){
    dev<<"Pret: "<<x.pret<<endl;
    dev<<"Marca: "<<x.marca<<endl;
    dev<<x.g;
    return dev;
}

istream & operator>>(istream &dev, Produs &x){
  //  Garantie aux;
   // int a;
    char b[100];
    /*cout<<"Pret: ";*/dev>>x.pret;
    dev.get();
    /*cout<<"Marca: "; */dev.get(b,100);
  //  x.pret=a;
    x.setMarca(b);
    dev>>x.g;
    return dev;
}


void Sortare(Produs *v, int n){
    Produs aux;
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(v[i].pret>v[j].pret){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    }

void garantie(Produs *v, int n){
    for(int i=0; i<n; i++){
        if(v[i].g.getluni()>12)cout<<v[i]<<endl;
    }
}

void SerVice(Produs *v, int n){
    for(int i=0; i<n; i++){
        if(strcmp(v[i].g.getservice(), "SerVice")==0) cout<<v[i]<<endl;
    }
}





