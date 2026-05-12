//sort array such that all zeroes are in end and maintain relative order of non zeros
#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int> &v){
    int n = v.size();
    for(int i =n-1; i>0 ; i--){
        int j = 0;
        bool flag = false;
        while(j!= i){
            if(v[j] == 0 && v[j+1] != 0){
                swap(v[j], v[j+1]);
                flag = true;
            }
            j++;
        }
        if(!flag) break; // if found false then break loop
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter the length of array : ";
    cin>>n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    fun(v);

    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}