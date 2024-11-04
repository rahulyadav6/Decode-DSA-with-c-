#include <bits/stdc++.h>
using namespace std;
int priority(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}
int solve(int val1, int val2, int ch){ 
    if(ch == '+') return val1+val2;
    else if(ch == '-') return val1-val2;
    else if(ch == '*') return val1*val2;
    else if(ch == '/') return val1/val2;
}
int main(){
    string str = "2+6*4/8-3";
    stack<int>val;
    stack<char>op;

    for(int i=0; i<str.size(); i++){
        if(str[i] >= 48 && str[i] <= 57){
            val.push(str[i] - 48);
        }else{
            if(op.size() == 0) op.push(str[i]);
            else if(priority(str[i]) > priority(op.top())) op.push(str[i]);
            else{
                while(op.size()>0 && priority(str[i]) <= priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();

                    int ans = solve(val1,val2,ch);
                    val.push(ans); 
                }
                op.push(str[i]);
            }
        }
    }

    if(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();

        int ans = solve(val1,val2,ch);
        val.push(ans); 
    }
    cout<<val.top();

}