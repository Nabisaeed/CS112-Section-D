// C++ Program starts here
#include <iostream>
using namespace std;

class complex {
    private:
        double real;
        double img;

    public:
        // Constructor with default values
        complex(double x = 0, double y = 0): real(x), img(y) {}

        // Overloading the addition operator '+'
        complex operator +(complex obj) {
            complex obj1(real + obj.real, img + obj.img);
            return obj1;
        }

        // Function to display the complex number
        void display() {
            cout << real << "+" << img << "i" << endl;
        }
};

int main() {
    // Creating complex number objects c1, c2, c3
    complex c1(50, 100), c2(100, 200), c3;

    // Adding c1 and c2 and storing the result in c3
    c3 = c1 + c2;

    // Displaying the result
    c3.display();

    return 0;
}
