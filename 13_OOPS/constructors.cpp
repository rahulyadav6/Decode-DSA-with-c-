#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float cgpa;
    Student(string name, int rno, float cgpa){
        this->name = name;
        this->rno = rno;
        this->cgpa = cgpa;
    }
};
int main(){


    Student s1 = {"Kaushal", 21, 9.8};

    Student s2 =   Student("Dhiraj",40,9.9);
}