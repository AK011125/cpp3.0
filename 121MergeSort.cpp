#include <iostream>
using namespace std;

//Concept of divide and conqure 

// divide problem into subproblems 
// then solve sub problems then combine soln to get final output

void merge(int arr[], int l , int mid, int r){

    int an = mid - l +1;
    int bn = r - mid;

    // create 2 temp arr
    int a[an] , b[bn];

    for(int i = 0;i<an; i++){
        a[i] = arr[l+i];
    }

    for(int j = 0; j< bn;j++){
        b[j] = arr[mid+1+j];
    }

    int i = 0 , j = 0; //initial index of array a and b
    int k = l;        //initial index of merged subarray
    while(i<an &&j<bn){
        if(a[i]<b[j]){
            arr[k++] = a[i++];
        }else{
            arr[k++] = b[j++];
        }
    }

    while(i<an){
        arr[k++] = a[i++];
    }

    while(j<bn){
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int l, int r){
    //base case
    if(l>=r){
        return;
    }

    int mid = (l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, mid, r);

}

int main(){

    int arr [] = {10, 28, 24, 6, 34, 18, 38, 44};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0,n-1);

    for(int i = 0; i <n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

//Time and space complexity
// T(n) = T(n/2) + T(n/2) + n
// T(n) = 2T(n/2) + n
// similarly
// T(n/2) = 2T(n/4) + n/2
// T(n/4) = 2T(n/8) + n/4
// ...... so on
// T(1) = 1           // T(n/2^k) = 1 here n/2^k = 1
//                    // so k = log(n) base 2

// adding all by multipling * 1, *2 , *4, *8 .....
// T(n) = n + n + n + n ..... k times
// T(n) = nlogn
// which is less then n^2


// Master's Theorem :-  to find time complexity of Divide and Conqure Algorithms
// using recurance relation :- 
// T(n) = aT(n/b) + Theta(n^k log^p(n))
// a>= 1, b>= 1 , k>=0 , p is real no

// Rest in image

// for space complexity
// Recursive stack will have max logn calls
// merge function temp array -> N 
// O(n) space complexity
// O(nlogn) time complexity

//Stable as position of equal elements not change 
//applications :- where large sets and linked list

// Drawbacks :- slow for smaller tasks
// O(n) extra space
// goes through whole process even if arr is sorted
