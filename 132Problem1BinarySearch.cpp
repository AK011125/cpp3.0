//Given a sorted arr of integers find 1st and last position of target element
//follow 0 based indexing is index not find return [-1,-1]

#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int>&v, int target){
    int lo = 0, hi = v.size()-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(v[mid] == target){
            ans = mid;
            hi = mid-1;
        }else if(v[mid]>target){
            hi = mid -1;
        }else{
            lo = mid +1;
        }
    }
    return ans;
}

int upperbound(vector <int> &v, int target){
    int lo = 0, hi = v.size() -1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(v[mid] > target){
            ans = mid ;
            hi = mid -1; // discard right
        }else{
            lo = mid +1;
        }
    }
    return ans;
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

    vector<int> result ;

    int lb = lowerbound(v, target);
    if(v[lb] != target){
        result.push_back(-1);
        result.push_back(-1);
    }else{
        int ub = upperbound(v, target);
        result.push_back(lb);
        result.push_back(ub-1);
    }

    cout<<result[0]<<", "<<result[1];
    return 0;
}

//here time complexity is O(log n);

// earlier if we use loop so O(n);