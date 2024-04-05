// C++ Program starts here
#include <iostream>
using namespace std;

// Function to display the addition result of two integers
void display(int a, int b){
    cout << "The result of addition of two numbers is : " << a + b << endl;
}

// Function to display the addition result of two doubles
void display(double a, double b){
    cout << "The result of addition of two numbers is : " << a + b << endl;
}

int main() {
    // Calling the display function with double arguments
    display(20.23, 50.78);

    return 0;
}
