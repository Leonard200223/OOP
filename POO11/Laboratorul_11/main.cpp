#include "PM.h"
#include <fstream>
using namespace std;

int main()
{
    vector<Produs*>vec;

    PS a1(500), a2(700);
    vec.push_back(&a1);
    vec.push_back(&a2);
    Piesa b("10000",12),b1("10001",13),b2("10002",14),b3("10003",15);
    vector<Piesa>aux;
    aux.push_back(b);
    aux.push_back(b1);
    aux.push_back(b2);
    aux.push_back(b3);
    MH a3(aux, 1, 5, 3), a4(aux, 2, 7, 4);
    vec.push_back(&a3);
    vec.push_back(&a4);

    string c1("lalla"), c2("lala2");
    vector<string>aux1;
    aux1.push_back(c1);
    aux1.push_back(c2);

    PS d1(50), d2(70);
    PM a5(aux, 3, 10, 1, d1, aux1, 1);
    vec.push_back(&a5);

    //Calculam suma incasata
    int s = 0;
    for(int i = 0; i < vec.size(); i++)
        s += vec[i]->getValoare();
    cout<<"Suma incasata in anul 2022 este "<<s<<endl;

    //afisare in fisier
    ofstream g("date.out.txt");
    for(int i = 0; i < vec.size(); i++)
        {vec[i]->afisare(g);
        g << endl;}

    //stergerea primelor doua elemente din vector
    vec.erase(vec.begin());
    vec.erase(vec.begin());
    //afisare
    cout<<endl<<"Afisare eliminare"<<endl;
    for(int i = 0; i < vec.size(); i++)
        {vec[i]->afisare(cout);
        cout << endl;}

    vec.insert(vec.begin()+1, &a5);

    //afisare
    cout<<endl<<"Afisarea dupa introducere"<<endl;
    for(int i = 0; i < vec.size(); i++){
        vec[i]->afisare(cout);
        cout << endl; }


    vector<Produs*>::iterator p=vec.begin();
    p=vec.insert(p,new PS(800));
    p=vec.begin();
    return 0;
}
