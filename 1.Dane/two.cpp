/*Napisz krotki program, ktory poprosi uzytkownika o podanie wzrostu w stopach i calach oraz wagi w funtach(wartosci nalezy zapisywac w zmiennych)
Wynikiem ma byc wskaznik masy ciala,BMI. Aby wyliczyc BMI, najpierw trzeba zamienic wzrost w stopach i calach na cale (1 stopa = 12 cali),
nastepnie zamienic wzrost na metry mnozac go przez 0,0254. Nastepnym krokiem bedzie zmiana wagi w funtach na kilogramy (dzielenie przez 2,2).
W koncu wyliczamy BMI, dzielac mase w kilogramach przez kwadrat wzrostu w metrach. Do zapisu poszczegolnych wielkosci charakterystycznych konwersji uzyj
stalych symbolicznych.*/

#include <iostream>
int main(){
    double cale,stopy,funty,metry,kg,bmi;


    std::cout<<"Program sluzy do wyliczania wskaznika masy ciala BMI.\n"<<"Podaj wzrost w stopach i calach oraz wage w funtach.\nStopy: ";
    std::cin>>stopy;
    std::cout<<"Cale: ";
    std::cin>>cale;
    std::cout<<"Funty: ";
    std::cin>>funty;
    cale += stopy*12;
    metry = cale * 0.0254;
    kg = funty/2.2;
    bmi = kg/(metry*metry);
    std::cout<<"Wskaznik BMI wynosi "<<bmi<<std::endl;
    return 0;
}