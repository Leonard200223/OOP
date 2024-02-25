#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

class Persoana{
     string nume, prenume;//mai multe prenume sunt unite prin -
     char initiala;
     string CNP;
public:
     Persoana()=default;
     Persoana(string new_nume, string new_prenume , char new_initiala, string new_CNP){
         nume=new_nume;
         prenume=new_prenume;
         initiala=new_initiala;
         CNP=new_CNP;
        }
     virtual void citire(ifstream &dev){
        dev>>nume;
        dev>>prenume;
        dev>>initiala;
        dev>>CNP;}
     virtual void afisare(ostream &dev){
        dev<<nume<<" "<<prenume<<" "<<initiala<<" "<<CNP<<" ";
    }

    virtual int getsalariu()=0;
    string getprenume(){
        return prenume;
    }

    string getcnp(){
        return CNP;
    }
 };

class Angajat:public Persoana{
     string firma; //daca e formata din mai multe nume se foloseste -
     int salariu;
public:
    Angajat()=default;
    Angajat(string new_nume, string new_prenume, char new_initiala, string new_CNP, string new_firma, int new_salariu):Persoana(new_nume, new_prenume, new_initiala, new_CNP), firma(new_firma), salariu(new_salariu){}
    void citire(ifstream &dev){
        Persoana::citire(dev);
        dev>>firma;
        dev>>salariu;
    }
    void afisare(ostream &dev){
        Persoana::afisare(dev); // Persoana::afisare(dev); //((Persoana&)(*this)).afisare(dev);
        dev<<firma<<" "<<salariu<<" ";
        dev<<endl;
    }

    int getsalariu(){
        return salariu;
    }

}; //venit =salariu

class Student: public Persoana{
    string facultate;
    int note[6];//notele pe semestrul trecut
public:
    Student()=default;
    Student(string new_nume, string new_prenume, char new_char, string new_CNP, string new_facultate, int new_note[6]):Persoana(new_nume, new_prenume, new_char, new_CNP), facultate(new_facultate){
        int i;
        for(i=0; i<6; i++){
            note[i]=new_note[i];
        }
    }
    void citire(ifstream &dev){
        Persoana::citire(dev);
        dev>>facultate;
        int i;
        for(i=0; i<6; i++){
            dev>>note[i];
        }
    }
    void afisare(ostream &dev ){
        Persoana::afisare(dev);
        dev<<facultate<<" ";
        int i;
        for(i=0; i<6; i++){
            dev<<note[i]<<" ";
        }
        dev<<endl;
    }

    int getsalariu(){
        return 0;
        }

};

void replaceAll(string& s, const string& secv, const string& cuv){
    int loc;
    while ((loc=s.find(secv))!=string::npos){

    s.replace(loc, secv.size(), cuv);

}

}

void modificare(string *v ,int n){
    int i;
    for(i=0; i<n; i++){
        replaceAll(v[i], "01", "XY");
    }
}

int main()
{
  /*  ofstream f("Angajat.dat", ios::out | ios::app);
    Angajat a1("Nuta", "Leonard", 'L', "5021223038683", "Valve", 50000), a2("Abc", "DEFG", 'A', "5748473", "FRR", 400), a3("RTX", "UIO", 'D',"567486578", "YTB", 700);
    a1.afisare(f);
    a2.afisare(f);
    a3.afisare(f);

    ofstream g("Student.dat", ios::out | ios::app);

    int note1[6]={2, 3, 7, 9, 5, 10};
    int note2[6]={8, 6, 5, 9, 10, 5};
    int note3[6]={8, 9, 10, 10, 5, 7};
    Student s1("primul", "student1", 'K', "567843657843", "Poli1", note1);
    Student s2("aldoilea", "Ana", 'O', "645783657843", "Poli2", note2);
    Student s3("altreilea", "student3", 'Y', "6574836754", "Poli3", note3);
    s1.afisare(g);
    s2.afisare(g);
    s3.afisare(g);

    f.close();
    return 0;

*/
   Persoana **v = new Persoana* [10];
    ifstream f("Angajat.dat");
    ifstream g("Student.dat");

    int i=0;
    while(!f.eof()){
        v[i]=new Angajat;
        v[i]->citire(f);
        i++;
    }

    while(!g.eof()){
        v[i]=new Student;
        v[i]->citire(g);
        i++;
    }

    int nr=i-1; cout<<"NUMARUL DE PERSOANE ESTE: "<<nr;
    int venitmax=0, imax=-1;
    for(i=0; i<nr; i++){
        if(v[i]->getsalariu()>venitmax){
            venitmax=v[i]->getsalariu();
            imax=i;
        }
    }

    v[imax]->afisare(cout);

    for(i=0; i<nr; i++){
        if((v[i]->getprenume()).find("Ana")!=string::npos) v[i]->afisare(cout);
    }

    string *vectorcnp = new string [nr];
    for(i=0; i<nr; i++){
        vectorcnp[i]=v[i]->getcnp();
    }

    string aux;
    int j;
    for(i=0; i<nr-1; i++){
        for(j=i+1; j<nr; j++){
            string primulan=vectorcnp[i].substr(1,2);
            string aldoileaan=vectorcnp[j].substr(1,2);
            if(primulan>aldoileaan){
                aux=vectorcnp[i];
                vectorcnp[i]=vectorcnp[j];
                vectorcnp[j]=aux;
            }
        }
    }



    modificare(vectorcnp,nr);

    for(i=0; i<nr; i++){
        cout<<vectorcnp[i]<<endl;
    }
}

