#include<iostream>
#include<cstring>
using namespace std;

class Produs{
protected:
    char id[4];
public:
    Produs()=default;
    Produs(char x[4]){
        for(int i=0; i<4; i++){
            id[i]=x[i];
        }
    }
    virtual double getvolum()=0;
    virtual void afis();
    virtual ~Produs(){};
};

