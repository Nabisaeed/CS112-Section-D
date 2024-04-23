// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Opening the file in input/output mode
    fstream file("Document.txt", ios::in | ios::out);

    // Checking if the file is opened successfully
    if (file.is_open()) {
        // Declaring a string variable to store each line
        string existing_text;

        // Reading and printing each line of the file
        while (getline(file, existing_text)) {
            cout << existing_text << endl;
        }

        // Clearing the end-of-file flag
        file.clear();

        // Moving the file pointer to the beginning of the file
        file.seekp(0, ios::beg);

        // Writing new text to the file
        file << "New text will be added" << endl;

        // Closing the file
        file.close();
    }

    // Exiting the program
    return 0;
}
