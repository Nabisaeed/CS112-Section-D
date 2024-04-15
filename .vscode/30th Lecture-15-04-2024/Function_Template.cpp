// C++ Program starts here
#include <iostream>
using namespace std;

// Template function to add two numbers of different types
template<typename T, typename Y>
void add(T a, Y b){
    cout << "The addition of two numbers is: " << a + b << endl;
}

int main()
{
    // Calling the add function with integer and floating-point arguments
    add<int, int>(20.11, 50);
    return 0;
}
