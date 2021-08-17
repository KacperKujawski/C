#include<iostream>
#include<cstring>
#include "rachbank.h"

using namespace std;

int main(){
    Rachbank p1;
    Rachbank p2("Kowalski","100023022302932100000001",10.23);
    p1.show();
    p2.show();
    if(p1.zmien_dane("Nowak","213401928782167300000291",100.21))
        p1.show();
    cout<<"Dodawanie i odejmowanie od konta\n\n";
    p1.withdraw(200);
    p1.withdraw(100);
    p1.show();
    p2.add(43.21);
    p2.show();
    return 0;
}