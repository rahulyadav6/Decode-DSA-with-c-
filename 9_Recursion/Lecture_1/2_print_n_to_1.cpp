#include <bits/stdc++.h>
using namespace std;
void p(int n){
    if(n==0) return;
    cout<<n<<endl;
    p(n-1);
}
int main(){
    p(10);
}