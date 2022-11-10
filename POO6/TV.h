#include "Electrocasnic.h"

class TV:public Electrocasnic{
    double diag;
    char* descriere=NULL;
public:
    TV()=default;
    TV(char* marca, int p, int garantie, double x, char* y):Electrocasnic(marca, p, garantie), diag(x){
        setdescr(y);
    }
    TV(const TV &x):Electrocasnic(x), diag(x.diag){}
    ~TV();
    TV & operator=(const TV &);
    friend istream & operator>>(istream &, TV &);
    friend ostream & operator<<(ostream &, TV &);
    void setdescr(char *);
    void deletedescr();
    friend void sortare(TV*, int);
    void LG(TV*, int);
    char* getmarca();
    int getgarantie();
    void wow(TV *, int);
    double getdiag();
    void mare(TV*, int);
};
