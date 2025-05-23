#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    // i can observe one thing here i gave adderess in only in 
    // argument and in rest place using de reference value
}
int main()
{
    int a=4,b=6;
    swap(&a,&b);
    cout<<a<<" "<<b;
}

