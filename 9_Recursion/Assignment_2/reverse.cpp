#include <iostream>
using namespace std;
int reverse(int n, int rev){
    if(n==0) return rev;
    rev*=10;
    rev+=(n%10);
    reverse(n/10,rev);
}
int main(){
    cout<<reverse(129456,0);
}