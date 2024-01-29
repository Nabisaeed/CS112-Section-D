// C++ Program starts here

#include <iostream>
using namespace std;

// Function prototype for isodd
void isodd(int n);

// Function to check if a number is even
void iseven(int n) {
    // Base case: if n is 0, the number is even
    if (n == 0) {
        cout << "The number is even" << endl;
    } else {
        // Recursive case: check if (n-1) is odd
        isodd(n - 1);
    }
}

// Function to check if a number is odd
void isodd(int n) {
    // Base case: if n is 0, the number is odd
    if (n == 0) {
        cout << "The number is odd" << endl;
    } else {
        // Recursive case: check if (n-1) is even
        iseven(n - 1);
    }
}

// Main function where the program execution begins
int main() {
    // Initialize a variable x with the value 23
    int x = 23;
    
    // Call the iseven function to check if x is even or odd
    iseven(x);

    // Return 0 to indicate successful completion of the program
    return 0;
}
