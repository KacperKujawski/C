/*Napisz krotki program, ktory poprosi o podanie wzrostu w cm, a nastepnie przekonwertuj ten wzrost na stopy i cale(1 cal to 2,54, a stopa30,48 cm).
  Niech program za pomoca podkreslenia odroznia rodzaj odpowiedzi. Uzyj stalej symbolicznej const, aby zapisac wspolczynnik konwersji.*/

#include <iostream>

int main(){
    const double cal_c = 2.54;
    const double stopa_c = 30.48;
    double cm;
    std::cout<<"Podaj wzrost w cm: ";
    std::cin>>cm;
    std::cout<<"Podano "<<cm<<" cm.\nOdpowiado to "<<cm/cal_c<<" calom i "<<cm/stopa_c<<" stopom.\n";
    return 0;
}