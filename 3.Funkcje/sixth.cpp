/*Napisz szablon funkcji maxn() pobierajacej jako parametry tablice wartosci typu T oraz liczbe elementow tej tablicy,
 zwracajacej najwiekszy element z tablicy. Przetestuj program z uzyciem tabeli z 5 wartosciami typu int i 4 wartosciami typu double.
 Program powinien korzystac ze specjalizacji przyjmujacej jako parametr tablice typu char, zwracajacej adres najdluzszego napisu
 Jezeli jest kilka najdluzszych lancuchow, funkcja powinna zwracac adres pierwszego z nich. Sprawdz specjalizacje z tablica pieciu lancuchow*/

 #include<iostream>
 #include<cstring>

using namespace std;

template <typename T>
T maxn(T * tab, int rozm){
    T max = 0;
    for(int i = 0 ;i<rozm;i++){
        if (tab[i] > max)
            max = tab[i];
    }
    return max;
}

char * maxn(char ** tab,int rozmiar){
    int max = 0;
    char * res;
    for(int i = 0; i < rozmiar;i++){
        if(strlen(tab[i]) > max)
            res = tab[i];
    }
    return res;
}
int main(){
    int tab1[5] = {1,5,2,7,8};
    double tab2[4] = {2.22,1.23,22.21,16.26};
    char ** tab3;
    tab3[0] = "costam";
    tab3[1] = "morzee";
    tab3[2] = "hej";
    tab3[3] = "Rezultat prawidlowy";
    tab3[4] = "Ojej";
    cout<<"Najwieksza wartosc z tablicy int: "<<maxn(tab1,5)<<endl;
    cout<<"Najwieksza wartosc z tablicy double: "<<maxn(tab2,4)<<endl;
    char * rezultat = maxn(tab3,5);
    cout<<"Napis wskazywany przez funkcje: "<<rezultat<<endl;
    return 0;
}