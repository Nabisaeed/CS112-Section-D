// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{

    int a=20;

    int *p=&a;

    int &c=a;

    c=200;

    cout<<a<<endl;

    cout<<*p<<endl;
    
     return 0;
    
}