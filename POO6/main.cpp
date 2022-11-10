#include "TV.h"

using namespace std;

int main(){
    TV *v;
    int n;
    cout<<"n: "; cin>>n; cin.get();
    v=new TV[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i];
    }

    /*cin>>v;
    cout<<v;*/
}
