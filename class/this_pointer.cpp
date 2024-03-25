// C++ Program starts here

#include <iostream>
using namespace std;

// Define a class named "A"
class A {
private:
    int x; // private member variable x

public:
    // Function to set the value of x
    void set(int x) {
        this->x = x; // "this" pointer is used to refer to the current object's member variable
    }
    
    // Function to display the value of x
    void show() {
        cout << x << endl;
    }
};

int main() {
    A obj; // Creating an instance of class A

    obj.set(100); // Setting the value of x using the set method
    obj.show(); // Displaying the value of x using the show method

    return 0;
}
