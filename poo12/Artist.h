#include <iostream>
#include<map>
#include<string>
#include "Album.h"
#pragma once
using namespace std;

class Artist{
    string nume;
    multimap <int, Album> albume;
public:
    Artist()=default;
    Artist(string new_nume, multimap<int, Album> new_albume):nume(new_nume), albume(new_albume){}

    void insert_album(const Album &x){
        albume.insert (pair<int, Album>(x.getan(), x));
    }

    void delete_album(int poz){
        multimap <int, Album>::iterator i=albume.begin();
        while(poz>0){
            i++;
            poz--;
        }
        albume.erase(i);
    }

    void afis_cron(ostream &dev){
        multimap <int, Album>::iterator i=albume.begin();
        while(i!=albume.end()){
            dev<<i->first<<" ";
            (i->second).afis(dev);
            i++;
        }
    }

    void afisani(ostream &dev, int x, int y){
        multimap <int, Album>::iterator i;
        i=albume.begin();
        while(i!=albume.end()){
            if((i->second).getan() > x && (i->second).getan() < y){
                dev<<i->first<<" ";
                (i->second).afis(dev);
            }
            i++;
        }
    }
};
