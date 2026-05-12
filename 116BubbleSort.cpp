#include<iostream>
#include<vector>
using namespace std;
//Repeatedly swap two adjacent elements if in wrong order

void bubbleSort(vector<int> &v){
    int n = v.size();

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter the length of arr : ";
    cin>>n;

    vector <int> v(n);

    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    bubbleSort(v);

    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

// Now here worst case time complexity is when 
// array is given in decending order

//Total no of swaps or ilterations in worst case is n(n-1)/2
// Time complexity is O(n^2)
// Space complexity is O(1)

//Optimised approch
//if we have nearly sorted arr so we use flag to check if swap was done or not
//and if swap was not done so we will make flag false and stop the sorting

//code
void bubbleSortoptimsed(vector<int> &v){
    int n = v.size();

    for(int i = 0; i < n-1; i++){
        bool flag = false;
        for(int j = 0; j < n-i-1; j++){
            if(v[j]>v[j+1]){
                flag = true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break; // it means if flag is false then break loop
    }
    return ;
}

//There are two type of sorting 
//stable and unstable

//stable in which equal elements are not changed or swaped

// for example :- 10,30,20,10,30*,40 here 30 = 30*
// so after sorting : - 10,20,30,30*,40 here 30 and 30* dont change

// bubble sorting is a stable sorting 