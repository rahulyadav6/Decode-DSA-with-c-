#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    vector<int>v(st.size());
    int i=0;
    while(st.size()){
        v[i] = st.top();
        st.pop();
        i++;
    }
    for(int i=0; i<v.size(); i++){
        st.push(v[i]);
    }
    while(st.size()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}