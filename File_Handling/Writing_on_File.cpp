// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Creating an ofstream object
    ofstream myfile;

    // Opening the file in output mode
    myfile.open("Document.txt", ios::out);

    // Checking if the file is opened successfully
    if (myfile.is_open()) {
        // Writing a line to the file
        myfile << "Some text to be written on Document" << endl;
        // Closing the file
        myfile.close();
    }

    // Exiting the program
    return 0;
}
