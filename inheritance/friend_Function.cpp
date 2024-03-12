// C++ Program starts here
#include <iostream>
using namespace std;

// Declaration of the employee class
class employee {
    private:
        int somedata;

    public:
        // Constructor with initialization list
        employee(int x): somedata(x) {}

        // Declaration of the friend function
        friend void show(employee abc);
};

// Definition of the friend function
void show(employee abc) {
    cout << abc.somedata << endl;
}

// Main function
int main() {
    // Creating an object of employee class with initial value 40
    employee e1(40);
    // Calling the friend function to show the private member
    show(e1);

    return 0;
}
