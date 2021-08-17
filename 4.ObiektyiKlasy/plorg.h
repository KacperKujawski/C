#ifndef PLORG_H_
#define PLORG_H_

#include<cstring>

class Plorg{
    private:
        static const int LIMIT = 20;
        char imie[LIMIT];
        int sytosc; 
    public:
        Plorg(){strcpy(imie,"Plorga"); sytosc=50;}
        Plorg(const char * c,const int s);
        void ChangeSytosc(const int s);
        void ShowInfo() const;
};

#endif