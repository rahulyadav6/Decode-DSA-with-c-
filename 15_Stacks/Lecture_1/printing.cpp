#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    //printing in reverse order;


    // while(st.size()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }



    //using extra stack;

    stack<int>st1;
    while(st.size()){
        cout<<st.top()<<" ";
        st1.push(st.top());
        st.pop();
    }
    cout<<endl;

    while(st1.size()){
        cout<<st1.top()<<" ";
        st.push(st1.top());
        st1.pop();
    }
    cout<<endl;
    cout<<st.size();
}