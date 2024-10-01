#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,2,5,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    while(i < n){
        int correctIdx = arr[i] - 1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(auto ele:arr){
        cout<<ele<<" ";
    }
}