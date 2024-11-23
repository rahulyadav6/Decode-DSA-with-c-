#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);

    for(auto ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    int target = 5;
    if(s.find(target) != s.end()){
        cout<<target<<" is present in set"<<endl;
    }
}  