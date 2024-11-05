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
    q.push(7);
    q.push(8);
    display(q);

    //with the use of extra two stacks and extra queue.
    //check space efficient solution in next file reorderQueue2.cpp
    

    queue<int> ans;
    stack<int>st;
    int n = q.size();
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    stack<int>temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            ans.push(temp.top());
            temp.pop();
        }else{
            ans.push(q.front());
            q.pop();
        }
    }
    display(ans);
}