// C++ Program starts here
#include <iostream>
using namespace std;

class Int {
    private:
        int value;

    public:
        // Constructor with default value
        Int(int x = 0): value(x) {}

        // Setter function to set the value
        void set(int v) {
            value = v;
        }

        // Overloading the subtraction operator '-'
        Int operator -(Int obj) {
            Int obj1(obj.value - value);
            return obj1;
        }

        // Function to display the value
        void display() {
            cout << value << endl;
        }
};

int main() {
    // Creating objects i1, i2, i3 of class Int
    Int i1(100), i2(200), i3;

    // Subtracting i2 from i1 and storing the result in i3
    i3 = i1 - i2;

    // Displaying the result
    i3.display();

    return 0;
}
