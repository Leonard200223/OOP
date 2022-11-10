#include "MyString.h"
using namespace std;

MyString::MyString(){
    buf=NULL;
    l=0;
}

MyString::MyString(char *x){
    if(x!=NULL){
        buf=new char[strlen(x)+1];
        strcpy(buf, x);
        l=strlen(x);
    }
    else{
        buf=NULL;
        l=0;
    }
}

MyString::MyString(const MyString &x){
   buf=NULL; // ATENTIE
    *this=x;
}

MyString & MyString::operator=(const MyString &x){
    if(this!=&x){
        delete [] buf;
        if(x.buf!=NULL){
            buf=new char[x.l+1];
            strcpy(buf, x.buf);
            l=x.l;
        }
        else{
            buf=NULL;
            l=0;
        }
    }
    return *this;
}

MyString::~MyString(){
    delete []buf;

}

void MyString::citire(){
    char b[100];
    int len;
    cout<<"buf="; cin.getline(b,100);
    l=len=strlen(b);
    buf=new char[this->l+1];
    strcpy(buf, b);
}

void MyString::afisare() const{
    cout<<(*this);
}

ostream& operator<<(ostream &dev, const MyString &x){
    dev<<"buf="<<x.buf<<endl;
    dev<<"l="<<x.l<<endl;
    return dev;
}

const MyString operator+(const MyString&x, const MyString&y){
    char *b;
    b=new char[200];
    strcpy(b,"");
    strcat(b, x.buf);
    strcat(b, y.buf);
    MyString aux(b);
    return aux;
}

MyString& MyString::operator+=(const MyString&x){
    *this=*this+x;
    return *this;
}

bool operator==(const MyString &x, const MyString &y){
    if(strcmp(x.buf, y.buf)==0 && x.l==y.l) return 1;
    return 0;
}

bool operator!=(const MyString &x, const MyString &y){
    if(!(x==y)) return 1;
    return 0;
}

int MyString::lookFor(char c){
    int nr=0;
        for(int i=0; i<l; i++){
            if(c==buf[i])nr++;
        }
    return nr;
}

istream& operator>>(istream &dev, MyString &x){
    char b[100];
    int len;
    dev.get(b,100);
    x.l=len=strlen(b);
    x.buf=new char[x.l+1];
    strcpy(x.buf, b);
    return dev;
}
