#include "Piesa.h"

Piesa::Piesa()
{
    pret = 0;
}

Piesa::Piesa(char cod[6], int pret):pret(pret){
        for(int i = 0; i < 6; i++)
            this->cod[i] = cod[i];

}

int Piesa::getValoare()
{
    return this->pret;
}

void Piesa::afisare(ostream &dev)
{
    dev << pret << " ";
    for(int i = 0;i < 5; i++)
        dev<<cod[i];

}
