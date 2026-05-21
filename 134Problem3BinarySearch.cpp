//A rotated sorted arr is given find target element

#include<iostream>
#include<vector>
using namespace std;

int findTargetInSortedRotated(vector<int>&v, int target){
    
    int lo = 0, hi = v.size()-1;

    while(lo<= hi){
        int mid = lo + (hi-lo)/2;

        if(v[mid] == target) return mid;
        if(v[mid] >= v[lo]){
            if(target >= v[lo] and target <= v[mid]){
                hi = mid -1;
            }else{
                lo = mid +1;
            }
        }else{
            if(target >= v[mid] and target <= v[hi]){
                lo = mid +1;
            }else{
                hi = mid -1;
            }
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

    int target;
    cout<<"Enter target element : ";
    cin>>target;

    cout<<"Index of min element is : "<<findTargetInSortedRotated(v, target);

    return 0;
}
//time complexity is O(log n)
//space complexity is O(1)

// if 1st and last element are euql so delete both then do this