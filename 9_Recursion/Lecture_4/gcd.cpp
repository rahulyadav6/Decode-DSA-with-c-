#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b%a == 0) return a;
    else return gcd(b%a,a);
}
int main(){
    int a = 23;
    int b = 45;
    cout<<gcd(a,b);
}