/*William Wingate jest analitykiem pizzy. Dla kazdej pizzy zapisuje nastepujace informacje:
nazwe firmy produkujacej pizze, srednice pizzy, wage pizzy.
Stworz strukture na te informacje i napisz program korzystajacy ze zmiennych tego typu. Program ma prosic uzytkownika 
o podanie wszystkich tych danych oraz zwrotnie te informacje wyswietlac.*/

#include<iostream>
#include<cstring>

struct Pizza{
    std::string nazwa;
    double srednica;
    double waga;
};

int main(){
    using namespace std;
    Pizza p;
    cout<<"Podaj nazwe firmy produkujacej pizze: ";
    getline(cin,p.nazwa);
    cout<<"Podaj srednice pizzy: ";
    cin>>p.srednica;
    cout<<"Podaj wage pizzy: ";
    cin>>p.waga;
    cout<<"Pizza o nazwie: "<<p.nazwa<<"\nsrednicy: "<<p.srednica<<"\nwadze: "<<p.waga<<endl;
    return 0;
}