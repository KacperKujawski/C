/*Napisz program, ktory poprosi o informacje na temat zuzycia benzyny (litry na 100 km), nastepnie zamien to na amerykanskie
mile na galon. Zwroc uwage na to, ze w dodawaniu uzyte beda rozne jednostki miary. Podejscie amerykanskie stanowi odwrotnosc europejskiego
gdyz odwrotny jest stosunek odleglosci do ilosci paliwa (zamiast stosunek paliwa do odleglosci).
Zauwaz, ze 100 km to 62,14 mili i 1 galon to 3,875 litra. Zatem 19 mil na galon oznacza okolo 12,4l/100km.*/

#include<iostream>

int main(){
    const double km_na_mile = 62.14;
    const double galon_na_litry = 3.875;
    double litry,galony,mile;
    std::cout<<"Podaj spalanie na 100km: ";
    std::cin>>litry;
    galony = litry/galon_na_litry;
    mile = km_na_mile/galony;
    std::cout<<litry<<"l/100km to "<<mile<<" mil na galon.\n";
    return 0;
}