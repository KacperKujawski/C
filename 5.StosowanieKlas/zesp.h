#ifndef ZESP_H_
#define ZESP_H_

#include<iostream>

class complex{
    private:
        double real;
        double im;
    public:
        complex(){ real = 0; im = 0;}
        complex(double r, double i){ real = r; im = i;}
        ~complex(){}
        complex operator+(const complex & c) const;
        complex operator-(const complex & c) const;
        complex operator*(const complex & c) const;
        complex operator*(const double l) const;
        friend complex operator*(double l, const complex & c);
        friend complex operator-(const complex & c);
        friend std::ostream & operator<<(std::ostream & os, const complex & c);
        friend std::istream & operator>>(std::istream & is, complex & c);
};

#endif