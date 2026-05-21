// Search to find peak element in mountain array

#include<iostream>
#include<vector>
using namespace std;

int peakInMount(vector<int> &v){
    int lo = 0, hi = v.size()-1;
    int n = v.size();

    int ans = -1;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(mid ==0){
            if(v[mid]>v[mid+1]){
                return 0;
            }else{
                return 1;
            }
        }else if(mid == n-1){
            if(v[mid]>v[mid-1]){
                return n-1;
            }else {
                return n-2;
            }
        }else{
            if(v[mid] > v[mid+1] and v[mid] > v[mid-1]){
                return mid;
            }else if(v[mid]>v[mid-1]){
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> v = {0,1,2,3,4,2};
    cout<<peakInMount(v);
    return 0;
}