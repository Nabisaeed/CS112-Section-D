// C++ Program starts here
#include <iostream>
using namespace std;
    
class employee{
    private:
        int age;
        string name;

    public:
        // Constructor with default values for age and name
        employee(int x=0, string y="Ahmad"): age(x), name(y) {}

        // Overloading the insertion operator '<<' as a friend function
        friend ostream& operator <<(ostream & obj, employee e1){
            obj << "The name of the employee is : " << e1.name << endl;
            obj << "The age of the employee is : " << e1.age << endl;
            return obj;
        }
};

int main() {
    // Creating an object of the employee class with default values
    employee obj1;
    
    // Printing the object using overloaded '<<' operator
    cout << obj1 << endl;
    
    return 0;
}
