#include<iostream>
#include<cstring>
using namespace std;

class Garantie{
    int nr_luni=0;  //durata garantie
    char* service=NULL; //cine asigura service-ul
public:
    Garantie()=default;
    Garantie(int x, char* y):nr_luni(x){
        setService(y);
    }
    Garantie(const Garantie &x):nr_luni(x.nr_luni){
        setService(x.service);
    }
    ~Garantie();
    void setService(char*);
    int getluni();
    char* getservice();
    Garantie & operator=(const Garantie &);
    friend ostream & operator<<(ostream &, const Garantie &);
    friend istream & operator>>(istream &, Garantie &);
};

