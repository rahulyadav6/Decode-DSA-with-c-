#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<=n-1; i++){
        int j = i;
        while(j >=1){
            if(arr[j] >= arr[j-1]) break;
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }
    for(auto ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}