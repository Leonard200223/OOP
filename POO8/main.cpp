#include"Combina.h"

int main(){
    /*Frigider x("100", 23, 1);
    x.afis();*/

    /*double y[3]={3,4,2};
    Lada_Frig x("101", y, "mare");
    x.afis();*/

    /*double y[3]={6,7,4};
    Combina x("102", 24, 0, y, "extra", "letsgo");
    x.afis();*/

    int n;
    cout<<"Cate produse ? "; cin>>n;
    Produs **v=new Produs*[n];
    int cod; //cod=1 FRIGIDER       cod=2 LADA          cod=3 COMBINA

    for(int i=0; i<n; i++){
        cout<<"cod: "; cin>>cod;
        if(cod==1){
            char id[4];
            double volum;
            bool nofrost;

            cin.get();
            cout<<"id: ";
            cin.getline(id, 4);
            cout<<"volum: ";
            cin>>volum;
            cout<<"nofrost: ";
            cin>>nofrost;
            v[i]=new Frigider(id, volum, nofrost);
        }
        else if(cod==2){
            char id[4];
            double dim[3];
            char* tip=new char[101];

            cin.get();
            cout<<"id: ";
            cin.getline(id, 4);
            cout<<"dim: ";
            for(int j=0; j<3; j++)cin>>dim[j];
            cin.get();
            cout<<"tip: ";
            cin.getline(tip, 101);
            v[i]=new Lada_Frig(id, dim, tip);
            }
            else if(cod==3){
                char id[4];
                double volum;
                bool nofrost;
                double dim[3];
                char* tip=new char[101];
                char* info_supl=new char[101];

                cin.get();
                cout<<"id: ";
                cin.getline(id, 4);
                cout<<"volum: ";
                cin>>volum;
                cout<<"nofrost: ";
                cin>>nofrost;
                cout<<"dim: ";
                for(int j=0; j<3; j++)cin>>dim[j];
                cin.get();
                cout<<"tip: ";
                cin.getline(tip, 101);
                cout<<"info_supl: ";
                cin.getline(info_supl, 101);
                v[i]=new Combina(id, volum, nofrost, dim, tip, info_supl);
            }
    }

    for(int i=0; i<n; i++){
        v[i]->afis();
    }

    Produs *aux;
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(v[i]->getvolum()>v[j]->getvolum()){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }

    for(int i=0; i<n; i++){
        v[i]->afis();
    }
}

