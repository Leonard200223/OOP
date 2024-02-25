#include "Frigider.h"

double Frigider::getvolum(){
    return volum;
}

void Frigider::afis(){
    Produs::afis();
    cout<<"volum: "<<volum<<endl;
    cout<<"nofrost: "<<nofrost<<endl;
}
