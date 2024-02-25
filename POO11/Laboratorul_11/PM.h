#include "PS.h"
#include "MH.h"

class PM: public MH  //PM
{      PS ps;
       vector<string> functionalitati;
       int nr_functionalitati;
public:
    PM();
    PM(vector<Piesa>, int, int, int, PS, vector<string>, int);
    void afisare(ostream &dev);
    int getValoare();
};    //pret = pret ps+pret MH

