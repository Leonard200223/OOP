#include <iostream>
#include <string.h>
using namespace std;


class Produs{
protected:
    char *marca=NULL;
    int pret=0;
public:
    Produs()=default;
    Produs(char* x, int y):pret(y){
        setmarca(x);
    }
    Produs(const Produs &x):pret(x.pret){
        setmarca(x.marca);
    }
    ~Produs();
    void deletemarca();
    void setmarca(char*);
    Produs & operator=(const Produs &);
    friend istream & operator>>(istream &, Produs &);
    friend ostream & operator<<(ostream &, const Produs &);
    };
