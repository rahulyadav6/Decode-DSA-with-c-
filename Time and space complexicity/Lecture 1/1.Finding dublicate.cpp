#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {6,3,2,4,1,7,5,5};
    int sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    n--;
    int sum2 =n*(n+1)/2;
    // cout<<sum<<" "<<sum2;
    cout<<"Dublicate element in array is: "<<sum-sum2;
}