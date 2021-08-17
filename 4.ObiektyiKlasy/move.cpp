#include "move.h"
#include<iostream>

void Move::ShowMove() const{
    std::cout<<"x: "<<x<<", y: "<<y<<std::endl;
}

Move Move::add(const Move &m) const{
    Move result(x+m.x,y+m.y);
    return result;
}