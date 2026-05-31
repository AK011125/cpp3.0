//binding of methods & variables together into a single unit called [class]
//also leads to data abstraction/ hiding
// class ->> abstract data type (ADT)

#include<iostream>
using namespace std;

class ABC{
    int x;
    public:
    void set(int n){
        x = n;
    }

    int get(){
        return x;
    }
};

int main(){
    ABC obj1;
    obj1.set(30);

    cout<<obj1.get()<<endl;

    return 0;
}

//Abstraction :- enables us to display only essential 
// information while hiding implementation details