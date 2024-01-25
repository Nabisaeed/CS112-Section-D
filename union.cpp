// C++ Program starts here

#include <iostream>
using namespace std;

// Define a union named 'student' with members reg_no, grade, and height
union student {
    int reg_no;    // Represents registration number
    char grade;    // Represents grade
    double height; // Represents height
};

int main() {
    // Declare a variable of type 'student'
    student s1;

    // Assign values to the members of the union
    s1.reg_no = 2023300;
    s1.grade = 'A';   // Note: Char literals should be single characters ('A' instead of 'A+')
    s1.height = 6.1;

    // Output the values of the members of the union
    cout << "Registration Number: " << s1.reg_no << endl;
    cout << "Grade: " << s1.grade << endl;
    cout << "Height: " << s1.height << endl;

    // Note: Accessing members of a union directly may lead to unexpected behavior,
    // as the members share the same memory space. Be cautious when interpreting the output.
    
    return 0;
}
