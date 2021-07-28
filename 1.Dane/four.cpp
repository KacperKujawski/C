/*Napisz program, ktory poprosi uzytkownika o podanie liczby sekund(zmienna typu long albo long long, jesli sa dostepne) jako wartosci calkowitej
(uzyj typu long) i pokaze odpowiednik przekazanej liczby w dniach, godzinach, minutach i sekundach. Uzyj stalej symbolicznej, aby zapisac liczbe 
godzin w dniu, minut w godzinie i sekund w minucie.*/

#include<iostream>
int main(){
    long sec;
    const int h_per_day = 24;
    const int min_per_h = 60, sec_per_min = 60;
    int days, hours, mins, secs;
    std::cout<<"Podaj liczbe sekund: ";
    std::cin>>sec;
    days = sec/(sec_per_min*min_per_h*h_per_day);
    hours = (sec - days * (sec_per_min*min_per_h*h_per_day))/(sec_per_min*min_per_h);
    mins = (sec - days * (sec_per_min*min_per_h*h_per_day) - hours * (sec_per_min*min_per_h))/sec_per_min;
    secs = sec - days * (sec_per_min*min_per_h*h_per_day) - hours * (sec_per_min*min_per_h) - mins * sec_per_min;
    std::cout<<sec<<" sekund = "<<days<<" dni, "<<hours<<" godzin, "<<mins<<" minut, "<<secs<<" sekund\n";
    return 0;
}