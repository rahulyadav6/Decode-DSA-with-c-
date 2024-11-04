#include <bits/stdc++.h>
using namespace std;
void reverse(queue<int>& q){
    stack<int>st;
    while(q.size()>0){
        int x = q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()){
        int x = st.top();
        q.push(x);
        st.pop();
    }
}
void display(queue<int>& q){
    for(int i=0; i<q.size(); i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverse(q);
    display(q);

}