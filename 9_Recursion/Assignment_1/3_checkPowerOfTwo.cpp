#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
    if(n==1) return true;
    if(n==0 || n%2!=0) return false;
    return isPowerOfTwo(n/2);
}
int main(){
    cout<<isPowerOfTwo(64);
}