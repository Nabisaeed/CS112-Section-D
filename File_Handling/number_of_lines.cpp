// C++ Program starts here
#include <iostream> // Include necessary library for input/output operations
#include <fstream>  // Include necessary library for file input/output operations
using namespace std; // Avoids the need to prefix standard library types with std::

int main() // Main function where execution begins
{
    int number_of_lines = 0; // Variable to store the count of lines
    char ch; // Temporary character variable
    string line; // String variable to store each line read from the file
    fstream file("Document.txt", ios::in); // Open the file named "Document.txt" in input mode

    if (file.is_open()) { // Check if the file is successfully opened
        while (getline(file, line)) { // Loop to read lines from the file until the end is reached
            number_of_lines++; // Increment the line count for each line read
        }
        file.close(); // Close the file after reading
    }
    
    cout << "The total number of lines counted is : " << number_of_lines << endl; // Output the total number of lines counted
    return 0; // Indicates successful termination of the program
}
