#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 30;
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid] < target) low = mid +1;
        else high = mid -1;
    }
    cout<<-1;
}