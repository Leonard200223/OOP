#include"Teren.h"

int main()
{
    /*Proprietate a("leon", 23);
    a.afisare();
    Imobil b("leona", 2002, 123, "yes");
    b.afisare();
    Teren c("leonn", 23, 2002, 123, "omg");
    c.afisare();*/

    /*Proprietate a;
    cin>>a;
    a.afisare();*/

    /*Imobil b;
    cin>>b;
    b.afisare();*/

    /*Teren c;
    cin>>c;
    c.afisare();*/


    int i, id, n; // ID PROPRIETATE = 1; ID IMOBIL =2; ID TEREN =3;
    cout<<"n: "; cin>>n;
    Proprietate **v;
    v = new Proprietate* [n];

    for(i=0; i<n; i++){
        cout<<"Id: "; cin>>id; cin.get();
        if(id==1) {
                v[i]=new Proprietate;
                cin>>(*v[i]);
        }
        else if(id==2) {
                v[i]=new Imobil;
                cin>>(Imobil&)(*v[i]);
        }
            else if(id==3) {
                    v[i]=new Teren;
                    cin>>(Teren&)(*v[i]);
            }
                else i--;
    }

    cout<<endl;

    for(i=0; i<n; i++){
        v[i]->afisare();
    }

    cout<<endl;

    sortare(v,n);
    for(i=0; i<n; i++){
        v[i]->afisare();
    }


    cout<<endl;

    afisval(v, n);
}
