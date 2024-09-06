#include <iostream>
using namespace std;
int numberOfSteps(int num){
    int steps = 0;
    while(num > 0){
        if(num%2==0){
            num/=2;
            steps++;
        }else{
            num-=1;
            steps++;
        }
    }
    return steps;
}
int main(){
    int num;
    cout<<"Enter value of num ";
    cin>>num;
    cout<<numberOfSteps(num);

}