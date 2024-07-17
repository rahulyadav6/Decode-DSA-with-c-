#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=0; i<n; i++){
        if(i != arr[i]){
            cout<<i<<endl;
            flag = true;
            return 0;
        }
    }
    if(flag == false) cout<<"No any missing number.";
}