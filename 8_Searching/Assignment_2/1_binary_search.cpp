//Write a program to apply binary search in array sorted in decreasing order.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            cout<<mid<<endl;
            break;
        }else if(arr[mid] < target) low = mid+1; 
        else high = mid -1;
    }
}