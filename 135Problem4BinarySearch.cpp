// Search to find peak element in mountain array

#include<iostream>
#include<vector>
using namespace std;

int peakInMount(vector<int> &v){
    int lo = 0, hi = v.size()-1;

    int ans = -1;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(v[mid]>v[mid-1]){
            ans= mid;
            lo= mid+1;
        }else{
            hi= mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {0,2,4,1,0};
    cout<<peakInMount(v);
    return 0;
}