class Student{
    public:
    int rollNumber;
    int age ;
};
#include<iostream>
using namespace std;
int main(){
    Student s1;
    Student s2=s1;
    s1.rollNumber= 101;
    s1.age = 20;
    cout<<s2.rollNumber<<" "<<s2.age;
}