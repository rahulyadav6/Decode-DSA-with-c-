#include <bits/stdc++.h>
using namespace std;
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
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
    int k = 8;
    if(k>q.size()) k = k%q.size();
    stack<int>st; 
    for(int i=0; i<k; i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    for(int i=0; i<q.size()-k; i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    display(q);

}