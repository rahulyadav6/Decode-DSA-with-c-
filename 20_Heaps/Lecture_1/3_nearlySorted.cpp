#include <iostream>
#include <queue>
using namespace std;
int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int k = 3;
    int n = sizeof(arr)/4;
    vector<int>ans;
    priority_queue<int, vector<int>, greater<int> >pq;

    for(int i=0; i<n; i++){
        pq.push(arr[i]);
        if(pq.size() > k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(auto ele: ans){
        cout<<ele<<" ";
    }
    cout<<endl;
}