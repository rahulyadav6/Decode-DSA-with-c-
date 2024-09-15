#include <bits/stdc++.h>
using namespace std;
int maxPrint(int arr[], int n, int idx, int maxValue){
    if(n==idx) return maxValue;
    if(arr[idx] > maxValue) maxValue = arr[idx];
    maxPrint(arr,n,idx+1,maxValue);
}
int main(){
    int arr[] = {1,20,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    cout<<maxPrint(arr,n,0,max);
}