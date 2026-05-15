//find sqrt of given non negatve value of x round it off to the nearest floor integer value
#include<iostream>
using namespace std;

// using sqrt
int sqrtno(int x){
    return sqrt(x);
}

// without sqrt
int sqrtno2(int x){
    int ans =0;
    for(int i=1; i<=x;i++){
        if(i*i <= x){
            ans = i;
        }else{
            break;
        }
    }
    return ans;
} //here O(root(n))

//optimised approch
int sqrtno3(int x){
    int a = 1, b = x;
    int ans = -1;
    while(a <= b){
        int mid = a +(b-a)/2;
        if(mid*mid <= x){
            ans = mid;
            a = mid+1;
        }else{
            b = mid-1;
        }
    }
    return ans;
} // here O(log(n))

int main(){
    int x;
    cout<<"Enter a no : ";
    cin>>x;
    cout<<sqrtno(x)<<endl;

    cout<<sqrtno2(x)<<endl;

    cout<<sqrtno3(x);

    return 0;
}