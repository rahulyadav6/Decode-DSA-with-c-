/*
sort a string in decreasing order of values associated after removal of values smaller than x
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "AZYZXBDJKX";
    string str = "";
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i] >='X') str+=s[i];
    }
    int n2 = str.size();

    cout<<str<<endl;
    for(int i=0; i<n2-1; i++){
        bool flag = true;
        for(int j=0; j<n2-1-i; j++){
            if(str[j] > str[j+1]){
                swap(str[j],str[j+1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }
    cout<<str<<endl;
}