#include<iostream>
#include "stack.h"

template <class T>
bool Stack<T>::Isempty() const {
    if (top == 0)
        return true;
    return false;
}

template <class T>
bool Stack<T>::Isfull() const {
    if (top == rozm)
        return true;
    return false;
}

template <class T>
bool Stack<T>::Pop(T & d){
    if (top == 0)
        return false;
    d = dana[--top];
    return true;    
}

template <class T>
bool Stack<T>::Push(const T & d){
    if (top == rozm)
        return false;
    dana[top++] = d;
    return true;
}

