#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main(){
    unordered_map<string,int>mp;
    pair<string,int>p1;
    p1.first = "Rahul Kumar Yadav";
    p1.second = 12213785;

    pair<string,int>p2;
    p2.first = "Kaushal Thakur";
    p2.second = 12202759;

    pair<string,int>p3;
    p3.first = "Dhiraj Kamti";
    p3.second = 12239521;

    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);

    for(auto ele: mp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

}  