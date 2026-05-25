#include<iostream>
using namespace std;
int main(){

    string str ="abcdefghij";
    cout<<str<<endl;

    reverse(str.begin(),str.end()); // O(length of str)
    cout<<str<<endl;

    //str.substr(starting position, length)  
    cout<<str.substr(3,2)<<endl; // O(length given in func)

    // str concatination
    string str1 = "onmlk";

    cout<<str1+str<<endl;

    char s1[20] = "college"; // char array of size 20
    char s2[20] = "wallah"; 
    cout<<strcat(s1,s2)<<endl;  //strcat(s1,s2) use to concatinate two char arr

    char ch = 'a';
    str.push_back(ch);
    cout<<str<<endl;

    return 0;
}