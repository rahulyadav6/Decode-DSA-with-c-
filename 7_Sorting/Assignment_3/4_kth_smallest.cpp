#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,14,8,2,4,7,6,5,3,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    for(int i=0; i<k; i++){
        int min = arr[i];
        int mindx = -1;
        for(int j=i; j<n; j++){
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(auto ele:arr){
        cout<<ele<<" ";
    }
}