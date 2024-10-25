#include <bits/stdc++.h>
using namespace std;
void displayRev(stack<int>& st){
    if(st.size() == 0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRev(st);
    st.push(x);
}
void displayNormal(stack<int>& st){
    if(st.size() == 0) return;
    int x = st.top();
    st.pop();
    displayNormal(st);
    cout<<x<<" ";
    st.push(x);
}
void pushAtBottomRec(stack<int>& st, int val){
    if(st.size() == 0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottomRec(st,val);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size() == 1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottomRec(st,x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);




    displayNormal(st);
    // displayRev(st);
    // pushAtBottomRec(st,-10);
    cout<<endl;
    reverse(st);
    displayNormal(st);
}