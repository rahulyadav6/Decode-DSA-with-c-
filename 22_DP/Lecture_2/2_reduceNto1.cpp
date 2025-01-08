#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define inf  INT_MAX
using namespace std;
int f(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    if(n==3) return 1;
    return  1 + min({f(n-1),  (n%2 == 0) ? f(n/2) : inf , (n%3 == 0) ? f(n/3) : inf});
}

vector<int>dp;
int ftd(int n){
    // TC -> 0(n) SC -> 0(n)
    if(n==1) return 0;
    if(n==2) return 1;
    if(n==3) return 1;
    if(dp[n] != -1) return dp[n];
    return  dp[n] = 1 + min({ftd(n-1),  (n%2 == 0) ? ftd(n/2) : inf , (n%3 == 0) ? ftd(n/3) : inf});
}

int fbu(int n){
    // TC -> 0(n) SC -> 0(n)
    dp.clear();
    dp.resize(n+1,-1);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i=4; i<=n; i++){
        dp[i] = 1 + min({dp[i-1],  (n%2 == 0) ? dp[i/2] : inf , (n%3 == 0) ? dp[i/3] : inf}); 
    } 
    return dp[n];
}


int main(){ // n -> 1000
    // for recursive solution
    // int n;
    // cout<<"Enter n: ";
    // cin>>n;
    // int minWays =  f(n);
    // cout<<minWays<<endl;

    // dp top down
    int n;
    cout<<"Enter n: ";
    cin>>n;
    dp.clear();
    dp.resize(1005,-1);
    int minWays =  ftd(n);
    int minWay2 =  fbu(n);
    cout<<minWays<<" "<<minWay2<<endl;

    return 0;
}