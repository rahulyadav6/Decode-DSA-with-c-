#include <iostream>
#include <vector>
#include <string>
using namespace std;
void computeLPSArray(string& pattern, vector<int>& lps){
    int m = pattern.length();
    int length = 0;
    lps[0] = 0;
    int i=1;
    while(i<m){
        if(pattern[i] == pattern[length]){
            length++;
            lps[i] = length;
            i++;
        }else{
            if(length != 0){
                length = lps[length -1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }
}
void KMPSearch(string& str, string& ptr){
    int n = str.length();
    int m = ptr.length();

    //create LPS array
    vector<int> lps(m);
    computeLPSArray(ptr,lps);

    int i=0; // index for text
    int j=0; // index forpattern

    while(i<n){
        if(ptr[j] == str[i]){
            i++;
            j++;
        }
        if(j==m){
            cout<<"Pattern found at index "<<i-j<<endl;
            j = lps[j-1];
        }else if(i<n && ptr[j] != str[i]){
            if(j!=0){
                j=lps[j-1];
            }else{
                i++;
            }
        }
    }

}
int main(){
    string str = "ababcabcabababd";
    string ptr = "ababd";
    KMPSearch(str,ptr);
    return 0;
}