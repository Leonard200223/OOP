#include "TV.h"

void TV::setdescr(char *x){
    if(x!=NULL){
        delete [] descriere;
        descriere= new char [strlen(x)+1];
        strcpy(descriere, x);
    }
    else descriere=NULL;
}

void TV::deletedescr(){
    delete [] descriere;
    descriere=NULL;
}

TV::~TV(){
    deletedescr();
}

istream & operator>>(istream & dev, TV &x){
    dev>>(Electrocasnic&)x;
    cout<<"Diag: "; dev>>x.diag; dev.get();
    char *descriere2;
    descriere2=new char[100];
    cout<<"Descriere: "; dev.get(descriere2, 100); dev.get();
    x.setdescr(descriere2);
    return dev;
}

ostream & operator<<(ostream & dev, TV &x){
    dev<<(Electrocasnic&)x<<endl;
    dev<<"Diagonala: "<<x.diag<<endl;
    dev<<"Descriere: "<<x.descriere<<endl;
    return dev;
}

void sortare(TV* x, int n){
    TV aux;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(x[i].pret>x[j].pret){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
}

TV& TV::operator=(const TV &x){
    if(this!=&x){
        (Produs &)(*this)=(Produs)x;
        this->durata_garantie=x.durata_garantie;
    }
    return *this;
}

char* TV::getmarca(){
    return this->marca;
    }

void LG(TV *x, int n){
    for(int i=0; i<n; i++){
        if(strcmp(x[i].getmarca(),"LG")==0)cout<<x[i]<<endl;
    }
}

int TV::getgarantie(){
    return this->durata_garantie;
}

void TV::wow(TV *x, int n){
    for(int i=0; i<n; i++){
        if(x[i].getgarantie()>12)cout<<x[i];
    }
}

double TV::getdiag(){
    return this->diag;
}

void TV::mare(TV* x, int n){
    for(int i=0; i<n; i++){
        if(x[i].getdiag()>30)cout<<x[i];
    }
}
