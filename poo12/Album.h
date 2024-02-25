#include "Track.h"
#include<iostream>
#include<string>
#include<set>
#pragma once
using namespace std;

class Album{
    int an;
    string nume;
    set <Track> tracks;
public:
    Album()=default;
    Album(int new_an, string new_nume, set<Track> new_tracks):an(new_an), nume(new_nume), tracks(new_tracks){}

    void insert_track(const Track &x){
        tracks.insert(x);
    }

    string get_nume(){
        return nume;
    }

    void afis(ostream &dev)const{
        dev<<an<<" "<<nume<<" "<<endl;
        set<Track>::iterator i;
        i=tracks.begin();
        while(i!=tracks.end()){
            (*i).afis(dev);
            i++;
        }
    }

    int getdurata()const{
        int dur=0;
        set<Track>::iterator i;
        i=tracks.begin();
        while(i!=tracks.end()){
            dur=dur+(*i).getdurata();
            i++;
        }
        return dur;
    }

    int cate_mai_lungi(int sec){
        int cate=0;
        set<Track>::iterator i;
        i=tracks.begin();
        while(i!=tracks.end()){
            if(i->getdurata()>sec)cate++;
            i++;
        }
        return cate;
    }

    int getan(){
        return an;
    }

};
