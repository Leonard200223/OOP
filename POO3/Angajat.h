class Angajat{
    char *nume;
    char CNP[14];
    int salariu;
public:
    Angajat();
    Angajat(const char*, const char[], const int);
    Angajat(const Angajat &x):Angajat(x.nume, x.CNP, x.salariu){};
 //  Angajat(char*, char[], int);
//   Angajat(const Angajat &);
    ~Angajat();
    void afisare()const;
    void modificare(const Angajat &);
    int getSalariu()const;
    bool eFemeie()const;
    char *copienume()const;
    Angajat& operator=(const Angajat &);
};

void sortare(Angajat *, int);
int nrFemei(Angajat *, int);
void afisare(Angajat *, int);
