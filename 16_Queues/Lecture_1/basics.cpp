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
void displayrev(queue<int>& q){
    for(int i=0; i<q.size(); i++){
        int x = q.back();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    //push, pop, front, back, size, empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;

    display(q);
    display(q);
}