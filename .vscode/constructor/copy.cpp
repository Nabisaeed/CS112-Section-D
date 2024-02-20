// C++ Program starts here
#include <iostream>
using namespace std;
    
    class employee{
public:
string name;
int age;

employee(){

    name= "Ahmad";
    age=28;
   
}

employee(employee &o1){

    o1.age= age;
    o1.name=name;
}
    };
int main()
{
    employee e1;

    employee e2=e1;
    
     return 0;
    
}