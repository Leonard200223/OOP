#include <iostream>
#include "Artist.h"
#include "Album.h"
#include "Track.h"

using namespace std;

int main(){
    Track track1(0, 23, "Tsukihime");
    track1.afis(cout);
    Track track2(1, 20, "Yes");
    track2.afis(cout);
    Track track3(1,24, "No");
    track3.afis(cout);

    set<Track> tracks;
    tracks.insert(track1);
    tracks.insert(track2);

    set<Track> tracks2;
    tracks2.insert(track3);

    cout<<endl;

    Album alb1(2002, "nume1", tracks);
    alb1.afis(cout);

    cout<<endl;

    Album alb2(2009, "nume2", tracks2);
    alb2.afis(cout);

    cout<<endl;

    multimap<int, Album> albume;
    pair<int, Album> a1(0, alb1), a2(1, alb2);
    albume.insert(a1);
    albume.insert(a2);

    Artist Eu("Leonard", albume);

    Eu.afis_cron(cout);

    Eu.afisani(cout, 2000, 2005);




}
