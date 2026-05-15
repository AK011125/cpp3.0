#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &v, int target){
    // define search space
    int a =0; // start of the search space
    int b = v.size()-1; //end of search space

    while(a<=b){
        int mid = ((a+b)/2);
        if(v[mid] == target){
            return mid;
        }else if(v[mid]<target){
            a = mid +1;
        }else{
            b = mid -1;
        }
    }
    return -1;
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