#include "Produs.h"
#include <fstream>

using namespace std;

int main(){
    Produs *v;
    ifstream f("leon.txt");
    int n;
    f>>n;
    v=new Produs[n];
    for(int i=0; i<n; i++){
        f>>v[i];
    }
    Sortare(v,n);
    for(int i=0; i<n; i++){
        cout<<v[i];
    }
    garantie(v, n);
    SerVice(v, n);
}



