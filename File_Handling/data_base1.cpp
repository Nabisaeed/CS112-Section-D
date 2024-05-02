// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

// Define a class 'student' to store information about students
class student {
public:
    string name;
    int age;
    char grade;
    string dep;

    // Constructor to initialize the object with default values
    student(string n = " ", int a = 0, char g = 'F', string d = " ")
        : name(n), age(a), grade(g), dep(d) {}
};

// Function to read data from a file and store it in an array of 'student' objects
void Read_From_File(string file_name, student arr[], int size) {
    string name;
    int age;
    char grade;
    string dep;

    ifstream file(file_name); // Open the file for reading

    // Read data from the file and store it in the 'arr' array
    for (int i = 0; i < size; i++) {
        file >> name;
        file >> age;
        file >> grade;
        file >> dep;

        arr[i] = student(name, age, grade, dep); // Create a new 'student' object and assign it to the array
    }
}

int main() {
    string line;
    int size = 0;
    ifstream obj("data_base1.txt"); // Open the file for reading

    // Count the number of lines in the file to determine the size of the array
    while (getline(obj, line)) {
        size++;
    }

    student arr[size]; // Create an array of 'student' objects with size equal to the number of lines in the file

    // Read data from the file and store it in the array
    Read_From_File("data_base1.txt", arr, size);

    // Print the information of each student stored in the array
    for (int i = 0; i < size; i++) {
        cout << "The name of student " << i + 1 << " is: " << arr[i].name << endl;
        cout << "The age of student " << i + 1 << " is: " << arr[i].age << endl;
        cout << "The grade of student " << i + 1 << " is: " << arr[i].grade << endl;
        cout << "The department of student " << i + 1 << " is: " << arr[i].dep << endl;
    }

    return 0;
}
