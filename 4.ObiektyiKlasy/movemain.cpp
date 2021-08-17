#include<iostream>
#include "move.h"


int main(){
    Move m1;
    Move m2(2,3);
    Move m3(4,5);
    m2.ShowMove();
    m3.ShowMove();
    m1 = m2.add(m3);
    m1.ShowMove();
    m1.reset(1,1);
    m1.ShowMove();
    return 0;
}