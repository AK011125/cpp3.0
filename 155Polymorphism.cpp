// Polymorphism :- ability of object/ methods to take different forms
// Two types : 
// Compile time polymorphism
//      Function overloading :- Define a no of functions while same function name they
//                  perform differnetly acc to arguments passed (how many and type)
//                  For example :- Shape Area() -> Circle , Square, Triangle
//
//      Operator overloading :- like we use '+' for strings concatination and also for addition

#include <iostream>
using namespace std;

class sum{
public:
    void add(int x, int y){
        int sum = x+y;
        cout<<sum<<endl;
    }

    void add(int x, int y, int z){
        int sum = x+y+z;
        cout<<sum<<endl;
    }

    void add(float x, float y){
        float sum = x + y;
        cout<<sum<<endl;
    }

};

int main(){

    sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float (3.3),float (3.2));

    return 0;
}