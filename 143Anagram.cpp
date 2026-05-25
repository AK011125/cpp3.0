//anagram ->> rearrange a word to get a new word

#include<iostream>
#include<vector>
using namespace std;

bool isAnagram(string s1, string s2){
    // create freq array
    vector<int> freq(26,0);

    //if length are different for s1 and s2 return false
    if(s1.length()!= s2.length()){
        return false;
    }

    //store freq of char in s1 and s2
    for(int i = 0; i<s1.length();i++){
        freq[s1[i]-'a']++;  // for s1, we are incrementing freq of char
        freq[s2[i]-'a']--;  // for s2, we are decermenting freq of char
    }

    //checking if freq of every char is 0
    for(int i = 0; i< 26; i++){
        if(freq[i]!= 0){
            return false;
        }
    }

    return true;
}
int main(){
    string s1 , s2;
    cout<<"Enter the strings : ";
    cin>>s1>>s2;

    if(isAnagram(s1,s2)){
        cout<<"Strings are anagrams"<<endl;
    }else{
        cout<<"Strings are not anagrams"<<endl;
    }
    return 0;
}

// time complexity ->> O(length of string)
// space complexity ->> O(26) or O(1)