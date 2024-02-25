#include "Produs.h"
#include "Piesa.h"


class MH: virtual public Produs //MH
{ protected:  vector<Piesa> vec;  //vector piese
                     int nr_piese;             //nr piese din vec
                     int pm;                     //pret manopera pe ora
                     int nr_ore;                //ore dezvoltare
public:
    MH();
    MH(vector<Piesa>, int , int, int);
    virtual void afisare(ostream &dev);
    virtual int getValoare();
};// pret=suma preturilor pieselor+pm*nr_ore




