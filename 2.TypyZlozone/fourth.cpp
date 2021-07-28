/*Napisz program, ktory prosi uzytkownika o trzykrotne wpisanie wyniku sprintu na 100 metrow, a potem wypisze
podane czasy wraz z obliczona srednia. Do przechowywania wczytanych danych uzyj klasy array*/

#include<iostream>
#include<array>

int main(){
    using namespace std;
    array<double,4> tab;
    for(int i = 0;i<3;i++){
        cout<<"Podaj wynik "<<i+1<<". sprintu: ";
        cin>>tab[i];
    }
    tab[3] = (tab[0] + tab[1] + tab[2])/3;
    cout<<"Wynik 1. sprintu: "<<tab[0]<<"s.\nWynik 2. sprintu: "<<tab[1]<<"s.\nWynik 3. sprintu: "<<tab[2]<<"s.\nSredni wynik: "<<tab[3]<<"s.\n";
    return 0;
}