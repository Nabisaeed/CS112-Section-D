// C++ Program starts here
#include <iostream>
using namespace std;
    
// Defining a class named employee
class employee {
public:
    string name;    // Name of the employee
    int age;        // Age of the employee

    // Default constructor initializing name and age
    employee() {
        name = "Ahmad";
        age = 28;
    }

    // Destructor to clean up resources
    ~employee() {
        cout << "Destructor is called " << endl;
    }
};

// Main function where the program execution starts
int main() {
    // Creating a pointer to an instance of the employee class using dynamic memory allocation
    employee *p = new employee;

    // Printing the name and age of the employee
    cout << p->name << endl;
    cout << p->age << endl;

    // Printing a message
    cout << "Helloooo" << endl;

    // Deallocating the memory assigned to the employee object
    delete p;

    return 0;
}
