#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 20;
    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            cout<<arr[mid-1];
            flag = true;
            break;
        }else if(arr[mid] < target) low=mid+1;
        else high=mid-1;
    }
    if(flag == false)cout<<arr[high];
}