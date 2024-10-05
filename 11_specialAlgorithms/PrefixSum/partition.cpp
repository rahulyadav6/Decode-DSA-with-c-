#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,5,5,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    //formation of prefix sum array.
    for(int i=1; i<n; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    int idx = -1;
    for(int i=0; i<n; i++){
        if(2*arr[i] == arr[n-1]){
            idx = i;
            break;
        }
    }
    if(idx != -1) cout<<"Yes it can be partitioned at index "<<idx;
    else cout<<"Cannot be partitioned";
}