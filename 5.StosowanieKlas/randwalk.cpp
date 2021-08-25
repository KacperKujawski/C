#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<fstream>
#include "vect.h"

int main(){
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps = 0;
    double target, dstep;
    bool to_file;
    char to_filec;
    string filename;
    ofstream fout;

    cout<<"Czy wynik ma byc zapisywany do pliku, czy na ekran(p - plik, inne - ekran): ";

    if(cin>>to_filec && to_filec == 'p'){
        to_file = true;
        cout<<"Podaj nazwe pliku .txt: ";
        cin>>filename;
        filename = filename + ".txt";
    }
    else    
        to_file = false;

    cout<<"Podaj dystans do przejscia (k, aby zakonczyc): ";
    while (cin>> target){
        cout<<"Podaj dlugosc kroku: ";
        if(!(cin>>dstep))
            break;
        if (to_file){
            fout.open(filename.c_str());
            fout<<"Dystans do przejscia: "<<target<<", dlugosc kroku: "<<dstep<<endl;
            fout<<"0: "<<result;
        }
        while (result.magval() < target){
            direction = rand() % 360;
            step.reset(dstep,direction, Vector::POL);
            result = result + step;
            steps++;
            if (to_file)
                fout<<steps<<": "<<result<<endl;
        }
        if(to_file){
            fout<<"Po "<<steps<<" krokach delikwent osiagnal polozenie:\n"<<result<<endl<<"czyli\n";
            result.polar_mode();
            fout<<result<<endl<<"Srednia dlugosc kroku pozornego = "<<result.magval()/steps<<endl;
            fout.close();
        }
        else{
            cout<<"Po "<<steps<<" krokach delikwent osiagnal polozenie:\n"<<result<<endl;
            result.polar_mode();
            cout<<" czyli\n"<<result<<endl<<"Srednia dlugosc kroku pozornego = "<<result.magval()/steps<<endl;
        }
        steps = 0;
        result.reset(0.0,0.0);
        cout<<"Podaj dystans do przejscia (k, aby zakonczyc): ";
    }
    cout<<"Koniec!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}