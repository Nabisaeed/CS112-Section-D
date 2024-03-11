// C++ Program starts here
#include <iostream>
using namespace std;

// Class employee
class employee {
private: 
    int age;
    string name;

public:
    // Method to set the employee's age and name
    void setter(int a, string n) {
        age = a;
        name = n;
    }

    // Method to get the employee's age
    int get_age() {
        return age;
    }

    // Method to get the employee's name
    string get_name() {
        return name;
    }
};

int main() {
    // Creating an object of class employee
    employee e1;

    // Setting employee's age and name
    e1.setter(23, "Sajid");

    // Displaying employee's name and age
    cout << e1.get_name() << endl;
    cout << e1.get_age() << endl;
    
    return 0;
}
