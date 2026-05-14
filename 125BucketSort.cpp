#include <iostream>
using namespace std;

void bucketSort(float arr[], int size){
    vector<vector<float>> bucket(size, vector<float>());

    //step 1

    //step 2
    for(int i=0;i<size;i++){
        int index = arr[i]*size;
        bucket[index] .push_back(arr[i]);

    }

    //step 3
    for(int i =0; i<size ;i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(), bucket[i].end());
        }
    }

    //step 4
    int k =0;
    for(int i=0;i<size;i++){
        for(int j=0; j<bucket[i].size();j++){
            arr[k++]= bucket[i][j];
        }
    }
}

int main(){
    float arr[] = {0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
    int size = sizeof(arr)/ sizeof(arr[0]);

    bucketSort(arr, size);

    for(int i =0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//if numbers are in differ range so normalise them smartly 
// range = (max - min)/size
// index = (arr[i] - min)/range
// index = (arr[i]-min)/(max-min) * size



// void bucketSort(float arr[], int size){
//     vector<vector<float>> bucket(size, vector<float>());

//     //step 1
        //finding range

//        float max_ele = arr[0];
//        float min_ele = arr[0];
//        for(int i =1; i<size;i++){
//            max_ele = max(max_ele, arr[i]);
//            max_ele = min(min_ele, arr[i]);
//        }
//      float range = (max_ele-min_ele)/size;

//     //step 2
//     for(int i=0;i<size;i++){
//         int index = (arr[i]-min_ele)/range;
//          //boundary condition
//          float diff = (arr[i]-min_ele)/range - index;
//          if(diff == 0&& arr[i] != min_ele){
//              bucket[index] .push_back(arr[i]);
//          }else{
//              bucket[index].push_back(arr[i]);
//          }
//     }

//     //step 3
//     for(int i =0; i<size ;i++){
//         if(!bucket[i].empty()){
//             sort(bucket[i].begin(), bucket[i].end());
//         }
//     }

//     //step 4
//     int k =0;
//     for(int i=0;i<size;i++){
//         for(int j=0; j<bucket[i].size();j++){
//             arr[k++]= bucket[i][j];
//         }
//     }
// }


//Time and space complexity
// avg -> O(n+k)
// worst -> O(n^2)

// space -> O(n+k)