#ifndef IMOBIL_H
#define IMOBIL_H

#include <Proprietate.h>


class Imobil : public Proprietate
{
    public:
        Imobil()=default;
        Imobil(char a[6], double b, double c, char* d):Proprietate(a,b), venit_pe_an(c){
            Setimbunatatiri(d);
        }
        ~Imobil();
        Imobil(const Imobil& x):Proprietate(x), venit_pe_an(x.venit_pe_an){
            Setimbunatatiri(x.imbunatatiri);
        }
        Imobil& operator=(const Imobil& other);

        void Setimbunatatiri(char* val);
        double getvenit() { return venit_pe_an/12; }
        void afisare();
        friend istream & operator>>(istream &, Imobil &);

    protected:

    private:
        double venit_pe_an;
        char* imbunatatiri=NULL;
};

#endif // IMOBIL_H
