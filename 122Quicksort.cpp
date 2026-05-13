#include<iostream>
using namespace std;

int partition(int arr[], int first, int last){
    int pivot = arr[last];
    int i = first -1;  // for inserting element < pivot
    int j = first;     // for finding element < pivot

    for(int j =0; j< last; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    //now i is pointing to the lst element < pivot 
    // correct position for pivot will be -> i+1
    swap (arr[i+1], arr[last]);
    return i+1;
}

void quickSort(int arr[], int first, int last){
    
    //base case
    if(first>=last){
        return ;
    }

    //recursive case
    int pi = partition(arr, first, last);
    quickSort(arr, first, pi-1);
    quickSort(arr, pi+1, last);
}

int main(){
    int arr [] = {20,12,35,16, 18, 30};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);

    for(int i = 0; i <n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

//Time and space complexity
//best case
// same as last merge sort like using median to divide it 
// into 2 equal halfs so that we can get best case 
// omega(nlogn)

//worst case
// using last element 
// total iterations are n(n-1)/2
// time complexity here is O(n^2)

//space complexity
// n recursive call in worst case
// O(n)

// randomise pivot is good option bcz last give worst case and median 
// itself need to be sort first
// pivot index = first + rand()%(last - first +1)

// Not a stable algorithm

//Applications :- in built sorting algorithm or use where memory is a concern

//Quick sort use for small data while merge is use in large data
// if memory is costly so use quick sort