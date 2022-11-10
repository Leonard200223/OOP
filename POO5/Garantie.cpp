#include "Garantie.h"

void Garantie::setService(char *x){
    if(x!=NULL){
        delete [] service;
        service=new char[strlen(x)+1];
        strcpy(service, x);
    }
    else service=NULL;
}

Garantie::~Garantie(){
    delete [] service;
}

Garantie & Garantie::operator=(const Garantie &x){
    if(this!=&x){
        setService(x.service);
        nr_luni=x.nr_luni;
    }
    return *this;
}

ostream & operator<<(ostream &dev, const Garantie &x){
    dev<<"Nr luni: "<<x.nr_luni<<endl;
    dev<<"Service: "<<x.service<<endl;
    return dev;
}

istream & operator>>(istream &dev, Garantie &x){
    int a;
    char b[100];
    /*cout<<"Nr luni: ";*/dev>>a;
    dev.get();
    /*cout<<"Service: "; */dev.get(b, 100);
    x.nr_luni=a;
    x.setService(b);
    return dev;
}

int Garantie::getluni(){
    return nr_luni;
}

char* Garantie::getservice(){
    return service;
}

