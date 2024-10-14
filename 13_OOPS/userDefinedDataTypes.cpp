#include <iostream>
using namespace std;
class Car{
    public:
        int price;
        string name;
    };
void change(Car* x){
    // (*x).name = "Honda Amaze";
    x->name = "Honda Amaze";
    // (*x).price = 800000;
    x->price = 800000;
}
int main(){
    Car c1 = {1200000, "Kia Sonet"};
    cout<<c1.name<<" "<<c1.price<<endl;
    change(&c1);
    cout<<c1.name<<" "<<c1.price<<endl;
    

}