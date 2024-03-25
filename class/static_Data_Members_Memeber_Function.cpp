// C++ Program starts here

#include <iostream>
using namespace std;

// Define a class named "employee"
class employee {
private:
    int age; // age of the employee
    string name; // name of the employee
    static int count; // static variable to keep track of the number of employee objects created

public:
    // Function to set the age and name of the employee
    void set(int a, string n){
        age = a;
        name = n;
        count++; // increment the count of employees
    }

    // Function to display the count of employee objects
    static void showcount(){
        cout << "The number of objects are " << count << endl;
    }
}; 

// Initializing static member variable count outside the class definition
int employee::count = 0;

int main() {
    employee e1; // Creating an instance of the employee class

    // Setting the age and name of the employee e1
    e1.set(26, "sajid");

    // Displaying the count of employee objects
    employee::showcount();

    return 0;
}
