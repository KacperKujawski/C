/*Napisz funkcje pobierajaca referencje do obiektu string jako parametr i zamieniajaca zawartosc tego lancucha na wielkie litery.
Napisz program ktory w petli pozwoli przecwiczyc wprowadzanie danych do tej funkcji.*/

#include<iostream>
#include<cstring>

using namespace std;

void up(string &str){
    for (int i = 0; i <str.length();i++){
        str[i]=toupper(str[i]);          
    }
}


int main(){
    string s;
    cout<<"Podaj lancuch (q aby zakonczyc): ";
    getline(cin,s);
    while(s!="q"){
        up(s);
        cout<<s<<endl;
        cout<<"Nastepny lancuch (q, aby zakonczyc): ";
        getline(cin,s);
    }
    return 0;
}