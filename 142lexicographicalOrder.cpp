#include <iostream>
#include<vector>
using namespace std;

string countSort(string str){

    vector<int>freq(26,0);

    //sorting frequency of every character in string
    for(int i = 0; i<str.length();i++){
        int index = str[i]-'a';
        freq[index]++;
    }

    //create sorted string
    int j = 0;
    for(int i = 0; i<26;i++){
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }
    return str;
}
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;

    cout<<countSort(str);

    return 0;
}

// O(length of string) time
// O(26) space