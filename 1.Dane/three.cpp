/*Napisz program, ktory poprosi uzytkownika o podanie dlugosci geograficznej w stopniach, minutach i sekundach, wyliczajacy nastepnie dlugosc geograficzna
w formacie dziesietnym; 60 sekund luku sklada sie na minute, 60 minut na stopien; zapisz te wartosci jako stale symboliczne*/

#include<iostream>
int main(){
    double wynik;
    int stopnie, minuty, sekundy;
    const int min_na_st = 60;
    const int sek_na_st = 3600;

    std::cout<<"Podaj dlugosc w stopniach, minutach i sekundach:\nNajpierw podaj stopnie: ";
    std::cin>>stopnie;
    std::cout<<"Nastepnie podaj minuty stopnia luku: ";
    std::cin>>minuty;
    std::cout<<"Na koniec podaj sekundy luku: ";
    std::cin>>sekundy;
    wynik = stopnie + (double)minuty/min_na_st + (double)sekundy/sek_na_st;
    std::cout<<stopnie<<" stopni, "<<minuty<<" minut, "<<sekundy<<" sekund = "<<wynik<<" stopni.\n";
    return 0;
}