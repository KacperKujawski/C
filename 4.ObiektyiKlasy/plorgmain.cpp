#include<iostream>
#include "plorg.h"

int main(){
    Plorg p1;
    Plorg p2("Latek",25);
    p1.ShowInfo();
    p1.ChangeSytosc(75);
    p1.ShowInfo();
    p2.ShowInfo();
    return 0;
}