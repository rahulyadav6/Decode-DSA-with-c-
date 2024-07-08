#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int nst = 1;
    int nsp = n-1;
    for(int i=1;i<=n; i++){
        for(int j=1;j<=nsp;j++)cout<<" ";
        for(int k=1;k<=nst;k++)cout<<"*";
        nsp--;
        nst+=2;
        cout<<endl;
    }
}


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;
//     for(int i=1;i<=n; i++){
//         for(int j=1;j<=n-i;j++)cout<<" ";
//         for(int k=1;k<=(i*2-1);k++)cout<<"*";
//         cout<<endl;
//     }
// }