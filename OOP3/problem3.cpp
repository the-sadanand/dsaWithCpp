class Student {
 public:
 int rollNumber;
 static int getRollNumber(){
    return rollNumber;
 }
};
#include<iostream>
using namespace std;
int main(){
    Student s;
    s.rollNumber = 101;
    cout<<s.getRollNumber()<<endl;
}