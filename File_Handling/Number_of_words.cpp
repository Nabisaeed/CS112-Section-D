// C++ Program starts here
#include <iostream> // Include necessary library for input/output operations
#include <fstream>  // Include necessary library for file input/output operations
using namespace std; // Avoids the need to prefix standard library types with std::

int main() // Main function where execution begins
{
    int number_of_words = 0; // Variable to store the count of words
    char ch; // Temporary character variable
    string words; // String variable to store each word read from the file
    fstream file("Document.txt", ios::in); // Open the file named "Document.txt" in input mode

    if (file.is_open()) { // Check if the file is successfully opened
        while (file >> words) { // Loop to read words from the file until the end is reached
            number_of_words++; // Increment the word count for each word read
        }
        file.close(); // Close the file after reading
    }
    
    cout << "The total number of words counted is : " << number_of_words << endl; // Output the total number of words counted
    return 0; // Indicates successful termination of the program
}
