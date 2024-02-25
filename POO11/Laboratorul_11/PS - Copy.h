#include "Produs.h"
class PS: public Produs //PS
{protected:
        int pret ;
    public:
        PS();
        PS(int);
        void afisare(ostream &dev);
        int getValoare();
};


