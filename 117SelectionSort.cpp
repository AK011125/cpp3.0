#include<iostream>
#include<vector>
using namespace std;
//Repeatedly find the min element in unsorted arr and put it at begining 
// max at ending 
void selectionSort(vector<int>&v){
    int n = v.size();

    for(int i = 0; i< n; i++){
        //finding min element in unsorted array
        int min_index = i;
        for(int j = i+1; j< n; j++){
            if(v[j]<v[min_index]){
                min_index = j;
            }
        }
        //placing min element at begining
        if(i != min_index){
            swap(v[i],v[min_index]);
        }
    }
}

int main(){
    int n;
    cout<<"Enter the length of vector : ";
    cin>>n;

    vector <int> v(n);

    for(int i = 0; i< n; i++){
        cin>>v[i];
    }

    selectionSort(v);

    for(int i = 0; i< n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

//why its called selection sort 
// bcz it select the element from ith position each time 
// and then place it on its fix postion either its max or min
// here in this code its min 

//why it select from ith position
// bcz 1 to i-1 position arr is already sorted

//Time and space complexity
// Total iterations are n(n-1)/2
// Time complexity is O(n^2)
// here best and worst both are same
// Space complexity is O(1) bcz no extra space use

// Stable or not stable 
// example :- 3 4 3* 2
// sorted :- 2 3* 3 4
// so unstable

//application of this 
//  example : - 3 4 1 2 
// 1st iteration :- 1 4 3 2
// 2nd iteration :- 1 2 3 4 

// max swap in selection sort is O(N)
// while in bubble sort it was O(n^2) as total swap were n(n-1)/2
// so its less costly to use selection sort here 