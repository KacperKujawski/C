#include "rachbank.h"
#include<cstring>

Rachbank::Rachbank(string n,char * nr, double sal){
    nazwisko = n;
    saldo = sal;
    for (int i=0;nr[i]!= '\0' || i==24;i++ ){
        numerkonta[i] = nr[i];
    }
}

void Rachbank::show() const{
    std::cout<<"Nazwisko posiadacza rachunku: "<<nazwisko<<std::endl;
    std::cout<<"Numer Konta: "<<numerkonta<<std::endl<<"Saldo: "<<saldo<<std::endl;
}

bool Rachbank::add(double kwota){
    if (kwota<0)
        return false;
    saldo+=kwota;
    return true;
}

bool Rachbank::withdraw(double kwota){
    if (kwota<0){
        std::cout<<"Nie mozna wybrac ujemnej kwoty!\n";
        return false;
    }
    if (kwota > saldo){
        std::cout<<"Nie wystarczajacy stan konta. Na koncie pozostalo: "<<saldo<<". Chciales wybrac: "<<kwota<<std::endl;
        return false;
    }
    saldo-=kwota;
    return true;
}

bool Rachbank::zmien_dane(string n, char * nr, double sal){
    if (nazwisko != n)
        nazwisko = n;
    if(saldo!=sal)
        saldo = sal;
    if(strlen(nr)!= 24)
        return false;
    strcpy(numerkonta,nr);
    return true;
}