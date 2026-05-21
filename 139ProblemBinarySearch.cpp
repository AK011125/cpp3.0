#include<iostream>
#include<vector>
using namespace std;

bool canPlaceStd(vector<int> &v, int s, int mid){
    int studentsReq = 1;
    int lastPlaced = v[0];
    for(int i = 1; i< v.size(); i++){
        if(v[i] - lastPlaced>= mid){
            studentsReq++;
            lastPlaced = v[i];
            if(studentsReq == s){
                return true;
            }
        }
    }
    return false;
}

int race(vector<int> &v, int s){
    int n = v.size();
    int lo = 1;
    int hi = v[n-1]-v[0];
    int ans = -1;
    while(lo<= hi){
        int mid = lo + (hi-lo)/2;
        if(canPlaceStd(v, s, mid)){
            ans = mid;
            lo = mid+1;
        }else{
            hi = mid-1;
        }
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the no of position : ";
    cin>>n;
    vector<int>v;
    for(int i =0;i<n;i++){
        int x;
        cout<<"Enter pos: ";
        cin>>x;
        v.push_back(x);
    }
    int s;
    cout<<"Enter of std : ";
    cin>>s;

    cout<<race(v,s);

    return 0;
}

// time complexithy is O(nlogn(xn-x1))