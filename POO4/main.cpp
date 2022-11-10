#include "MyString.h"
#include<fstream>
using namespace std;

int main(){
    MyString d;
    ifstream f("Leo.txt");
    char lit;
    MyString a("Leonard");
    cout<<a;
    MyString b;
    b.citire();
    b.afisare();
    cout<<endl;
    MyString c=operator+(a,b);
    cout<<c<<endl;
    c.operator+=(a);
    cout<<c;
    cout<<operator!=(a,c)<<endl;
    cin>>lit;
    cout<<c.lookFor(lit)<<endl;
   // f<<c;
    f>>d;
    cout<<d;
    return 0;
}
