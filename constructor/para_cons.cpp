// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class 'vehicle' to represent vehicles
class vehicle {
public:
    string company; // Public member variable to store the company name
    int model;      // Public member variable to store the model year

    // Parameterized Constructor
    vehicle(int m, string name) {
        company = name; // Initializing 'company' with the provided name
        model = m;      // Initializing 'model' with the provided year
    }
};

int main() {
    // Creating an object 'v1' of class 'vehicle' with provided values
    vehicle v1(2023, "Toyota");

    // Displaying the company name and model year of the vehicle
    cout << v1.company << endl;
    cout << v1.model << endl;

    return 0; // Indicating successful execution of the program
}
