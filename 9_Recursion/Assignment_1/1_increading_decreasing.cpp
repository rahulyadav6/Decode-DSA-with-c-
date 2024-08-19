#include <bits/stdc++.h>
using namespace std;
void incDec(int n,int i){
    if(i==n){
        cout<<i<<" ";
        return;
    }
    cout<<i<<" ";
    incDec(n,i+1);
    cout<<i<<" ";
}
int main(){
    incDec(5,1);
}