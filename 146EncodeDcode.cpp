//an encoded string is given, decode it as 2[bc] ->> bcbc, 2[b3[ef]] ->> befefefbefefef
// 3[b2[ca]] ->> bcacabcacabcaca

#include<iostream>
using namespace std;

string decodedString(string s){
    string result ="";

    //traversing the encoded string
    for(int i=0; i<s.length(); i++){

        if(s[i]!=']'){
            result.push_back(s[i]);
        }else{
            //extract str from result
            string str = "";
            while(!result.empty() && result.back() != '['){
                str.push_back(result.back());
                result.pop_back();
            }

            //reversing the str
            reverse(str.begin(),str.end());

            //remove last char from result which is [
            result.pop_back();

            //extract num from result
            string num = "";
            while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }

            //reverseing the num string
            reverse(num.begin(),num.end());

            //convert string to integer
            int int_num = stoi(num);                          //stoi func is use to convert a string in int
            
            //inserting str in result int_num times
            while(int_num){
                result += str;
                int_num--;
            }
        }
    }
    return result;
}

int main(){
    string str;
    cout<<"Enter input like 3[b2[ca]] : ";
    cin>>str;
    cout<<decodedString(str)<<endl;

    return 0;
}

//Time complexity and space complexity
//space is O(n) n is length of decoded str
// time is O(m) m is length of result str
