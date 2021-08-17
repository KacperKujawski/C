#ifndef RACHBANK_H_
#define RACHBANK_H_

#include<iostream>

using namespace std;

class Rachbank{
private:
    string nazwisko;
    char numerkonta[25];
    double saldo;
public:
    Rachbank(){nazwisko = ""; saldo = 0;numerkonta[0] = '\0';}
    Rachbank(string n,char * nr, double sal);
    void show() const;
    bool add(double kwota);
    bool withdraw(double kwota);
    bool zmien_dane(string n, char * nr, double sal);
};

#endif
