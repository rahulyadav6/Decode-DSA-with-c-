#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    // set<int>s;
    // s.insert(5);
    // s.insert(1);
    // s.insert(9);
    // s.insert(3);
    // s.insert(0);
    // for(auto ele:s){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;

    // map<int,int>m;
    // m[2] = 20;
    // m[3] = 10;
    // m[1] = 30;
    // for(auto ele:m){
    //     cout<<ele.first<<" ";
    // }
    // cout<<endl;


    map<string,int>m;
    m["Rahul"] = 12213785;
    m["Kaushal"] = 12204753;
    m["Prakash"] = 12229765;
    for(auto ele:m){
        cout<<ele.first<<" ";
    }
    cout<<endl;
}