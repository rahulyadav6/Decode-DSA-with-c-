#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    for(auto ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int ans[n-k+1];
    int prevNeg = -1;
    for(int i=0; i<k; i++){
        if(arr[i] < 0){
            prevNeg = i;
            break;
        } 
    }
    if(prevNeg == -1) ans[0] = 1;
    else ans[0] = arr[prevNeg]; 

    int i=1;
    int j=k;
    while(j<n){
        if(prevNeg >= i){
            ans[i] = arr[prevNeg];
        }else{
            prevNeg = -1;
            for(int x=i; x<=j;x++){
                if(arr[x] < 0){
                    prevNeg = x;
                    break;
                }
            }
            if(prevNeg != -1) ans[i] = arr[prevNeg];
            else ans[i] = 1;  
        }
        i++;
        j++;
    }
    for(auto ele: ans){
        cout<<ele<<" ";
    }
}