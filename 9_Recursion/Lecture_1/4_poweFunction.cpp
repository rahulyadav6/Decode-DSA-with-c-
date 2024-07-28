#include <bits/stdc++.h>
using namespace std;
int power(int n, int b){
    if(b==0) return 1;
    return n * power(n,b-1);
}
int main(){
    cout<<power(2,3);
}