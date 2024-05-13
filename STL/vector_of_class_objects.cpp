// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;

// Define a class 'student' to represent information about students
class student {
public:
    int age;
    string name;

    // Constructor to initialize student objects with age and name
    student(int a, string n) : age(a), name(n) {}

    // Method to display the information about the student
    void display() {
        cout << "The name of the student is : " << name << endl;
        cout << "The age of the student is : " << age << endl;
    }
};

int main() {
    vector<student> v1; // Declare a vector to store student objects

    int age;
    string name;

    // Input loop to gather information about students
    for (int i = 0; i < 1; i++) {
        cout << "Enter the name of student :" << i + 1 << endl;
        cin >> name;

        cout << "Enter the age of student :" << i + 1 << endl;
        cin >> age;

        // Create a student object with the given age and name and push it into the vector
        v1.push_back(student(age, name));
    }

    // Loop to display the information of each student in the vector
    for (student s : v1) {
        s.display();
    }

    return 0;
}
