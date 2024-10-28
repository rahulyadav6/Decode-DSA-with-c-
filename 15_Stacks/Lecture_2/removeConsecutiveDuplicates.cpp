#include <bits/stdc++.h>
using namespace std;
int main(){
    string str = "aaabbcddaabffg";
    stack<char>st;
    st.push(str[0]);
    for(int i=1; i<str.size(); i++){
        if(st.top() != str[i]){
            st.push(str[i]);
        }
    }
    str = "";
    while(st.size()){
        str+=st.top();
        st.pop();
    }
    reverse(str.begin(),str.end());
    cout<<str<<" ";
}