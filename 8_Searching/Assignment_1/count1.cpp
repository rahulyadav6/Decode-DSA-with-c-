/*
Given a sorted binary array, efficiently count the total number of 1’s in it.
Input 1 : a = [0,0,0,0,1,1]
Output 1: 2
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {0,0,0,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == 1){
            if(arr[mid - 1] != 1){
                cout<<n-mid;
                flag = true;
                break;
            }else high = mid -1;
        }else if(arr[mid] == 0) low = mid + 1;
    }
    if(flag == false) cout<<0;
}