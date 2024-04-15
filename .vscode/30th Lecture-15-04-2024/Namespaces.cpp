// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a namespace named 'name1'
namespace name1 {
    int cout = 1000; // Defining a variable named 'cout' inside 'name1' namespace
}

// Using the 'name1' namespace
using namespace name1;

int main() {
    int cout = 100; // Declaring a variable named 'cout' in the main function

    // Printing the value of 'cout' from the main function scope,
    // followed by the value of 'cout' from the 'name1' namespace
    std::cout << cout << " " << name1::cout;

    return 0;
}
