// Types of inheritance :- 
// single iheritance :  // (example : c1)
// Multi level inheritance : // A-> B -> C (example : gc)
// Multiple Inheritance : // More than 1 Parent class (example : c2)
// Hierarchical Inheritance : // when a Parent class have more child classes (example : c1 and c2)
// Hybrid Inheritance : // combination of more than 1 inheritance types (example : c1 and c2)

#include<iostream>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"Parent class"<<endl;
    }
};

class Parent2{
public:
    Parent2(){
        cout<<"Parent2 class"<<endl;
    }
};

class Child: public Parent{
public:
    Child(){
        cout<<"Child class"<<endl;
    }
};

class Child2: public Parent, public Parent2{
public:
    Child2(){
        cout<<"Child class"<<endl;
    }
};

class GrandChild: public Child{
public:
    GrandChild(){
        cout<<"Grandchild class"<<endl;
    }
};

int main(){
    Child c1; // Single Inheritance
    // its output is Parent then Child

    GrandChild gc; // Multi Level Inheritance
    // its output is Parent then Child then Grandchild

    Child2 c2; // Mutiple Iheritance
    // its output is Parent then Parent2 then Child

    return 0;
}