#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,14,8,2,4,7,6,5,3,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<((n/2)+1); i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    for(auto ele:arr){
        cout<<ele<<" ";
    }
}