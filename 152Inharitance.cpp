// Abstraction :- enables us to display only essential 
// information while hiding implementation details

// for example pow(x,y) -> here we just see result not how its obtained

// Inharitance :- a class inherit properties of another class

#include <iostream>
using namespace std;

class Parent{
    public:
        int x = 101;

    protected:
        int y = 102;

    private:
        int z = 103;

};


// Modes of inheritance and Access Specifiers :- 
// Public, Private , Protected
// by default private , we can acess public from anywhere in the code
// protected will acess in own class parent and derived class only
// private can we acess in own class only

class Child1 : public Parent{
    // x will remain public
    // y will remain protected
    // z will not be accessible
};

class Child2 : private Parent{
    // x will be private
    // y will be private
    // z will not be accessible
};

class Child3 : protected Parent{
    // x will be protected
    // y will be protected
    // z will not be accessible
};

int main(){

    Parent p;
    cout<<p.x;

    // cout<<p.y;  // error
    // we cant use protected and private here in main too
    return 0;
}