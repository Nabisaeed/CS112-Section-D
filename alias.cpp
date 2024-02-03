// C++ Program starts here

#include <iostream>
using namespace std;

int main() {
    // Define an alias for the int data type
    typedef float integer;

    // Declare and initialize variables using the alias and the original type
    integer x = 45;
    int y = 55;

    // Output the values of the variables
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    // Return 0 to indicate successful program execution
    return 0;
}
