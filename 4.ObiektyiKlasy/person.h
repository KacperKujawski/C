#ifndef PERSON_H_
#define PERSON_H_

#include<iostream>

class Person{
    private:
        static const int LIMIT = 256;
        std::string lname;
        char fname[LIMIT];
    public:
        Person(){lname="";fname[0]='\0';}
        Person(const std::string &ln,const char * fn = "Hej Ty");
        void Show() const;
        void FormalShow() const;
};

#endif