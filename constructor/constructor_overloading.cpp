// C++ Program starts here
#include <iostream>
using namespace std;
    
// Defining a class named student
class student {
public:
    int reg_no;     // Registration number of the student
    string name;    // Name of the student
    int DOB;        // Date of Birth of the student (assuming it's stored as an integer)

    // Constructor initializing reg_no only
    student(int reg) {
        reg_no = reg;
    }

    // Constructor initializing reg_no and name
    student(int reg, string n) {
        reg_no = reg;
        name = n;
    }

    // Constructor initializing reg_no, name, and DOB
    student(int reg, string n, int d) {
        reg_no = reg;
        name = n;
        DOB = d;
    }
};

// Main function where the program execution starts
int main() {
    // Creating an instance of the student class with registration number and name
    student s1(2023458, "Sajid");

    // Printing the name of the student
    cout << s1.name << endl;

    return 0;
}
