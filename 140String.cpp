#include<iostream>
using namespace std;
int main(){
    string str = "abcdef";

    string str1("ghijkl");
    cout<<str<<endl<<str1<<endl;

    // string str2;
    // cout<<"Enter the str : ";
    // cin>>str2;
    // cout<<str2<<endl;

    string str3;
    cout<<"Enter the str : ";
    getline(cin,str3);
    cout<<str3<<endl;

    // str = "college" ->> 0 to 7 index as 7 have /n null character
    // ASCII ->> a to z = 97 to 122 
    // A to Z = 65 to 90 
    // char  ch ='a';
    // cout<<int(ch);

    // it is differ from character arr as it is dynamic memory means
    // we dont need to allocate its size it can be expand later also
    
    return 0;
}