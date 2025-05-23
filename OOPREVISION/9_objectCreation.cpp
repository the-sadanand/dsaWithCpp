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
void change(Student* s){
    s->name="Anand";
}
int main(){
    Student* s= new Student("sadanand ",56,78.89);//pointer type object creation
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;
}
