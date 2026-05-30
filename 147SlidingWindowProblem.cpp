// given a binary str, and a int k, return max no of 
// consecutive 1's in the string if you can flip at most k 0's

//sliding window technique :- use to find sortest or longest sequence for given condition
//"abcdef" ->> "abc" "bcd" "cde" "def" windows for 3 length

#include<iostream>
using namespace std;

int longestOnes(string str, int k){
    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_length = 0;

    for(;end<str.length();end++){

        if(str[end]=='0'){
            zero_count++;
        }

        while(zero_count>k){
            if(str[start] == '0') zero_count--;
            start++; // contracting our window
        }

        //if zero_count <= k
        max_length = max(max_length, end-start+1);
    }
    return max_length;
}

int main(){

    string str;
    cout<<"Enter binary string : ";
    cin>>str;

    int k;
    cout<<"Enter max flips : ";
    cin>>k;

    cout<<longestOnes(str,k)<<endl;
    return 0;
}

//time complexity is O(n) where n is length of binary str
// space is O(1)