class Student{
  public:
  const int rollNumber;
  int age;
  Student(int r ,int a):rollNumber(r),age(a){

  }
};
#include<iostream>
using namespace std;
int main(){
    Student s1(100,23);
    cout<<s1.rollNumber<<" "<<s1.age;
}