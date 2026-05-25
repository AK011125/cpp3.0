//isomorphic ->> 

#include<iostream>
#include<vector>
using namespace std;

bool isIsomorphic(string s1, string s2){

    vector<int> v1(128,-1);
    vector<int> v2(128,-1);

    
}
int main(){
    string s1, s2;
    cin>>s1>>s2;

    if(isIsomorphic(s1,s2)){
        cout<<"Yes Isomorphic";
    }else{
        cout<<"Not Isomorphic";
    }
    return 0;
}