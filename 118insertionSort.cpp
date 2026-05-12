#include<iostream>
using namespace std;
//Repeatedly take elements from unsorted subarray and insert in sorted subarray

void insertionSort(vector <int> &v){

    int n = v.size();
    for(int i = 1; i<n; i++){
        int temp = v[i];

        // finding correct position for current element
        int j = i-1;

        while(j>=0 && v[j]>temp){
            v[j+1] = v[j];
            j--;
        }
        //inserting current element
        v[j+1] = temp;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the length of arr : ";
    cin>>n;

    vector<int> v(n);

    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    insertionSort(v);

    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

//Time and space complexity
// total itelation in worst case is 1 + 2+ 3 +.....n-1 = n(n-1)/2
// worst case time complexity is O(n^2)
// space complexity is O(1)

// in selection sort in best case also time complexity is O(n^2)
// but here in insertion sort best case time complexity is O(n)

// Application 
// good when there are few unsorted element

// stable or not 
// 3 4 3* 2
// 3 | 4 3* 2
// 3 4 | 3* 2
// 3 3* 4 | 2  (3==3* so it will not move 3)
// 2 3 3* 4
// So Stable  