#include "Frigider.h"

class Lada_Frig:virtual public Produs{
protected:
    double dim[3];
    char* tip=NULL;
public:
    Lada_Frig()=default;
    Lada_Frig(const Lada_Frig &x):Produs(x){
        setdim(x.dim);
        settip(x.tip);
    }
    Lada_Frig& operator=(const Lada_Frig&);
    ~Lada_Frig(){
        delete [] tip;
        tip=NULL;
    }

    Lada_Frig(char x[4], double y[3], char* z):Produs(x){
        setdim(y);
        settip(z);
    }
    double getvolum();
    void afis();
    void settip(char *);
    void setdim(const double[]);
};
