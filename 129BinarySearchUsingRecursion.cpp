#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &v, int target, int a, int b){
    if(a>=b) return -1;

    int mid = ((a+b)/2);
    if(v[mid] == target){
        return mid;
    }else if(v[mid]<target){
        return binarySearch(v, target , mid +1, b);
    }else{
        return binarySearch(v, target , a, mid-1);
    }
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

    int a =0; // start of the search space
    int b = v.size()-1; //end of search space

    cout<<"Index of target element is : "<<binarySearch(v, target, a, b);


    return 0;
}
//here space and time both complexity are O(logn)

// sometimes with concentraints it shows overflow
// so we modify it as
// mid = a + (b-a)/2