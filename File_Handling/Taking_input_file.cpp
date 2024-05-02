// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int arr[3]; // Declare an array to store integers
    char ch;    // Declare a character variable

    ifstream file("data.txt"); // Open the file named "data.txt" for reading

    // Read integers from the file and store them in the array
    // Assuming each integer in the file is followed by a character
    for (int i = 0; i < 3; i++) {
        file >> arr[i]; // Read an integer from the file
        file >> ch;     // Read the character after the integer
    }

    // Print the integers stored in the array
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl; // Output the integer
    }

    return 0;
}
