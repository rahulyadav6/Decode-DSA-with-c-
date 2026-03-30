#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the sum to be searched: ";
    cin>>x;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            cout<<x<<" found at index "<<i;
        }
    }

}