#include "Produs.h"
class Piesa
{
    char cod[6]  ;
    int pret ;

public:
    Piesa();
    Piesa(char cod[6], int pret);
    int getValoare();
    void afisare(ostream &dev);
};

