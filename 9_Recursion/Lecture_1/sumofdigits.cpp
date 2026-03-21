#include <iostream>
using namespace std;

int f(int a, int sum) {
    if (a < 0) return sum;  
    int digit = a % 10;     
    int rem = a / 10;      
    return f(rem, sum + digit); 
}

int main() {
    int a = 123;
    int sum = f(a, 0); 
    cout << sum << endl;
    return 0;
}
