// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

// Define a class 'emplyoee' to store information about employees
class emplyoee {
public:
    string name;
    int age;
    float salary;

    // Constructor to initialize the object with provided values
    emplyoee(string n, int a, float s) : name(n), age(a), salary(s) {}
};

int main() {
    // Create an 'emplyoee' object with provided information
    emplyoee obj("sajid", 34, 15000000);

    // Open a file named "Document.txt" for writing
    ofstream file("Document.txt");

    // Check if the file is successfully opened
    if (file.is_open()) {
        // Write information about the employee to the file
        file << "The name of the employee is: " << obj.name << endl;
        file << "The age of the employee is: " << obj.age << endl;
        file << "The salary of the employee is: " << obj.salary << endl;
    }

    // Close the file
    file.close();

    return 0;
}
