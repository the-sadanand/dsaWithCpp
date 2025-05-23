#include<iostream>
using namespace std;
class Student
{
public:
        string name;
        int rno;
        float marks;
        Student (string n,int r ,float m ){
            name =n;
            rno =r;
            marks =m;

        }

};
int main(){
    Student s("sadanand ",56,78.89);
    cout<<s.marks;
}
