#include <iostream>
#include <vector>
using namespace std;
void findLps(vector<int>& lps, string s){
    int pre = 0, suf = 1;
    while(suf<s.size()){
        // match
        if(s[pre] == s[suf]){
            lps[suf] = pre+1;
            suf++, pre++;
        }

        // Not matched
        else{
            if(pre == 0){
                lps[suf] = 0;
                suf++;
            }else{
                pre = lps[pre-1];
            }
        }
    }
}
int kmp_optimised(string str, string p){
    vector<int>lps(p.size(),0);
    findLps(lps,p);
    int first = 0;
    int second = 0;
    while(second < p.size() && first < str.size()){
        if(p[second] == str[first]){
            first++;
            second++;
        }else{
            if(second == 0) first++;
            else second = lps[second-1];
        }
    }
    if(second == p.size()) return first - second;
    return -1;

}
int main(){
    string str = "abacdabad";
    string p = "abad";
    cout<<kmp_optimised(str,p)<<endl;
}