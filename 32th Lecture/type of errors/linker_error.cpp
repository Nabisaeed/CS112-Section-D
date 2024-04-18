// C++ Program starts here

#include <iostream>
using namespace std;

// Function declaration
void disply();

int main()
{
    // Call the display function
    display(); // This will cause linker error

    // Return 0 to indicate successful program execution
    return 0;
}

// Function definition
void display()
{
    // Output a message indicating the execution of the display function
    cout << "This is display function" << endl;
}
