#include <iostream>
#include <string>
using namespace std;
int fn(string s, int sum, int idx){
    if(idx == s.size()) return sum;
    int d = s[idx] - '0';
    return fn(s,sum+d,idx+1);
}
int main(){
    string s = "1234";
    int sum = fn(s,0,0);
    cout<<sum;
}