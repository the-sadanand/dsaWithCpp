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
void change(Student s){
    s.name="anand";
}
int main(){
    Student s("sadanand ",56,78.89);
    cout<<s.marks<<endl;
    s.marks= 85;
    cout<<s.marks<<endl;
    change(s);
    cout<<s.name<<endl;
}
