// C++ Program starts here

#include <iostream>
using namespace std;

// Recursive function to calculate the sum of integers from x to y
int sum(int x, int y) {
    // Base case: if x is equal to y, return x (the sum is x itself)
    if (x == y) {
        return x;
    } else {
        // Recursive case: return the sum of x and the result of the function called with (x+1, y)
        return x + sum(x + 1, y);
    }
}

// Main function where the program execution begins
int main() {
    // Initialize two variables x and y with values 2 and 4, respectively
    int x = 2;
    int y = 4;

    // Call the sum function to calculate the sum of integers from x to y and display the result
    cout << "The sum of integers from " << x << " to " << y << " is: " << sum(x, y) << endl;

    // The following commented-out code provides an alternative way to calculate the sum using a loop
    // int sum = 0;
    // for (int i = x; i <= y; i++) {
    //     sum += i;
    // }
    // cout << sum << endl;

    // Return 0 to indicate successful completion of the program
    return 0;
}
