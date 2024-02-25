#include "PM.h"

PM::PM():MH()
{
    nr_functionalitati = 0;
}


PM::PM(vector<Piesa>vec, int nr_piese, int pm, int nr_ore, PS a, vector<string>func, int nr_func):MH(vec, nr_piese, pm, nr_ore), ps(a)
{
    this->nr_functionalitati = nr_func;
    for(int i = 0; i < nr_func; i++)
        this->functionalitati.push_back(func[i]);
}

int PM::getValoare()
{
    return (MH::getValoare() + ps.getValoare());
}

void PM::afisare(ostream &dev)
{
    MH::afisare(dev);
    ps.afisare(dev);
    dev << nr_functionalitati << " ";
    for(int i = 0; i < nr_functionalitati; i++)
        dev << this->functionalitati[i] << " ";
}
