#include <iostream>
using namespace std;
int main() {
    // int arr[5]={7,2,32,5,20};
    int arr[5]={4,2,7,9,8};
    int n = 5;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            flag = false;
            break;
        }
        if(flag == false) break;
    }
    if(flag == true) cout<<"Yes given array is almost sorted.";
    else cout<<"NO";
    return 0;
}