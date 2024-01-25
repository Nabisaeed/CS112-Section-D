// C++ Program starts here

#include <iostream>
using namespace std;

// Define an enum named 'color' with constants red=100, blue, green, and black
enum color { red = 100, blue, green, black };

int main() {
    // Declare a variable of type 'color'
    color c1;

    // Assign the value 'black' to the variable 'c1'
    c1 = black;

    // Output the value of 'c1'
    cout << "Color code: " << c1 << endl;

    // Use a switch statement to check the value of 'c1' and print the corresponding color
    switch (c1) {
        case red:
            cout << "The color is red" << endl;
            break;

        case blue:
            cout << "The color is blue" << endl;
            break;

        case green:
            cout << "The color is green" << endl;
            break;

        case black:
            cout << "The color is black" << endl;
            break;

        default:
            cout << "Invalid Color" << endl;
            break;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
