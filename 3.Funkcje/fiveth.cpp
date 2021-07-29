/*Napisz szablon funkcji max5() pobierajacej jako parametr tablice 5. wartosci typu T, zwracajacej najwiekszy element z tablicy. Wielkosc tablicy
jest ustalona, mozna ja na stale zapisac w kodzie petli, bez przekazywania jako parametr. Przetestuj program z uzyciem tabeli z 5 wartosciami typu
int i typu double.*/

#include<iostream>

const int rozm = 5;

using namespace std;

template <typename T>
T max5(T * tab){
    T max = 0;
    for(int i = 0 ;i<rozm;i++){
        if (tab[i] > max)
            max = tab[i];
    }
    return max;
}
int main(){
    int tab1[rozm] = {1,5,2,7,8};
    double tab2[rozm] = {2.22,1.23,6.43,22.21,16.26};
    cout<<"Najwieksza wartosc z tablicy int: "<<max5(tab1)<<endl;
    cout<<"Najwieksza wartosc z tablicy double: "<<max5(tab2)<<endl;
    return 0;
}