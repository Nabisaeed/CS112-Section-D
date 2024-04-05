// C++ Program starts here
#include <iostream>
using namespace std;

// Base class representing basic employee details
class employee{
    protected:
        int age;
        string name;

    public:
        // Constructor initializing age and name
        employee(int a, string n): age(a), name(n) {}

        // Virtual function to display employee details
        virtual void display(){
            cout<<"The name of the employee is "<<name<<endl;
            cout<<"The age of the employee is "<<age<<endl;
        }
};

// Derived class representing faculty with additional details
class faculty: public employee{
    private:
        int salary;
        string department;

    public:
        // Constructor initializing all member variables including base class variables
        faculty(int a, string n, int s, string dep): employee(a, n), salary(s), department(dep) {}

        // Overriding the display function to include additional details
        void display(){
            cout<<"The name of the employee is : "<<name<<endl;    
            cout<<"The age of the employee is : "<<age<<endl;
            cout<<"The salary of the employee is : "<<salary<<endl;
            cout<<"The department of the employee is : "<<department<<endl;
        }
};

int main() {
    // Creating an object of the faculty class
    faculty f1(30, "Sajid", 15000, "EE");

    // Creating a pointer of employee type and assigning the address of the faculty object to it
    employee *e1;
    e1 = &f1;

    // Calling the display function using the base class pointer
    e1->display();

    return 0;
}
