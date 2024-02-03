#include "header.h"
#include "structure.cpp"
#include <cassert>
#define Sqaure(x) (#x)
int main(){  

int age=50;
cout<<"The sqaure of 5 is : "<<Sqaure(age)<<endl;

    student s1;

    s1.age=30;
    s1.height=6.2;

    assert(s1.age==30);

    cout<<"The age of the student is : "<<s1.age<<endl;
    cout<<"The height of the student is : "<<s1.height<<endl;

 add(45, 50);


    return 0;
}