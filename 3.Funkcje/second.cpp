/*Struktura batonik ma trzy pola: marke producenta, wage oraz liczbe kalorii. Napisz program korzystajacy z funkcji, ktorej parametry to
referencja do typu Batonik, wskaznik do typu char,wartosc double oraz wartosc int. Funkcja ma uzywac ostatnich trzech wartosci do 
ustawienia odpowiednich pol struktury. Ostatnie trzy parametry maja miec wartosci domyslne "Millenium Munch", 2.85, 350.
Pozatym program powinien korzystac z funkcji pobierajacej referencje do Batonika i wyswietlajacej zawartosc struktury. Nalezy uzyc w miare 
potrzeb const.*/

#include<iostream>
#include<cstring>

using namespace std;

struct Batonik{
    char * marka;
    double waga;
    int kalorie;
};

void change_batonik(Batonik &b, char * c = "Millenium Munch", double w = 2.85, int k = 350){
    b.waga = w;
    b.kalorie = k;
    if(strlen(b.marka) != strlen(c)){
        delete [] b.marka;
        b.marka = new char[strlen(c)];
    }
    strcpy(b.marka,c);
}

void wyswietl(Batonik &b){
    cout<<"Marka batonika: "<<b.marka<<endl<<"Waga batonika: "<<b.waga<<endl<<"Kalorie: "<<b.kalorie<<endl;
}

int main(){
    Batonik bat;
    bat.marka = new char[1];
    bat.waga = 1;
    bat.kalorie = 2;
    change_batonik(bat);
    wyswietl(bat);
    delete [] bat.marka;
    return 0;
}