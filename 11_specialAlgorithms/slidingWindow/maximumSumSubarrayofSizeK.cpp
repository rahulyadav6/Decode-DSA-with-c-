#include <iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int maxIdx = 0;
    int prevSum = 0; 
    for(int i=0; i<k; i++){
        prevSum += arr[i];
    }
    int i=1;
    int j=k;
    while(j<n){
        prevSum = prevSum + arr[j] - arr[i];
        if(maxSum  < prevSum){
            maxSum = prevSum;
            maxIdx = i;
        }
        prevSum = curSum;
        i++;j++;
    }
}