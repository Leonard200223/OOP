#include "Produs.h"

class Frigider:virtual public Produs{
protected:
    double volum;
    bool nofrost;
public:
    Frigider()=default;

    Frigider(char a[4], double x, bool y):Produs(a), volum(x), nofrost(y){}
    double getvolum();
    void afis();
};
