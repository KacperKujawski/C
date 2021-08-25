#include<iostream>
#include"zesp.h"

complex complex::operator+(const complex & c) const{
    return complex(real + c.real,im + c.im);
}

complex complex::operator-(const complex & c) const{
    return complex(real - c.real, im - c.im);
}

complex complex::operator*(const complex & c) const{
    return complex(real * c.real - im * c.im,real * c.im + im * c.real);
}

complex complex::operator*(const double l) const{
    return complex(real * l, im * l);
}

complex operator*(double l, const complex & c){
    return complex(l*c.real,l*c.im);
}

complex operator-(const complex & c){
    return complex(c.real, c.im * -1);
}

std::ostream & operator<<(std::ostream & os, const complex & c){
    os<<"("<<c.real<<","<<c.im<<"i)";
    return os;
}

std::istream & operator>>(std::istream & is, complex & c){
    std::cout<<"Skladowa rzeczywista: ";
    is>>c.real;
    std::cout<<"Skladowa urojona: ";
    is>>c.im;
    return is;
}