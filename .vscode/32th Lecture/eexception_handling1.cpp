// C++ Program starts here

#include <iostream>
using namespace std;

int main()
{
    // Declare variables for input and result
    int a, b, z;

    // Prompt the user to enter values for variables a and b
    cout << "Enter the value of A : ";
    cin >> a;
    cout << "Enter the value of B : ";
    cin >> b;

    try
    {
        // Check if the denominator (b) is zero
        if (b == 0)
        {
            // If b is zero, throw an integer error code 505
            throw 505;
        }

        // Perform division operation
        z = a / b;
    }
    catch (int error)
    {
        // Catch block for handling the exception
        cout << "The type of error found is : " << error << endl;
    }

    // Output the result of division
    cout << z << endl;

    // Return 0 to indicate successful program execution
    return 0;
}
