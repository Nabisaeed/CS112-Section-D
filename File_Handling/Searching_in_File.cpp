// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Declaration of variables
    string search, line;
    int line_number = 1;
    bool found = false;

    // Prompting user to enter the string to search
    cout << "Enter a string to search in a document: ";
    getline(cin, search);

    // Opening the file in input mode
    fstream file("Document.txt", ios::in);

    // Checking if the file is opened successfully
    if (file.is_open()) {
        // Looping through each line in the file
        while (getline(file, line)) {
            // Checking if the search string is found in the current line
            if (line.find(search) != string::npos) {
                // Displaying the line number where the string is found
                cout << "The string is found in line number " << line_number << endl;
                // Setting found flag to true
                found = true;
            }
            // Incrementing line number
            line_number++;
        }

        // Displaying message if the search string is not found in the document
        if (!found) {
            cout << "The string is not found in the document" << endl;
        }

        // Closing the file
        file.close();
    } else {
        // Displaying an error message if the file cannot be opened
        cout << "Error: Unable to open the file" << endl;
    }

    // Exiting the program
    return 0;
}
