#include <iostream>
#include<string>
#pragma once
using namespace std;

class Track{
    int pozitie;
    int durata;
    string nume;
public:
    Track()=default;
    Track(int new_pozitie, int new_durata, string new_nume):pozitie(new_pozitie), durata(new_durata), nume(new_nume){}

    friend bool operator<(const Track &x, const Track &y){
        if(x.pozitie<y.pozitie)return -1;
        else if(x.pozitie>y.pozitie) return 1;
            else return 0;
    }

    void afis(ostream &dev)const{
        dev<<pozitie<<" "<<durata<<" "<<nume<<" "<<endl;
    }

    int getdurata()const{
        return durata;
    }
};
