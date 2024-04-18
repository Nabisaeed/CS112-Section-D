// C++ Program starts here

#include <iostream>
using namespace std;

int main()
{
    // Declare variables for storing user input and result
    int a, b, c;

    // Prompt the user to enter values for variables a and b
    cout << "Enter the value of A : ";
    cin >> a;
    cout << "Enter the value of B : ";
    cin >> b;

    // Add values of a and b, and store the result in c
    a + b = c; // This line will cause a compilation error.It is called semantic error. You cannot assign a value to an expression like this.

    // Output the value of c
    cout << c << endl;

    // The following code is commented out and has syntax errors
    /*
    if (a = b) {
        cout << "The value of a is equal to b" << endl;
    }
    */
    return 0;
}
