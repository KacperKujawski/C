#include<iostream>
#include "stack.h"

using namespace std;

int main(){
    Stack<int> s1(5);
    Stack<double> s3;
    const int i =5;
    int j;
    if(s1.Push(i))
        std::cout<<"Dodano element: 6 do listy\n";
    s1.Push(i); s1.Push(i); s1.Push(i); s1.Push(i);
    if(s1.Push(i))
        std::cout<<"Dodano element: 6 do listy\n";
    else   
        std::cout<<"Lista s1 pelna!\n";
    s1.Pop(j);
    std::cout<<"Element zdjety z listy: "<<j<<std::endl;
    if(s1.Push(i))
        std::cout<<"Dodano element: 6 do listy\n";
    else   
        std::cout<<"Lista s1 pelna!\n";
    return 0;
}