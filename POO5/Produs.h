#include<iostream>
#include<cstring>
#include "Garantie.h"
using namespace std;

class Produs{
    int pret=0; //ex: 45
    char* marca=NULL; //”LG”
    Garantie g;
public:
    Produs()=default;
    Produs(int x, char* y, const Garantie &h):pret(x), g(h){
        setMarca(y);
    }
    Produs(int x, char* y, int z, char* k):pret(x), g(z, y){
        setMarca(y);
    }
    Produs(const Produs &x):pret(x.pret), g(x.g){
        setMarca(x.marca);
    }
    ~Produs();
    Produs & operator=(const Produs &);
    void setMarca(char*);
    friend ostream & operator<<(ostream &, const Produs &);
    friend istream & operator>>(istream &, Produs &);
    friend void Sortare(Produs *, int);
    friend void garantie(Produs *, int);
    friend void SerVice(Produs *, int);
};

