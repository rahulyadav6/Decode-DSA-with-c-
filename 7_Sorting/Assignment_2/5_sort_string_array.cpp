#include <bits/stdc++.h>
using namespace std;
int main(){
    string arr[] = {"Raghav", "Sanket", "Harsh", "Urvi","Vishawa"};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }
    for(auto ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}