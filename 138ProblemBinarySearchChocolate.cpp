#include<iostream>
#include<vector>
using namespace std;

bool canDistChoco(vector<int> &arr, int mid, int s){
    int n = arr.size();
    int studentsReq = 1;
    int currSum = 0;
    for(int i = 0; i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(currSum + arr[i]>mid){
            studentsReq++;
            currSum = arr[i];
            if(studentsReq > s) return false;
        }else{
            currSum += arr[i];
        }
    }
    return true;
}

int disChoco(vector<int> &arr, int s){
    int n = arr.size();
    int lo = arr[0];
    int hi = 0;
    for(int i =0; i< arr.size(); i++){
        hi +=arr[i];
    }
    int ans =-1;
    while(lo<= hi){
        int mid = lo +(hi - lo)/2;
        if(canDistChoco(arr, mid, s)){
            ans = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the no of boxes : ";
    cin>>n;
    vector<int>v;
    for(int i =0;i<n;i++){
        int x;
        cout<<"Enter the no of chocolate in box : ";
        cin>>x;
        v.push_back(x);
    }
    int s;
    cout<<"Enter the no of students : ";
    cin>>s;

    cout<<disChoco(v,s);

    return 0;
}

// time complexithy is O(mlog(n))