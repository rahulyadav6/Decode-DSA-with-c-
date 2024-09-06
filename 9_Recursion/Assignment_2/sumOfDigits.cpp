#include <iostream>
using namespace std;
int sumOfDigits(int n, int sum){
    if(n==0) return sum;
    sum += (n%10);
    sumOfDigits(n/10,sum);
}
int main(){
    cout<<sumOfDigits(12345,0);
}