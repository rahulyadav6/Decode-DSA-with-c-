#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main(){
    unordered_map<string,int>mp;
    pair<string,int>p1;
    p1.first = "Rahul Kumar Yadav";
    p1.second = 12213785;
    mp.insert(p1);

    //direct insertion also a better way.
    mp["Kaushal Thakur"] = 12202759;
    mp["Dhiraj Kamti"] = 12239521;

    mp.erase("Dhiraj Kamti");

    for(auto ele: mp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

}  