// find 1st occurance of a number in a sorted array

#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &v, int target){
    // define search space
    int a =0; // start of the search space
    int b = v.size()-1; //end of search space
    int ans = -1;

    while(a<=b){
        int mid = a+(b-a)/2;
        if(v[mid] == target){
            ans = mid;
            b = mid-1;
        }else if(v[mid]<target){
            a = mid +1;
        }else{
            b = mid -1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the length of vector : ";
    cin>>n;

    vector<int> v;

    for(int i = 0; i< n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int target;
    cout<<"Enter the target element : ";
    cin>>target;

    cout<<"Index of target element is : "<<binarySearch(v, target);


    return 0;
}

//Time complexity
// Total iterations logn
// O(logn)
// space is O(1)