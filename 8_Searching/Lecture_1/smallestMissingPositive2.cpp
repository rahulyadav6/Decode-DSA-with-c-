//using binary search

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,8,9,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    int low = 0;
    int high = n-1;
    int ans = 0;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(mid == arr[mid]) low = mid+1;
        else{
            flag = true;
            ans = mid;
            high = mid -1;
        }


    }
    if(flag == false) cout<<"No any missing number.";
    else cout<<ans<<endl;
}