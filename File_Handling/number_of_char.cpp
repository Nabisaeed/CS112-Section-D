// C++ Program starts here
#include <iostream> // Include necessary library for input/output operations
#include <fstream>  // Include necessary library for file input/output operations
using namespace std; // Avoids the need to prefix standard library types with std::

int main() // Main function where execution begins
{
    int number_of_char = 0; // Variable to store the count of characters
    char ch; // Temporary character variable
    fstream file("Document.txt", ios::in); // Open the file named "Document.txt" in input mode

    if (file.is_open()) { // Check if the file is successfully opened
        while (file.get(ch)) { // Loop to read characters from the file until the end is reached
            number_of_char++; // Increment the character count for each character read
        }
        file.close(); // Close the file after reading
        cout << "The number of characters counted is : " << number_of_char << endl; // Output the total number of characters counted
    }
    
    return 0; // Indicates successful termination of the program
}
