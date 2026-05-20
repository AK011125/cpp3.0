//A rotated sorted arr is given find minimum element

#include<iostream>
#include<vector>
using namespace std;

int findMinInSortedRotated(vector<int>&v){
    if(v.size() == 1) return v[0];
    int lo = 0, hi = v.size()-1;
    if(v[lo] < v[hi]){
        return lo;
    }
    while(lo<= hi){
        int mid = lo + (hi-lo)/2;

        if(v[mid] > v[mid +1]) return mid+1;
        if(v[mid] < v[mid-1]) return mid;
        if(v[mid] > v[lo]) {
            lo = mid +1;
        }else{
            hi = mid -1;
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int> v;
    for(int i = 0; i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Index of min element is : "<<findMinInSortedRotated(v);

    return 0;
}