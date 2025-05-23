#include<iostream>
using namespace std;
class Student
{
public:
        string name;
        int rno;
        float marks;
        Student (string name,int rno ,float marks ){
           this->name=name;
           this->rno=rno;
           this->marks=marks;
        }

};
int main(){
    Student s("sadanand ",56,78.89);
    Student *ptr = &s;
    cout<<s.name<<endl;
    ptr->name="anand";
    cout<<s.name<<endl;
}
