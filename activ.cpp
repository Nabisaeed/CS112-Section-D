// C++ Program starts here

#include <iostream>
using namespace std;

// Function to calculate factorial
int fact(int x){
    // Base case: factorial of 0 or 1 is 1
    if(x == 0 || x == 1){
        return 1;
    }
    else {
        // Recursive case: factorial of x is x multiplied by factorial of (x-1)
        return x * fact(x-1);
    }
}

// Main function where the program execution begins
int main() {
    // Print the factorial of 5 using the fact function and display the result
    cout << "Factorial of 5 is: " << fact(5) << endl;

    // Return 0 to indicate successful completion of the program
    return 0;
}
