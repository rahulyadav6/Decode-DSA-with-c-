#include <iostream>
using namespace std;
void generateBinary(string s, int n ){
    if(s.length() == n){
        cout<<s<<endl;
        return;
    }
    generateBinary(s+'0',n);
    if(s=="" || s[s.size()-1] == '0') generateBinary(s+'1',n);
}
int main(){
    generateBinary("",3);
}