// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class 'student' to represent students
class student {
public:
    int age;    // Public member variable to store the age of the student
    string name;    // Public member variable to store the name of the student

    // Default Constructor
    student() {
        age = 26;   // Initializing 'age' with the default value 26
        name = "Sajid"; // Initializing 'name' with the default value "Sajid"
    }
};

int main() {
    // Creating objects 's1' and 's2' of class 'student' using the default constructor
    student s1, s2;

    // Displaying the age and name of student 's1'
    cout << s1.age << endl;
    cout << s1.name << endl;

    return 0; // Indicating successful execution of the program
}
