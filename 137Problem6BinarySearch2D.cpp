// find a target element in 2 d matrix
//each row is sorted from left to right and  first integer of each row 
//is greater than the last integer of previous row

// Search to find peak element in mountain array

#include<iostream>
#include<vector>
using namespace std;

int search2D(vector<vector<int>> &v, int target){
    int n = v.size(); // no of rows
    int m = v[0].size(); // no of cols
    int lo = 0, hi = n*m -1;

    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        int x = mid/m;
        int y = mid%m;

        if(v[x][y] == target){
            return true;
        }else if(v[x][y] < target){
            lo = mid+1;
        }else{
            hi = mid-1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target;
    cout<<"Enter target no : ";
    cin>>target;
    cout<<search2D(v, target);
    return 0;
}

// O(log (nm))