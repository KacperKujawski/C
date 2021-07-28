/**/

#include<iostream>
#include<cstring>

int main(){
    using namespace std;
    string imie,nazwisko;
    int ocena,wiek;
    cout<<"Jak masz na imie? ";
    getline(cin,imie);
    cout<<"Jak sie nazywasz? ";
    getline(cin,nazwisko);
    cout<<"Na jaka ocene zaslugujesz? ";
    cin>>ocena;
    cout<<"Ile masz lat? ";
    cin>>wiek;
    cout<<"Nazwisko: "<<nazwisko<<", "<<imie<<endl<<"Ocena: "<<ocena-1<<endl<<"Wiek: "<<wiek<<endl;
    
    return 0;
}