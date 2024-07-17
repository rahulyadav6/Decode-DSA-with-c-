/*
Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
does not exist return -1.
Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
Output 1: 6
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 4;
    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            if(arr[mid+1] != target){
                flag = true;
                cout<<mid<<endl;
                break;
            }else{
                low = mid+1;
            }
        }else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    if(flag == false) cout<<-1;
}