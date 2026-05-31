//Runtime Polymorphism :- 
//          resolved at runtime
//          using function overriding
//          child class defines a function of parent class

#include<iostream>
using namespace std;

class Parent{
public:
    virtual void print(){               // function overriding using virtual
        cout<<"parent class"<<endl;
    }
    void show(){
        cout<<"parent class"<<endl;
    }
};

class Child: public Parent{
public:
    void print(){
        cout<<"child class"<<endl;
    }
    void show(){
        cout<<"child class"<<endl;
    }
};

int main(){
    Parent *p;
    Child c;

    p = &c;  //assigning object
    p->print(); // output is child bcz of function overriding
    p->show(); // output is parent bcz no virtual no function overriding here

    return 0;
}