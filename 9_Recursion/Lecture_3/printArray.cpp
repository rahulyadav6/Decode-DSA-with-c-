#include <iostream>
using namespace std;
void printArray(int arr[], int n, int idx){
    if(n==idx) return;
    cout<<arr[idx]<<" ";
    printArray(arr,n,idx+1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n,0);
}