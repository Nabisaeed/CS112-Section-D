// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class 'student' to represent a student
class student {
private:
    int age;        // Private member variable to store the age of the student
    string name;    // Private member variable to store the name of the student

public:
    // Public member function to set the name of the student
    void setname(string name) {
        name = name; // This line assigns the parameter 'name' to itself; it should assign to the member variable 'this->name'
    }

    // Public member function to set the age of the student
    void setage(int n) {
        age = n;
    }

    // Public member function to display the name and age of the student
    void display() {
        cout << name << endl;
        cout << age << endl;
    }
};

int main() {
    student s1; // Creating an object 's1' of class 'student'

    // Setting the name and age of the student using member functions
    s1.setname("Abrar");
    s1.setage(26);

    // Displaying the details of the student
    s1.display();

    return 0; // Indicating successful execution of the program
}
