#include"Combina.h"

double Combina::getvolum(){
    return volum+Lada_Frig::getvolum();
}

void Combina::afis(){
    Frigider::afis();
    cout<<"dim: ";
    for(int i=0; i<3; i++){
        cout<<dim[i]<<" ";
    }
    cout<<endl;
    cout<<"tip: "<<tip<<endl;
    cout<<"info_supl: "<<info_supl;
}

void Combina::setinfo(char* x){
    if(x!=NULL){
        delete [] info_supl;
        info_supl=new char[strlen(x)+1];
        strcpy(info_supl,x);
    }
    else info_supl=NULL;
}

Combina& Combina::operator=(const Combina &x){
    (Frigider&)(*this)=x;
    (Lada_Frig&)(*this)=x;
    setinfo(x.info_supl);
    return *this;
}
