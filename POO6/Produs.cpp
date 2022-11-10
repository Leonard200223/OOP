#include "Produs.h"

void Produs::setmarca(char* x){
    if(x!=NULL){
        delete [] marca;
        marca= new char [strlen(x)+1];
        strcpy(marca, x);
    }
    else marca=NULL;
}

void Produs::deletemarca(){
    delete [] marca;
    marca=NULL;
}

Produs::~Produs(){
    deletemarca();
}

Produs& Produs::operator=(const Produs &x){
    if(this!=&x){
        setmarca(x.marca);
        pret=x.pret;
    }
    return *this;
}

istream& operator>>(istream & dev, Produs &x){
    char *marca2;
    marca2=new char[101];
    cout<<"Marca: ";dev.get(marca2, 100);
    x.setmarca(marca2);
    cout<<"Pret: ";dev>>x.pret;
    return dev;
}

ostream& operator<<(ostream & dev, const Produs &x){
    dev<<"Marca: "<<x.marca<<endl;
    dev<<"Pret: "<<x.pret<<endl;
    return dev;
}

