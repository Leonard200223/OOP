#include "Lada_Frig.h"

class Combina:public Frigider, public Lada_Frig{
    char* info_supl=NULL;
public:
    Combina()=default;
    Combina(const Combina&x):Frigider(x), Lada_Frig(x), Produs(x){
        setinfo(x.info_supl);
    }
    Combina& operator=(const Combina&);
    ~Combina(){
        delete [] info_supl;
        info_supl=NULL;
    }

    Combina(char p[4], double x, bool y, double a[3], char* b, char* r):Frigider(p,x,y), Lada_Frig(p,a,b), Produs(p){
        setinfo(r);
    }
    void setinfo(char*);
    double getvolum();
    void afis();
    };
