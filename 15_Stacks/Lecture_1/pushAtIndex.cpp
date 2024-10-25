#include <bits/stdc++.h>
using namespace std;
void print(stack<int>& st){
    stack<int>temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    //putting elements back to st.
    while(temp.size()){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void pushAtIndex(stack<int>& st,int idx, int val){
    stack<int>temp;
    while(st.size() > idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
    pushAtIndex(st,2,80);
    print(st);
}