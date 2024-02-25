#include"Lada_Frig.h"

void Lada_Frig::afis(){
    Produs::afis();
    cout<<"dim: ";
    for(int i=0; i<3; i++){
        cout<<dim[i]<<" ";
    }
    cout<<endl;
    cout<<"tip: "<<tip<<endl;
}

double Lada_Frig::getvolum(){
    double prod;
    for(int i=0; i<3; i++){
        prod=prod*dim[i];
    }
    return prod;
}

void Lada_Frig::setdim(const double x[]){
    for(int i=0; i<3; i++)
        dim[i]=x[i];
}

void Lada_Frig::settip(char* x){
    if(x!=NULL){
        delete [] tip;
        tip=new char[strlen(x)+1];
        strcpy(tip,x);
    }
    else tip=NULL;
}

Lada_Frig& Lada_Frig::operator=(const Lada_Frig &x){
    if(this!=&x){
        for(int i=0; i<4; i++){
            id[i]=x.id[i];
        }
        setdim(x.dim);
        settip(x.tip);
    }
    return *this;
}
