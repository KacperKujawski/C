#ifndef STACK_H_
#define STACK_H_

template <class T>
class Stack{
    private:
        int rozm;
        T * dana;
        int top;
    public:
        Stack(){dana = new T[10]; top = 0; rozm = 10;}
        Stack(int r){dana = new T[r]; top = 0; rozm = r;}
        ~Stack(){delete [] dana;}
        bool Pop(T & d);
        bool Push(const T & d);
        bool Isempty() const;
        bool Isfull() const;
};

#endif