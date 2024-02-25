#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
class Produs
{
public:
    virtual int getValoare();
    virtual void afisare(ostream &dev);
    virtual ~Produs();
};
