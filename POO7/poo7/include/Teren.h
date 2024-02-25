#ifndef TEREN_H
#define TEREN_H

#include <Imobil.h>


class Teren : public Proprietate
{
    public:
        Teren()=default;
        Teren(char a[6], double b, double c, double d, char *e):Proprietate(a,b), venit_pe_luna_m2(c), suprafata(d){
            Setdescriere(e);
        }
        ~Teren();
        Teren(const Teren&x):Proprietate(x), venit_pe_luna_m2(x.venit_pe_luna_m2), suprafata(x.suprafata){
            Setdescriere(x.descriere);
        }
        Teren& operator=(const Teren& other);

        void Setdescriere(char* val) { descriere = val; }
        friend istream& operator>>(istream &, Teren &);
        void afisare();
        double getvenit(){
            return venit_pe_luna_m2*suprafata;
            }

    protected:

    private:
        double venit_pe_luna_m2;
        double suprafata;
        char* descriere=NULL;
};

#endif // TEREN_H
