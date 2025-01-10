#include <iostream>
using namespace std;
int kmpBruteForce(string str, string p){
    int m = str.size();
    int n = p.size();

    for(int i=0; i<=m-n; i++){
        int first = i;
        int second = 0;
        while(second < n){
            if(str[first] != p[second]){
                break;
            }else{
                first++;
                second++;
            }
            if(second == n) return first - second;
        }
    }
    return -1;
}
int main(){
    string str = "abacdabad";
    string p = "abad";
    cout<<kmpBruteForce(str,p)<<endl;
}