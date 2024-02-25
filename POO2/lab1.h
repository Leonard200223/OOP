struct Pachet_Promo{
private:
    char *descriere;
    char cod[4];
    int pret;
    int pret_initial_produse_continute[4];
public:
    void init();
    void afisare() const;
    void modificare(const char[]);
    void modificare(const Pachet_Promo &);
    void modificare(int, int);
    int rez();
};

void sortare(Pachet_Promo *, int);



