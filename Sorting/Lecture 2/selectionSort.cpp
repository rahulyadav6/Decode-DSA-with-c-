#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2};
    for(auto ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=i; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(auto ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}