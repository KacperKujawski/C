#include<iostream>
#include<cstring>

using namespace std;

struct stringy{
    char * str;
    int ct;
};

void set(stringy & s, char * c){
    s.ct = strlen(c);
    s.str = new char[s.ct];
    strcpy(s.str,c);
}

void show(stringy s, int i = 1){
    for (int j=0;j<i;j++){
        cout<<s.str<<endl;
    }
}

void show(char * s, int i = 1){
    for (int j=0;j<i;j++){
        cout<<s<<endl;
    }
}

int main(){
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";
    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Gotowe!");
    return 0;
}