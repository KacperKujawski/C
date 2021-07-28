/*Napisz program, ktory poprosi uzytkownika o wpisanie biezacej liczebnosci populacji swiata i biezacej liczebnosci populacji Polski 
(albo innego wybranego kraju) i zapisze otrzymane dane w zmiennych typu long long. Potem program powinien obliczyc i wypisac procent,
jaki populacja Polski stanowi w populacji Swiata.*/

#include<iostream>
int main(){
    long long licz_swiata;
    long long licz_polski;

    std::cout<<"Podaj liczbe ludnosci Swiata: ";
    std::cin>>licz_swiata;
    std::cout<<"Podaj liczbe ludnosci Polski:";
    std::cin>>licz_polski;
    std::cout<<"Populacja Polski stanowi "<<(double) licz_polski/licz_swiata * 100 <<"\% populacji Swiata\n";
    return 0;
}