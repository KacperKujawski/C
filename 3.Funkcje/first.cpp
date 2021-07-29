/*Napisz funkcje ktora normalnie pobiera jeden parametr, adres lancucha, po czym zaraz pokazuje ten lancuch.
Jesli jednak podany zostanie niezerowy drugi parametr, napis ma sie pojawic tyle razy, ile razy dotad wywolano te funkcje. 
Zauwazmy, ze drugi parametr nie mowi ile razy nalezy pokazac napis. Owszem funkcja jest nieco bzdurna.Uzyj opisanej funkcji
w prostym programie ktory pokaze jej dzialanie*/

#include<iostream>
#include<cstring>
static int l_wywolan = 0;

using namespace std;

void fun(string * s, int i=0){
    cout<<*s<<endl;
    if (i != 0) {
        for(int j = 0; j<l_wywolan;j++)
            cout<<*s<<endl;
    }
    l_wywolan++;
}

int main(){
    string * test = new string;
    *test = "Test";
    cout<<"1. Wywolanie funkcji bez drugiego parametru.\n";
    fun(test);
    cout<<"2. Wywolanie funkcji bez drugiego parametru.\n";
    fun(test);
    cout<<"3. Wywolanie funkcji z drugim parametrem innym niz 0.\n";
    fun(test,1);
    delete test;
    return 0;
}