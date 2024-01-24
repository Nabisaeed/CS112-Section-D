// C++ Program starts here
#include <iostream>
using namespace std;

// Define a structure 'car' to represent car information
struct car {
    int model;
    string color;
    int engine;
    bool hybrid;
    int price;
};

// Define a structure 'person' to represent person information with a 'car' attribute
struct person {
    string name;
    string gender;
    car car2;
};

// Function to display information about a car
void car_info(car car1) {
    cout << "Model: " << car1.model << endl;
    cout << "Color: " << car1.color << endl;
    cout << "Price: " << car1.price << endl;
    cout << "Is the car hybrid: " << car1.hybrid << endl;
    cout << "Engine: " << car1.engine << endl;
}

// Function to display information about a person, including car details
void person_info(person person1) {
    cout << "Name: " << person1.name << endl;
    cout << "Gender: " << person1.gender << endl;
    car_info(person1.car2);
}

int main() {
    // Create a car instance and initialize its attributes
    car car1;
    car1.model = 2024;
    car1.color = "Red";
    car1.engine = 1500;
    car1.hybrid = false;
    car1.price = 1900000;

    // Create a person instance and initialize its attributes, including the car attribute
    person person1;
    person1.name = "Sajid";
    person1.gender = "Male";
    person1.car2 = car1;

    // Display information about the person, including car details
    person_info(person1);

    return 0;
}
