#include "MH.h"

MH::MH()
{
    nr_piese=0;
    pm=0;
    nr_ore=0;
}

MH::MH(vector<Piesa>vecx, int nr_piese, int pm, int nr_ore):nr_piese(nr_piese), nr_ore(nr_ore), pm(pm),vec(vecx)
{

}

int MH::getValoare()
{
    int s = 0;
    for(int i = 0; i < nr_piese; i++)
        s += vec[i].getValoare();

    s += pm*nr_ore;
    return s;
}

void MH::afisare(ostream &dev)
{
    dev << nr_piese << " ";
    dev << pm << " ";
    dev << nr_ore << " ";
    for(int i = 0; i < nr_piese; i++)
        vec[i].afisare(dev);
}
