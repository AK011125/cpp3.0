//Friend Function :- Non - member function which can access private member of the class
// if we dont want to make child or parent so we use this to acess the elements

#include<iostream>
using namespace std;

class A{
    int x;
public:
    A(int y){ //constructor A to give x a value as input
        x=y;
    }

    friend void print(A &obj); // we pass friend then define the same function defination here
};

void print(A &obj){     //it can be a function from other class also 
    cout<<obj.x<<endl;
}

int main(){

    A obj(5);
    //cout<<obj.x;  // we cant access it from here
    print(obj);     // always use print for friend function 

    return 0;
}