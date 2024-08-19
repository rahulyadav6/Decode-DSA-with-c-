#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n%2==0) n--;
    if(n==1) return 1;
    return n + sum(n-2);
}
int main(){
    cout<<sum(8);
}