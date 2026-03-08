#include <iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // odd even check;
    // if(n%2 == 0){
    //     cout<<n<<" is even";
    // }else{
    //     cout<<n<<" is odd";
    // }




    // abosulut value
    // if(n>0){
    //     cout<<"The absolute value of "<<n<<" is "<<n;
    // }else{
    //     cout<<"The absolute value of "<<n<<" is "<<-1 * n;
    // }
    // return 0;


    // greatest of 3 numbers
    int first,second,third;
    cin>>first>>second>>third;
    if(first > second){
        if(first > third){
            cout<<"Greatest is "<<first;
        }else{
            cout<<"Greatest is "<<third;
        }
    }else{
        if(second > third){
            cout<<"Greatest is "<<second;
        }else{
            cout<<"Greatest is "<<third;
        }
    }
}
