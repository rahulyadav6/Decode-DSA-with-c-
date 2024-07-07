#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,1,5,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    //insertion sort
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
    int num1=0;
    for(auto ele:arr){
        num1*=10;
        num1+=ele;
    }
    int k = n-1;
    while(arr[k] == arr[k-1]){
        k--;
    }
    swap(arr[k],arr[k-1]);
    int num2 = 0;
    for(auto ele:arr){
        num2*=10;
        num2+=ele;
    }
    cout<<num1<<" "<<num2<<endl;
    cout<<"minimum sum is :"<<num1 + num2;
}