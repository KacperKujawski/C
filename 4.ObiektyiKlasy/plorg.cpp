#include "plorg.h"
#include<iostream>
#include<cstring>

Plorg::Plorg(const char * c,const int s){
    if (strlen(c)< 20)
        strcpy(imie,c);
    sytosc = s;
}

void Plorg::ChangeSytosc(const int s){
    if (s > 0)
        sytosc = s;
}

void Plorg::ShowInfo() const{
    std::cout<<"Mam na imie: "<<imie<<std::endl<<"Poziom sytosci: "<<sytosc<<std::endl;
}