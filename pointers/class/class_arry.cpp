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
    vehicle car[3]; // Creating an array of 3 'vehicle' objects to store information about cars

    // Taking input for each car
    for(int i = 0; i < 3; i++) {
        cout << "Enter the name of car " << i + 1 << " :" << endl;
        cin >> car[i].name;
        cout << "Enter the model of the car " << i + 1 << " :" << endl;
        cin >> car[i].model;
        cout << "Enter the price of car " << i + 1 << " :" << endl;
        cin >> car[i].price;
    }

    // Displaying the details of each car
    for(int i = 0; i < 3; i++) {
        cout << "The name of car " << i + 1 << " : " << car[i].name << endl;
        cout << "The model of the car " << i + 1 << " : " << car[i].model << endl;
        cout << "The price of car " << i + 1 << " : " << car[i].price << endl;
    }

    return 0; // Indicating successful execution of the program
}
