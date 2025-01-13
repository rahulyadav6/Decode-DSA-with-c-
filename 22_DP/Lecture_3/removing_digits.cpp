#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> getDigits(int n){
    vector<int>v;
    while(n>0){
        if(n%10 != 0) v.push_back(n%10);
        n/=10;
    }
    return v;
}

vector<int>dp;
int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n] != -1) return dp[n];
    
    vector<int>d = getDigits(n);
    int result = INT8_MAX;  
    for(int i=0; i<d.size(); i++){
        result = min(result, f(n-d[i]));
    }
    return dp[n] = 1+ result;
}
int main(){
    int n;
    cin>>n;
    dp.resize(1000005,-1);
    cout<<f(n)<<"\n";
    return 0;
}




#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Initialize dp array
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0; // Base case: 0 steps to reduce 0 to 0

    // Iterate through all numbers up to n
    for (int i = 1; i <= n; i++) {
        int current = i;

        // Extract digits of the current number
        while (current > 0) {
            int digit = current % 10;
            current /= 10;

            // Skip zero digits
            if (digit == 0) continue;

            // Update dp[i] by considering dp[i - digit]
            dp[i] = min(dp[i], dp[i - digit] + 1);
        }
    }

    cout << dp[n] << "\n";
    return 0;
}
