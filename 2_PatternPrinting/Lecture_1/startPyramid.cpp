// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"No of rows: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"*";
//         }
//         for(int l=1; l<i; l++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// nsp and nst method;


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: ";
    cin>>n;
    int nsp=n-1;
    int nst=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp--;
        for(int k=1; k<=nst; k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
    return 0;
}