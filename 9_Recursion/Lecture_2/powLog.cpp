#include <iostream>
using namespace std;
int pow(int x, int n){
    if(n==1) return x;
    int ans = pow(x,n/2);
    if(n%2==0) ans * ans;
    else return ans * ans * x;

}
int main(){
    pow(3,8);
}