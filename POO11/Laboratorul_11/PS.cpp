#include "PS.h"

PS::PS()
{
    pret = 0;
}

PS::PS(int pret):pret(pret){}

void PS::afisare(ostream &dev)
{
    dev << pret << " ";

}

int PS::getValoare()
{
    return this->pret;
}
