/*Napisz program, ktory bedzie pytal, ile mil przejechano i ile galonow benzyny zuzyto oraz ile jeszcze zostalo. Mozesz tez napisac program,
ktory prosi o podanie odleglosci w kilometrach i ilosci benzyny w litrach, aby podac wynik zgodnie z normami europejskimi, w litrach na 100 km.*/

#include<iostream>

int main(){
    double km,litr,dzielnik;


    std::cout<<"Podaj ile km przejechales: ";
    std::cin>>km;
    std::cout<<"Ile litrow benzyny spaliles: ";
    std::cin>>litr;
    dzielnik = km/100;
    std::cout<<"Twoje spalanie to "<< litr/dzielnik<< " litrow na 100 km.\n";
    return 0;
}