#include<iostream>
using namespace std;

void countSort(vector<int> &v){
    int n = v.size();

    //find the max element
    int max_ele = INT_MIN;
    for(int i =0;i<n;i++){
        max_ele = max(v[i], max_ele);
    }

    // create the freq array
    vector<int> freq(max_ele+1, 0);
    for(int i = 0; i<n;i++){
        freq[v[i]]++;
    }

    //calculate cf
    for(int i = 1; i<=max_ele;i++){
        freq[i] += freq[i-1];
    }

    //calculate the sorted array
    vector<int>ans(n);
    for(int i =n-1;i>=0;i--){
        ans[--freq[v[i]]] = v[i];
    }

    //copy back ans
    for(int i =0;i<n;i++){
        v[i]= ans[i];
    }

}

int main(){

    int n;
    cin>>n;
    vector<int>a(n);

    for(int i = 0; i<n;i++){
        cin>>a[i];
    }

    countSort(a);

    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

//Time and space complexity
// O(3n + max) if max is high so not a good option 
// max should be only of n 2n 3n not n ^2
// so overall time complexity is O(n) if max is small
// space complexity O(n+k)

//prefer when freq of no is high
//floating no so dont prefer like 3.2 3.4 
//negative no so dont use
// or normalise like subtract a specific no from all no
// after sorting re normalise
// if no are not comariable so dont use
// use radix sort here