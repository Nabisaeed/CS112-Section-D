// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class 'vehicle' to represent a vehicle
class vehicle {
public:
    string name;    // Public member variable to store the name of the vehicle
    int model;      // Public member variable to store the model of the vehicle
    int price;      // Public member variable to store the price of the vehicle
};

int main() {
    vehicle car1; // Creating an object 'car1' of class 'vehicle'

    // Taking input for the name, model, and price of the car
    cout << "Enter the name :" << endl;
    cin >> car1.name;

    cout << "Enter the model :" << endl;
    cin >> car1.model;

    cout << "Enter the price :" << endl;
    cin >> car1.price;

    // Displaying the details of the car
    cout << "The name of the car is : " << car1.name << endl;
    cout << "The model of the car is : " << car1.model << endl;
    cout << "The price of the car is : " << car1.price << endl;

    return 0; // Indicating successful execution of the program
}
