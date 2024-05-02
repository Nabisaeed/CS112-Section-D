// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Creating an fstream object
    fstream obj;

    // Opening the file
    obj.open("Document.txt");

    // Declaring a string variable to store each line
    string line;

    // Reading and printing each line of the file
    while (getline(obj, line)) {
        cout << line << endl;
    }

    // Closing the file
    obj.close();

    // Exiting the program
    return 0;
}
