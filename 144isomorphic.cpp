//isomorphic ->> 

#include<iostream>
#include<vector>
using namespace std;

bool isIsomorphic(string s1, string s2){

    vector<int> v1(128,-1);
    vector<int> v2(128,-1);

    if(s1.size() != s2.size()){ //if strings length does not match
        return false;
    }

    for(int i = 0; i<s1.size(); i++){
        if(v1[s1[i]] != v2[s2[i]]){ // check if value of char st idx i match in both v1 and v2
            return false;
        }
        v1[s1[i]] = v2[s2[i]] = i; // storing string position in vectors for char at idx i 
    }
    return true;
}
int main(){
    string s1, s2;
    cout<<"Enter the strings : ";
    cin>>s1>>s2;

    if(isIsomorphic(s1,s2)){
        cout<<"Yes Isomorphic";
    }else{
        cout<<"Not Isomorphic";
    }
    return 0;
}
//Time complexity = O(length of strings)
//space complexity = O(256) constant 