/*Struktura batonik ma trzy pola. Pierwsze to marka slodyczy, drugie to waga(ktora moze zawierac czesc ulamkowa), a trzecie to 
liczba kalorii (liczba calkowita). Napisz program deklarujacy taka strukture i tworzacy zmienna typu batonik o nazwie snack,
inicjalizujac poszczegolne pola wartosciami "Mocha Munch", 2,3, 350. Inicjalizacja powinna byc czescia deklaracji zmiennej snack.
Na koniec program ma wyswietlic zawartosc zmiennej snack.*/

#include<iostream>
#include<cstring>
struct Batonik{
    std::string marka;
    double waga;
    int kalorie;
};

int main(){
    Batonik snack {"Mocha Munch", 2.3, 350};
    std::cout<<"Marka batonika: "<<snack.marka<<std::endl<<"Waga: "<<snack.waga<<std::endl<<"Kalorie: "<<snack.kalorie<<std::endl;
    return 0;
}