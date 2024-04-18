// C++ Program starts here

#include <iostream>
using namespace std;

int main()
{
    // Initialize variables
    int a = 12, b = 0, c;

    try
    {
        // Check if the denominator (b) is zero
        if (b == 0)
        {
            // If b is zero, throw a general exception
            throw 404;
        }

        // Perform division
        c = a / b;
    }
    catch (...)
    {
        // Catch block to handle any type of exception
        cout << "Division By zero error found" << endl;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
